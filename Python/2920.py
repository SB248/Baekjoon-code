a = list(map(int, input().split()))
if((sorted(a) == a) and (a[0] == 1)) :
    print("ascending")
elif ((sorted(a, reverse=True) == a) and (a[0] == 8)) :
    print("descending")
else :
    print("mixed")
