#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int ans = 0, curr = 0, mx =0;
        for(int i = 0; i < n; i++){
            curr++;
            if(i == n - 1 or abs(a[i + 1] - a[i]) > k){
                mx = max(mx,curr);
                curr = 0;
            }
        }
        ans = n - mx;
        cout<<ans<<endl;
    }
    return 0;
}