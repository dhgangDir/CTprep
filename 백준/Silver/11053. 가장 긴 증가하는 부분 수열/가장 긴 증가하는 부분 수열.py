N = int(input())
A = list(map(int, input().split()))
D = [0]*N

D[0] = 1
MAX = 1
for i in range(1, N):
    tmp = 0
    for j in range(i - 1, -1, -1):
        if A[i] > A[j] and D[j] > tmp:
            tmp = D[j]
    D[i] = tmp + 1
    if MAX < D[i]:
        MAX = D[i]

print(MAX)