#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cin>>year;

    while(true){
        year++;
        string yearString = to_string(year);
        sort(yearString.begin(),yearString.end());

        bool flag = true;
        for(int i=0;i<yearString.length()-1;i++){
            if(yearString[i] == yearString[i+1]){
                flag = false;
                break;
            }
        }

        if(flag){
            cout<<year<<endl;
            break;
        }
    }

    return 0;
}