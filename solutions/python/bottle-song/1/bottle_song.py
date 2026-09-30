def recite(start, take=1):
    sentences = []
    current_number = start
    number_words = ["no", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"]
    for number in range(take):
        if number > 0:
            sentences.append("")
        now = current_number
        next = current_number - 1
        if now == 0:
            return False
        
        if now == 1:
            sentences.append(f"{number_words[current_number].capitalize()} green bottle hanging on the wall,")
            sentences.append(f"{number_words[current_number].capitalize()} green bottle hanging on the wall,")
        else:
            sentences.append(f"{number_words[current_number].capitalize()} green bottles hanging on the wall,")
            sentences.append(f"{number_words[current_number].capitalize()} green bottles hanging on the wall,")
        
        sentences.append(f"And if one green bottle should accidentally fall,")
        
        if next == 1:
            sentences.append(f"There'll be {number_words[next]} green bottle hanging on the wall.")
        else:
            sentences.append(f"There'll be {number_words[next]} green bottles hanging on the wall.")

        current_number -= 1
    
    return sentences
        
        
