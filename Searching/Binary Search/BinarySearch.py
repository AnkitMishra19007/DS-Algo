#below is a function that iteratively performs binary search
def binarySearch(arr,left,right,find):
    #calculating mid pointer
    mid= (left+right)//2
    #if we found the value then just return the index
    if(arr[mid]==find):
        return mid
    #if the below condition occurs that means the value not found
    if(left==right):
        return -1
    #if the element we are looking for is on left side
    if(arr[mid]>find):
        return binarySearch(arr,left,mid,find)
    #if the element that we are looking for is on the right side
    if(arr[mid]<find):
        return binarySearch(arr,mid+1,right,find)
    
n= int(input("Enter the length of array- "))
print("Enter the values of array separated by space")
#taking input from user in a single line
arr= list(map(int,input().split()))
find= int(input("Enter the value to search-  "))
i= binarySearch(arr,0,n-1,find)
if(i==-1):
    print("Value not found")
else:
    print("%d was found at index %d"%(find,i))
