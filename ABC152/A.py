def main(n, m):
    print('Yes' if n == m else 'No')


if __name__ == '__main__':
    params = input()
    params = params.split()
    n = int(params[0])
    m = int(params[1])
    main(n, m)
