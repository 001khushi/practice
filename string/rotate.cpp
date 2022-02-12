#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p,q;
    cin>>p>>q;
    int first,last;
    last=p.length()-1;
    for(first=0;first<last;first++)
    {
        char temp=p[first];
        p[first]=p[last];
        p[last]=temp;
        last--;
    }
    if(p==q)
    {
        cout<<"rotational";
    }
    else{
        cout<<"Not";
    }
}