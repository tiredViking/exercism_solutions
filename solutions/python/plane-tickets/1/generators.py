"""Functions to automate Conda airlines ticketing system."""


def generate_seat_letters(number):
    """Generate a series of letters for airline seats.

    :param number: int - total number of seat letters to be generated.
    :return: generator - generator that yields seat letters.

    Seat letters are generated from A to D.
    After D it should start again with A.

    Example: A, B, C, D

    """
    SEAT_LETTERS = ['A', 'B', 'C', 'D']
    for i in range(number):
        index = i % 4
        yield SEAT_LETTERS[index]

def generate_seats(number):
    """Generate a series of identifiers for airline seats.

    :param number: int - total number of seats to be generated.
    :return: generator - generator that yields seat numbers.

    A seat number consists of the row number and the seat letter.

    There is no row 13.
    Each row has 4 seats.

    Seats should be sorted from low to high.

    Example: 3C, 3D, 4A, 4B

    """
    SEAT_LETTERS = ['A', 'B', 'C', 'D']
    seats_generated = 0
    row_number = 1
    
    while seats_generated < number:
        if row_number == 13:
            row_number += 1
            continue 
            
        for letter in SEAT_LETTERS:
            if seats_generated >= number:
                return

            seat_id = str(row_number) + letter
            yield seat_id
            
            seats_generated += 1
        row_number += 1
    

    
def assign_seats(passengers):
    """Assign seats to passengers.

    :param passengers: list[str] - a list of strings containing names of passengers.
    :return: dict - with the names of the passengers as keys and seat numbers as values.

    Example output: {"Adele": "1A", "Björk": "1B"}

    """
    output = dict()
    current_seat = generate_seats(len(passengers))
    for passenger in passengers:
        output[passenger] = next(current_seat)
    return output
    
    

def generate_codes(seat_numbers, flight_id):
    """Generate codes for a ticket.

    :param seat_numbers: list[str] - list of seat numbers.
    :param flight_id: str - string containing the flight identifier.
    :return: generator - generator that yields 12 character long ticket codes.

    """
    for item in seat_numbers:
        first_part = item + flight_id
        final_part_lenght = 12 - len(first_part)
        ticket = first_part + '0' * final_part_lenght
        yield ticket
        
    
