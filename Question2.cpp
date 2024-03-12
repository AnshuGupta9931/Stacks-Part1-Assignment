#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s1;
    stack<int>s2;
    int k;
    cout<<"Enter K:";
    cin>>k;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    while(k-1){
        s2.push(s1.top());
        s1.pop();
        k--;
    }
    cout<<s1.top();
    while(s2.size()){
        s1.push(s2.top());
        s2.pop();
    }
}