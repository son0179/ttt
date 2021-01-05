arr=[1,4,7,14,2,9,10,8,9,15]
tmp=arr[9]

for n in range(9,0,-1):
    arr[n]=arr[n-1]
    

arr[0]=tmp

print(arr)




