from collections import defaultdict

def main(n):
    count = 0
    headtail = defaultdict(int)
    for num in range(1, n+1):
        num_s = str(num)
        h = num_s[0]
        t = num_s[-1]
        ht = str(h) + str(t)
        headtail[ht] += 1

    for num in range(1, n+1):
        num_s = str(num)
        # reverse
        t = num_s[0]
        h = num_s[-1]
        ht = str(h) + str(t)
        count += headtail[ht]

    print(count)


if __name__ == '__main__':
    n = int(input())
    main(n)
