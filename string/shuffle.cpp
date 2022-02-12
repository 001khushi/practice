#include<bits/stdc++.h>
using namespace std;
int main(){
    string p,r,sum;
    cin>>p>>r>>sum;
    int l1,l2,sl;
    l1=p.length();
    l2=r.length();
    sl=sum.length();
    if((l1+l2)!=sl)
        cout<<"No";
    else{
        int f=0;
        int i=0,j=0,k=0;
        while(k<sl){
            if(i<l1 and p[i]==sum[k]) i++;
            else if(j<12 and r[j]==sum[k]) j++;
            else{
                f=1;
                break;
            }
            k++;
            }
            if(i<l1 or j<l2) cout<<"No";
            else cout<<"yes";
        }
    }
    



