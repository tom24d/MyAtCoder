def main(n, ps):
    zeros = [0 for _ in range(n)]
    count = 0
    for i, p in enumerate(ps):
        if i == 0:
            zeros[i] = p
            count += 1
            continue
        else:
            zeros[i] = min(zeros[i - 1], p)

        if p <= zeros[i-1]:
            count += 1

    print(count)


if __name__ == '__main__':
    n = int(input())
    ps = input()
    ps = list(map(int, ps.split()))
    main(n, ps)
