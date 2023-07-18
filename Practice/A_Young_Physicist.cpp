#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sumx = 0,sumy = 0,sumz = 0;
    int a[n][3];
    for(int i = 0; i < n; i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(int i = 0; i < n; i++){
        int x = a[i][0];
        int y = a[i][1];
        int z = a[i][2];

        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx == 0 && sumy == 0 && sumy == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}