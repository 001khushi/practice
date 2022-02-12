/*#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
      cin>>arr[i];
    }
    for(int i=4;i>=0;i--)
    {
      cout<<arr[i]<<endl;
    }
    return 0;
}*/
#include<iostream>
using namespace std;
void reversearray(int arr[],int start, int end)
{
    while(start<end)
    {
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printarray(int arr[],int end)
    {
        for(int i=0;i<end;i++)
        {
         cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
int main()
{
        int arr[]={1,2,3,4,5,6};
        int n=sizeof(arr)/sizeof(arr[0]);
        reversearray(arr,0,n-1);
        printarray(arr,n);
        return 0;
}