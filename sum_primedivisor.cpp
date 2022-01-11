#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,i=1;
    while(n>i)
    {
        if(n%i==0)
        {
            sum+=i;
            i++;
        }
    }
    if(sum==n)
        cout<<yes;
    else
        cout<<no;
    return 0;
}