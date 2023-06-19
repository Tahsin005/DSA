#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin>>size;
    char arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int count_n = 0;
    int count_z = 0;
    
    int length = strlen(arr);
    for (int i = 0; i < length; i++) {
        if (arr[i] == 'n') {
            count_n++;
        } else if (arr[i] == 'z') {
            count_z++;
        }
    }
    for(int i=0;i<count_n;i++){
        cout<<"1 ";
    }
    for(int i=0;i<count_z;i++){
        cout<<"0 ";
    }
    return 0;
}
