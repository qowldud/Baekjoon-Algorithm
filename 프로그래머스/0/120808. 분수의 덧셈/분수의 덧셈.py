from fractions import Fraction

def solution(numer1, denom1, numer2, denom2):
    a = Fraction(numer1, denom1)
    b = Fraction(numer2, denom2)
    sum = a + b
    return [sum.numerator, sum.denominator]
    