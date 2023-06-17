#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    int sum1=a[2]-a[1];
    int sum2=a[1]-a[0];
    cout<<sum1+sum2;
    return 0;
}