#include <iostream>

using namespace std;

int main()
{
    int n,i,j, ele;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array element in a single line with space in between them: \n";
    for ( i = 0; i < n; i++) cin>>arr[i];
    cout<<"Which element you want to search: ";
    //-------------------------------------------------------------------------------
    //The linear search is as follows
    for ( j = 0; j < n; j++)
    {
        if(arr[j] == ele){
            cout<<"We got the element at position: "<<j+1<<endl;
            return 0;
        }
        
    }
    //--------------------------------------------------------------------------------
    cout<<"The searched element is not in the array :(\n";
    return 0;
}
