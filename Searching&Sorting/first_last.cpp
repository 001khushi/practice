#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int arr[],int n,int x)
{
    int count=0;
    vector<int> a;
    for(int i;i<n;i++)
    {
        if(arr[i]==x){
            count++;
        }
    }
    if(count==0){
        a.push_back(-1);
        a.push_back(-1);
    }
    else{
        for(int i=0;i<n;i++){
            a.push_back(i);
            a.push_back(i+count-1);
            break;
        }
    }
    return a;
};
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> a;
    a=find(arr,n,x);
    cout<<a[0]<<" "<<a[1]<<endl;
    return 0;
}