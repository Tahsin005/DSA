#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity - O(N)
Space Complexity - O(N)
*/
int factorial(int n){
    if(n == 1 || n == 0) return 1;
    return n * factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}