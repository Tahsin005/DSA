#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int count=0;
        int i = 0;
        int j = n-1;
        while(i<j){
            count = count + abs(a[i]- a[n-i-1]);
            i++;
            j--;
        }
        cout<<count<<endl;
    }
    return 0;
}