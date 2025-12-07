"""Functions for tracking poker hands and assorted card tasks.

Python list documentation: https://docs.python.org/3/tutorial/datastructures.html
"""


def get_rounds(number):
    """Create a list containing the current and next two round numbers.

    :param number: int - current round number.
    :return: list - current round and the two that follow.
    """
    lista = [number, number+1, number+2]
    return lista


def concatenate_rounds(rounds_1, rounds_2):
    """Concatenate two lists of round numbers.

    :param rounds_1: list - first rounds played.
    :param rounds_2: list - second set of rounds played.
    :return: list - all rounds played.
    """
    lista = rounds_1 + rounds_2
    return lista
    


def list_contains_round(rounds, number):
    """Check if the list of rounds contains the specified number.

    :param rounds: list - rounds played.
    :param number: int - round number.
    :return: bool - was the round played?
    """
    if number in rounds:
        return True
    else:
        return False
    


def card_average(hand):
    """Calculate and returns the average card value from the list.

    :param hand: list - cards in hand.
    :return: float - average value of the cards in the hand.
    """
    sum = 0
    for item in hand:
        sum += item
    return sum / len(hand)

def approx_average_is_average(hand):
    """Return if the (average of first and last card values) OR ('middle' card) == calculated average.

    :param hand: list - cards in hand.
    :return: bool - does one of the approximate averages equal the `true average`?
    """

    real_average = card_average(hand)

    first_and_last_average = (hand[0] + hand[-1]) / 2
    median = hand[len(hand) // 2]

    if median == real_average or first_and_last_average == real_average:
        return True
    else:
        return False


def average_even_is_average_odd(hand):
    """Return if the (average of even indexed card values) == (average of odd indexed card values).

    :param hand: list - cards in hand.
    :return: bool - are even and odd averages equal?
    """
    even_counter = 0
    odd_counter = 0
    even_sum = 0 
    odd_sum = 0
    
    for index, item in enumerate(hand):
        if index % 2 == 0:
            even_counter += 1
            even_sum += item
        elif index % 2 != 0:
            odd_counter += 1
            odd_sum += item
            
    even_average = even_sum / even_counter
    odd_average = odd_sum / odd_counter

    return even_average == odd_average
           
           
        

def maybe_double_last(hand):
    """Multiply a Jack card value in the last index position by 2.

    :param hand: list - cards in hand.
    :return: list - hand with Jacks (if present) value doubled.
    """

    if hand[-1] == 11:
        hand[-1] = 22
        return hand
    else:
        return hand
