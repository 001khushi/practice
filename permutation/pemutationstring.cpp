#include<iostream>
#include<string.h>
using namespace std;
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void permutation(int l,int r,char *a){
    int i;
    if(l==r){
        cout<<a<<endl;
    }
    else{
        for(i=1;i<=r;i++){
            swap((a+l),(a+i));
            permutation((l+1),r,a);
            swap((a+l),(a+i));
        }
    }
}
int main()
{
    char str[]="ABC";
    int n=strlen(str);
    permutation(0,n-1,str);
    return 0;

}