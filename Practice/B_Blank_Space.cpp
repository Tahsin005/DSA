#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxspace=INT_MIN;
        int countspace=0;
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                countspace++;
            }
            else{
                maxspace= max(maxspace,countspace);
                countspace=0;
            }
        }
        maxspace= max(maxspace,countspace);
        cout<<maxspace<<endl;
    }
    return 0;
}