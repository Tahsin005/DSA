#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
    Faster
    int t;
    cin>>t;
    while(t--){
        ll n,m,k,h;
        cin>>n>>m>>k>>h;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            bool ok = false;
            for(ll x = 1; x <= m; x++){
                for(ll y = x + 1; y <= m; y++){
                    if(x == y){
                        continue;
                    }
                    ll hDiff = abs(v[i] - h);
                    ll sDiff = y - x;
                    sDiff *= k;
                    if(hDiff == sDiff){
                        ok = true;
                    }
                }
            }
            ans += (ok);
        }
        cout<<ans<<endl;
    }
    return 0;
}