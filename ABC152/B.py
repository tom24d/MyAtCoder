def main(a, b):
    ans = ''
    if a > b:
        for _ in range(a):
            ans += str(b)
    elif a <= b:
        for _ in range(b):
            ans += str(a)

    print(ans)


if __name__ == '__main__':
    params = input()
    params = params.split()
    a = int(params[0])
    b = int(params[1])
    main(a, b)
