n = int(input())
cnt = 0
len_all = 0

for _ in range(n):
    arr = input()

    len_all += len(arr)
    if arr[0] == 'a':
        cnt += 1
print(len_all, cnt)