arr=[1,4,7,14,2,9,10,8,9,15]
tmp=arr[0]

for n in range(0,9,1):
    arr[n]=arr[n+1]

arr[9]=tmp

print(arr)




