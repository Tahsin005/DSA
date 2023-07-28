#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1; i <=t; i++){
        string s;
        cin>>s;
        int cnt=0;
        vector<int> v;
        int mx=INT_MIN;
 
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='1'){
                cnt++;
            }
            else{
                if(cnt!=0) v.push_back(cnt);
                cnt=0;
            }
        }
        if(cnt!=0) v.push_back(cnt);
 
        if(v.empty()) v.push_back(0);
 
        sort(v.begin(),v.end(),greater<int>());
 
        long long int sum =0;
        for(int i = 0; i < v.size(); i++){
            if(i%2==0) sum += v[i];
        }
 
        cout<<sum<<endl;
 
    }
 
 
    return 0;
}
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         vector<int> v;
//         for(int i = 0; i < s.length(); i++){
//             int val = s[i] - '0';
//             v.push_back(val);
//         }
//         int n = v.size();

//         int j = 0;
//         for(int i = 0; i < n; i++){
//             if(v[i] != 0 || (i > 0 && v[i] == 0 && v[i - 1] != 0)){
//                 v[j] = v[i];
//                 j++;
//             }
//         }

//         v.resize(j);
//         stack<int> st1;
//         for(int i = 0; i < v.size(); i++){
//             st1.push(v[i]);
//         }
//         int zaza = 0;
        
//         bool lever = true;
//         while(!st1.empty()){
//             if(lever == true && st1.top() == 1){
//                 zaza++;
//             }
//             else if(lever == true && st1.top() == 0){
//                 lever = false;
//             }
//             else if(lever == false && st1.top() == 0){
//                 lever = true;
//             }
//             st1.pop();
//         }
//         cout<<zaza<<endl;
//     }
//     return 0;
// }
