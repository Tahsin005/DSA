#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        string word;
        stringstream ss(s);
        map<string, int> mp;

        string firstWord;
        int maxCount = 0;

        while(ss >> word){
            mp[word]++;
            if(mp[word] > maxCount){
                maxCount = mp[word];
                firstWord = word;
            }
        }
        cout<<firstWord<<" "<<maxCount<<endl;
    }
    return 0;
}