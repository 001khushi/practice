#include<iostream>
using namespace std;
int main(){
    string p,r;
    cin>>p>>r;
    int l1=p.length();
    p=p+p;
    if(p.find(r))
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
return 0;
}