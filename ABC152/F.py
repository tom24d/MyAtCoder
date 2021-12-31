from collections import defaultdict
import numpy
from math import gcd
from functools import reduce
import networkx as nx


def path_length(g: nx.Graph, s, t):
    paths = list(nx.all_simple_edge_paths(g, s, t))
    if len(paths) != 1:
        raise ValueError("err")
    path = paths[0]
    return len(path)


def main(g, rst):
    ans_ura = 0
    all_count = 2 ** (len(g.nodes) - 1)
    for restriction in rst:
        source = restriction[0]
        target = restriction[1]
        path_len = path_length(g, source, target)
        else_edge_num = len(g.edges) - path_len
        comb = 2 ** else_edge_num
        ans_ura += comb
    print(all_count - ans_ura)


if __name__ == '__main__':
    g = nx.Graph()
    n = int(input())
    for _ in range(n - 1):
        ab = input()
        ab = list(map(int, ab.split()))
        g.add_edge(ab[0], ab[1])
    m = int(input())
    rst = []
    for _ in range(m):
        uv = input()
        uv = list(map(int, uv.split()))
        rst.append((uv[0], uv[1]))
    main(g, rst)
