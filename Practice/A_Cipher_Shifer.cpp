#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        cin>>n;
        char a[n];
        scanf("%s",a);
        char now=a[0];
        cout<<a[0];
        for(int i=1;i<strlen(a)-1;i++){
            if(a[i]==now){
                now=a[i+1];
                i++;
                cout<<now;
            }
        }
        cout<<endl;
    }
    return 0;
}