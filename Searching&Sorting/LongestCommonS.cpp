// Given an array positive integers.Find the length of the longest subsequence such that elements in the subsequence are consecutive integers,the consecutive numbers cab be in any order.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int LongestCS(int arr[],int n){
    int count=1;
    sort(arr,arr+n);
    int m=1;
    for(int i=0;i<n;i++){
        if(arr[i+1]==arr[i]){
            continue;
        }
        if(arr[i+1]==arr[i]+1){
            count++;
            if(count>m){ //check weather the count value is smaller than 1 or not.if it is smaller than 1 then it only the 1.
                m=count;
            }
        }
        else count=1;
    }
     return m;
    
}
int main(){
    int n,t,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<LongestCS(arr,n);
    return 0;
}