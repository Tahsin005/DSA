#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> count(n+1,0);

        for(int i=0;i<n;i++){
            cin>>v[i];
            count[v[i]]++;
        }

        int index = -1;
        int unique = INT_MAX;
        for(int i=0;i<n;i++){
            if(count[v[i]] == 1 && v[i]<unique){
                unique = v[i];
                index = i + 1;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}