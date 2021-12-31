import numpy
from math import gcd
from functools import reduce


def lcm(a, b):
    return int(a * b // gcd(a, b)) % (1e+9 + 7)


def main(n, ps):
    num = reduce(lcm, ps)
    array = num / numpy.array(ps)
    ans = numpy.sum(array)
    ans = ans % int(1e+9 + 7)
    print(int(ans))


if __name__ == '__main__':
    n = int(input())
    ps = input()
    ps = list(map(int, ps.split()))
    main(n, ps)
