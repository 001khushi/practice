// REVERSE STRING: implement a function void reverse(char* strA) in C or C++ which reverse a null-terminated string .
#include<stdio.h>
#include<string.h>
void swap(char* a,char* b){
    char c=*a;
    *a=*b;
    *b=c;
}
void reverse(char* strA){
    if (!*strA)
    {
        return ;
        // while(*end){
        //     ++end;
        // }
    }
    char* begin=strA;
    char* end=begin+strlen(strA)-1;
    while(begin<end){
        // tmp=*str;
        // *str++=*end;
        // *end--=temp;
        swap(begin,end);
        begin++;
        end--; 
    }
    // char temp;
    // for(int i=0;i<l;i++){
    //     char temp=str[i];
    //     str[i]=str[l];
    //     str[l]=temp;
    //     l--;
    // }
}
int main(){
     char strA[]="point";
     reverse(strA);
    printf("%s",strA);
    
     return 0;
}

