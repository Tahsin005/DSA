#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int num;
    cin >> num;
    long long int count = 0, four = 0, seven = 0;
    bool flag = true;
    if (num >= 0 && num <= 9){
        cout << "NO";
    }
    else{
        while (num > 0){
            long long int digit = num % 10;
            if (digit != 4 && digit != 7){
                flag = false;
            }
            else if (digit == 4 || digit == 7){
                count++;
                if (digit == 4){
                    four++;
                }
                if (digit == 7){
                    seven++;
                }
            }
            num = num / 10;
        }
        if(count == 7 || count==4){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}