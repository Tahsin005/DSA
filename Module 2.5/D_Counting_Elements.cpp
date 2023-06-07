// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(v[i]>v[j]){
//                 swap(v[i],v[j]);
//             }
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<v[i]<<" ";
//     // }
//     int flag=0;
//     int count=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(v[i]+1==v[j]){
//                 flag=1;
//                 count++;
//                 break;
//             }
//         }
//     }
//     if(flag==0) cout<<"0";
//     else cout<<count;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt = 0;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        auto it = find(a.begin(), a.end(), a[i] + 1);
        if (it != a.end()) cnt++;
    }
    cout<<cnt;
    return 0;
}