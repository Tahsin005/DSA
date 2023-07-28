#include<bits/stdc++.h>
using namespace std;
int main(){
    long long arr[] = {0,1,1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,37268,65536,131072,262144,524288,1048576};
    long long a;
    cin>>a;
    long long ans = powl(2,a - 1) * arr[a];
    cout<<ans;
    return 0;
}
// int main(){
//     int n;
//     cin>>n;
//     if(n == 1){
//         cout<<1;
//     }
//     else if(n == 2){
//         cout<<2;
//     }
//     else{
//         int val = 1;
//         for(int i = 3; i <= n; i++){
//             val = val * 2;
//         }
//         int nodes = 2;
//         for(int j = 3; j <= n; j++){
//             nodes = nodes * 2;
//         }
//         cout<<nodes * val;
//     }
//     return 0;
// }