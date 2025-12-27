def equilateral(sides):
    a = sides[0]
    b = sides[1]
    c = sides[2]
    if a == 0 or b == 0 or c == 0:
        return False
    one = a + b >= c
    two = b + c >= a
    three = a + c >= b
    if not one or not two or not three:
        return False
    return a == b == c

def isosceles(sides):
    a = sides[0]
    b = sides[1]
    c = sides[2]
    if a == 0 or b == 0 or c == 0:
        return False
    one = a + b >= c
    two = b + c >= a
    three = a + c >= b
    if not one or not two or not three:
        return False
    return (a == b and a != c) or (a == c and a != b) or (b == c and a != b) or equilateral(sides)


def scalene(sides):
    a = sides[0]
    b = sides[1]
    c = sides[2]
    if a == 0 or b == 0 or c == 0:
        return False
    one = a + b >= c
    two = b + c >= a
    three = a + c >= b
    if not one or not two or not three:
        return False
    return a != b and a != c and b != c
