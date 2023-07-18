#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ui unsigned int

#define vi vector<int>
#define vb vector<bool>
#define vs vector<string>
#define vl vector<ll>
#define pb push_back
#define spb insert

#define cin_the_array   \
    for (int i = 0; i < n; i++) \
    {                            \
        cin >> a[i];             \
    }
#define cout_the_array  \
    for (int i = 0; i < n; i++) \
    {                            \
        cout << a[i] << " ";     \
    }                            \
    cout << endl;

#define testcase \
    int n;       \
    cin >> n;    \
    while (n--)  \
#define YES cout<<"YES"<<endl;
#define Yes cout<<"Yes"<<endl;
#define NO cout<<"NO"<<endl;
#define No cout<<"No"<<endl;
#define nl cout<<endl;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++){
            int a;
            cin>>a;
            v[i].first = a;
        }
        for(int i = 0; i < n; i++){
            int b;
            cin>>b;
            v[i].second = b;
        }
        sort(v.begin(),v.end());

        long long int ans = k;
        for(int i = 0; i < n; i++){
            if(v[i].first <= ans){
                ans += v[i].second;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
