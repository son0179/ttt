arr=[]
i=0
j=0

n=int(input())

while(n!=0):
    arr.insert(i,n%2)
    i=i+1
    n=n//2

for j in range(i-1,-1,-1):
    print(arr[j])






































