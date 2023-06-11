#include<bits/stdc++.h>
using namespace std;
void fun(int *p){
    *p=50;
}
int main(){
    int value=10;
    int *ptr=&value;
    fun(ptr);
    cout<<value<<endl;
    cout<<&value<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}