#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, m, a;
    cin>>n>>m>>a;

    long long numFlagstones = ((n + a - 1) / a) * ((m + a - 1) / a);

    cout<<numFlagstones<<endl;

    return 0;
}
