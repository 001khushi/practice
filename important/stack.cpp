#include<iostream>
using namespace std;
class stack
{
    int* arr;
    int top;
    int n;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Overflow"<<endl;
            return ;
        }
        top++;
    }
    void pop(){
        if(top==-1){
            cout<<"Underflow"<<endl;
            return ;
        }

        top--;
    }
    int Top(){
        if(top==-1)
        {
            cout<<"No element present"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};

int main(){
    stack node;
    node.push(1);
    node.push(2);
    node.push(3);
    cout<<node.Top()<< endl;
    node.pop();
    cout<<node.Top()<< endl;
    node.pop();
    node.pop();
    node.pop();
    cout<<node.empty()<< endl;
    return 0;

}
