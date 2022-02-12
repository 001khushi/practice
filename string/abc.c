#include<stdio.h>
struct  node{
    char x,y,z;
};
int main(){
    struct node p={'2','1','a'+2};
    struct node *q=&p;
    printf("%c,%c",*((char*)q+1),*((char*)q+2));
    return 0;
}