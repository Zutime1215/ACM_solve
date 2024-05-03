def find_max_k(n, m, a, b):
    ptr_a = 0
    ptr_b = 0
    k = 0
 
    while ptr_a < n and ptr_b < m:
        if a[ptr_a] == b[ptr_b]:
            k += 1
            ptr_a += 1
        ptr_b += 1
 
    return k
 
if __name__ == "__main__":
    for _ in range(int(input())):
        n, m = map(int, input().split())
        a = input()
        b = input()
        print(find_max_k(n, m, a, b))
