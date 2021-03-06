#include<iostream>
#include<stack>
using namespace std;

int reversingAStack(stack<int> &a){
    
    // Base case
    if( a.size() == 1){
        int temp = a.top();
        a.pop();
        return temp;
    }

    // Rec case
    int temp = a.top();
    a.pop();
    return reversingAStack(a);
    // a.push(temp);
}

int main(int argc, char const *argv[])
{
    
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);

    while(not a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }

    a.push(1);
    a.push(2);
    a.push(3);
    cout<<endl;

    reversingAStack(a);
    // cout<<a.top();

    while(not a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }

    return 0;
}
