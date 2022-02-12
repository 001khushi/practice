#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string p;
    map<char,int> m;
    cin>>p;
    for(int i=0;i<p.length();i++)
    {
        m[p[i]]++;
}
for(auto it : m){
    if(it.second >1)
    {
        cout<<" Duplicate  "<<it.first<<" count "<<it.second << endl;
    }
}
}