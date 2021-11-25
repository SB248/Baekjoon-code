num = int(input())
l = list(map(int,str(num)))
a = num
result = 0
while a >= num/2:
    a = a - 1
    l = list(map(int,str(a)))
    #print(a, l)
    if(sum(l) + a == num) :
        result = a
print(result)
