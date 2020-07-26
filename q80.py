n, x0 = map(int, input().split())
c, d = -1, 1001
for i in range(n):
    a, b = map(int, input().split())
    a, b = min(a, b), max(a, b)
    if d < a or c > b:
        print(-1)
        exit()
    else:
        c, d = max(a, c), min(b, d)
if c <= x0 <= d:
    print(0)
else:
    print(min(abs(x0 - c), abs(x0 - d)))