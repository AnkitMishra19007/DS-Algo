#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,find;
    int* arr;
    printf("Enter the length of array- " );
    scanf("%d",&n);
    printf("Enter the values of array separated by space\n");
    arr= malloc(n*sizeof(int));
    //taking the value of array as input
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to search- ");
    scanf("%d",&find);
    //here we are performing linear search
    //as soon as we found the value, we are returning
    for(i=0;i<n;i++){
        if(arr[i]==find){
            printf("%d was found at index %d",find,i);
            return 0;
        }
    }
    //if we cant fing the value then we display the message
    printf("Value not found");
    return 0;
}
