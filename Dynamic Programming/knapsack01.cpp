#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b){
   return (a>b)?a:b;
}

int knapsack(int n, int w,int v[],int wt[]){
    if(w==0) return 0;
    if(n<=0) return 0;
    if(w<wt[n-1]) {return knapsack(n-1,w,v,wt);}
    else{
        return max(knapsack(n-1,w,v,wt),knapsack(n-1,w-wt[n-1]+v[n-1],v,wt));
    }

}
int main(){
    int w=50,n=3;
    int v[]={60,100,150};
    int wt[]={15,30,45};
    cout<<knapsack(n,w,v,wt);
    return 0;
}