#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {23,5,4,2,7,45,89,55,43};
    int n = 9;
    int x = 55;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cout<<"Avaliable";
            break;
        }
    }
    /*
    Types of notations (for this program) - 
        Worst case notation - O(N)
        Best case notation - (Omega) §(1) 
        Average case notation - (Theta) ⌀(N)
    */
    return 0;
}