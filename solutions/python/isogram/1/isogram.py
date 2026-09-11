def is_isogram(phrase):
    letters = []
    phrase = phrase.lower()
    for letter in phrase:
        if not letter.isalpha():
            pass
        elif letter in letters:
            return False
        else:
            letters.append(letter)
    return True
