#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int last=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;

}