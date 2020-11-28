n= int(input("Enter the length of array- "))
print("Enter the values of array separated by space")
arr= list(map(int,input().split()))
find= int(input("Enter the value to search-  "))
for i in range(n):
    if(arr[i]==find):
        print("%d was found at index %d"%(find,i))
print("Value not found")
