def is_valid(isbn):
    code_with_only_numbers = isbn.replace('-', '')
    if len(code_with_only_numbers.strip()) != 10: #number of digits in an isbn code
        return False
    elif any(not number.isdigit() for number in code_with_only_numbers[:-1]):
        return False
    else:
        multiplier = 10
        sum_of_digits = 0
        for number in code_with_only_numbers:
            if not number.isdigit() and number == 'X':
                sum_of_digits += 10
                multiplier -= 1
            elif not number.isdigit() and number != 'X':
                return False
            else:
                sum_of_digits += int(number) * multiplier
                multiplier -= 1
        if sum_of_digits % 11 == 0:
            return True
        else:
            return False
            
            
        
