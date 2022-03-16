n = int(input())
l = list()
for i in range(n):
    ll = input()
    l.append(ll)
 
setl = list(set(l))
 
m = 0
for i in setl:
    goal = l.count(i)
    if m < goal:
        m = goal
        k = i
 
print(k)
