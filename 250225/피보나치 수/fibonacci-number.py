'''
피보나치 수열
1, 1, 2, 3, 5, 8 ... 
'''
def fibo(n):
    if n <= 2:
        return 1
    return fibo(n - 1) + fibo(n - 2)

N = int(input())
print(fibo(N))


    

