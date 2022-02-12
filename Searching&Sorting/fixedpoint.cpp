#include<iostream>
#include<vector>
using namespace std;
vector<int> fixed(int arr[],int n){
    vector<int> a;
    for(int i=0;i<n;i++){
        if(arr[i]==i+1){
            a.push_back(arr[i]);
        }
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i;i<n;i++){
        cin>>arr[i];
    }
    vector<int> a;
    a=fixed(arr,n);
    for(int x:a){
        cout<<x;
    }
    return 0;
}