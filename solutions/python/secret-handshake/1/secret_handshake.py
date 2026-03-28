def commands(binary_str):
    reversed_list = binary_str[::1]
    code = []
    if binary_str[4] == "1":
        code.append("wink")
    if binary_str[3] == "1":
        code.append("double blink")
    if binary_str[2] == "1":
        code.append("close your eyes")
    if binary_str[1] == "1":
        code.append("jump")
    if binary_str[0] == "1":
        code.reverse()
    return code
    