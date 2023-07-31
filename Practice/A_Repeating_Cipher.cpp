// /******************************************************************/
//  *                                                                 *
//  *   |''||''|     |     ||     ||'   ;''''';.   '||'  '|.   '|'    *
//  *      ||       |||    ||     ||   ||           ||    |'|   |     *
//  *      ||      |  ||   |||||||||     \___       ||    | '|. |     *
//  *      ||     .''''|.  ||     ||          \     ||    |   |||     *
//  *      ||    .|.  .||. ||     ||.  ".......'   .||.  .|.   '|     *
//  *                                                                 *
// /******************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define Faster ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

int main(){
    Faster
    int n,sum = 0,cnt = 0;
    string s;
    cin>>n;
    cin>>s;

    for(int i = 1; i <=n ;i += cnt + 1){
        cnt++;
        cout<<s[i-1];
    }

    return 0;    
}