for i in range(1,10) :
   n = int(input())
   if i == 1:
       a = n
       b = i
       continue
   else :
       if n > a :
           a = n
           b = i
print(a, b, sep="\n")
