#include<bits/stdc++.h>
using namespace std;
int main(){
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    if(r1<l2 || r2<l1){
        cout<<-1<<endl;
    }
    else{
        int intersection_start = max(l1, l2);
        int intersection_end = min(r1, r2);
        cout<<intersection_start<<" "<<intersection_end<<endl;
    }
    return 0;
}