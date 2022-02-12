#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int first,last;
    last=a.length()-1;
    for(int i=0;i<last;i++)
    {
        int temp=a[i];
        a[i]=a[last];
        a[last]=temp;
        last--;
    }
    cout<<a;
    // while(first<last){
    //     int temp=a[first];
    //     a[first]=a[last];
    //     a[last]=temp;
    //     first++;
    //     last--;
    // }
    // cout<<a;
}