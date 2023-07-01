#include<bits/stdc++.h>
using namespace std;
void decimalToBinary(int decimal){
    int binary[32];
    int index = 0;

    while(decimal > 0){
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    cout<<"Binary representation: ";
    for(int i = index - 1; i >= 0; i--){
        cout<<binary[i];
    }
    cout<<endl;
}
int main(){
    int decimal;

    cout<<"Enter a decimal number: ";
    cin>>decimal;

    decimalToBinary(decimal);

    return 0;
}