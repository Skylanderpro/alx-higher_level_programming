#!/usr/bin/python3
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def simplify_fraction(numerator, denominator):
    common_divisor = gcd(numerator, denominator)
    simplified_numerator = numerator // common_divisor
    simplified_denominator = denominator // common_divisor
    return simplified_numerator, simplified_denominator

def pow(a, b):
    if b == 0:
        return 1

    if b < 0:
        a = 1 / a
        b = -b

    numerator = 1
    denominator = 1
    for _ in range(b):
        numerator *= a
        denominator *= 1
    simplified_numerator, simplified_denominator = simplify_fraction(numerator, denominator)
    return simplified_numerator / simplified_denominator
