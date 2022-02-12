#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ma=INT_MIN;
    int max=0;
    for(int i=0;i<n;i++)
    {
        max=max+arr[i];
        if(max>ma)
        {
            ma=max;
        }
        if(max<0)
        {
            max=0;
        }
    }
    cout<<ma;

}