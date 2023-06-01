n, m = map(int, input().split())
words = set()
count = 0
for i in range(n):
    word = input()
    words.add(word)
    
for i in range(m):
    word =input()
    if word in words:
        count+=1
print(count)