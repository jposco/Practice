x, y = map(int, input().split())
s1 = set()
s2 = []
for i in range(x):
    s1.add(input())
for i in range(y):
    s2.append(input())
cnt=0
for i in s2:
    if(i in s1):
        cnt+=1
print(cnt)