#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],a[m];
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        map[arr[i]];
    }
     for(int i=0;i<m;i++)
    {
        cin>>a[i];
        map[a[i]];
    }
    cout<<map.size()<<endl;
    }