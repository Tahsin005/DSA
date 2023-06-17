#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int num;
    int k;
    cin>>num>>k;
    while(k--){
        long long int last_digit = num % 10;
        // cout<<last_digit;
        if(last_digit == 0){
            num = num /10;
        }
        else if(last_digit >= 0 && last_digit <= 9){
            num = num - 1;
        }
    }
    cout<<num;
    return 0;
}