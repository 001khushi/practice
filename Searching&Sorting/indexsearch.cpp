#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x,k,i=0;
    cin>>k>>x;
    while(i<n){
        if(arr[i]==x){
            cout<<i;
            break;
        }
      i=i+max(1,abs(arr[i]-x)/k);
      
    }
    return -1;

}