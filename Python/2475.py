a = list(map(int, input().split()))
def pow(a) :
    return [i*i for i in a]
print(sum(pow(a))%10)
#참고 : https://codingcoding.tistory.com/1124
