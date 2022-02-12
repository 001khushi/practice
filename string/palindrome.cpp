#include<iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    b=a;
    int first,last;
    last=a.length()-1;
    for(int i=0;i<last;i++)
    {
        char temp=b[i];
        b[i]=b[last];
        b[last]=temp;
        last--;
    }
    if(a==b)
    {
        cout<<"palindrom";
    }
    else{
        cout<<"Not Palindrom";
    }
    return 0;
}