#include<iostream>
using namespace std;
int permute(int n,int r){
    int ans=0;
    if(r==0) return 1;
    else{
    int ans=permute(n,r-1)*(n-r+1)/r;
    }
    return ans;
}
int main(){
    int n=9,r=5;
    // cin>>n>>r;
    cout<<permute(n,r);
     return 0;
}