n ,m = map(int, input().split());
l =list(map(int, input().split()));
result = 0
for a in l:
    for b in l:
        for c in l:
            if(a != b and b != c and c != a and a+b+c <= m and a+b+c >= result):
                result = a+b+c
print(result)
