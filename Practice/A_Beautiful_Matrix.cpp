#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int find=1,mini,minj,pos=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==find){
                mini=i;
                minj=j;
                break;
            }
        }
    }
    if(mini==2 && minj==2){
        cout<<0;
    }
    else if((mini==2 && minj==1) || (mini==1 && minj==2) || (mini==2 && minj==3) || (mini==3 && minj==2)){
        cout<<1;
    }
    else if((mini==2 && minj==0) || (mini==1 && minj==1) || (mini==0 && minj==2) || (mini==1 && minj==3) || (mini==2 && minj==4) || (mini==3 && minj==3) || (mini==4 && minj==2) || (mini==3 && minj==1)){
        cout<<2;
    }
    else if((mini==1 && minj==0) || (mini==0 && minj==1) || (mini==0 && minj==3) || (mini==1 && minj==4) || (mini==2 && minj==1) || (mini==1 && minj==2) || (mini==2 && minj==3) || (mini==3 && minj==2) || (mini==3 && minj==4) || (mini==4 && minj==3) || (mini==4 && minj==1) || (mini==3 && minj==0)){
        cout<<3;
    }
    else if((mini==0 && minj==0) || (mini==0 && minj==4) || (mini==4 && minj==0) || (mini==4 && minj==4)){
        cout<<4;
    }
    return 0;
}