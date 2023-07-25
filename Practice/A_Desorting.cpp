#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        long long ans = LLONG_MAX;
        for(int j = 0; j < n - 1; j++){
            if(a[j + 1] < a[j]){
                ans = 0;
                break;
            }
            ans = min(ans , ((a[j + 1] - a[j]) / 2LL) + 1LL);
        }
        cout<<ans<<endl;
    }
    return 0;
}