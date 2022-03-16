n = int(input())
li = list(map(int, input().split()))[:n]
li.sort()
if n % 2 == 0:
    m = n // 2 - 1
else:
    m = n // 2 
print(li[m])
