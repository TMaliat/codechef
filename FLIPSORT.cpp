#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<int>>resin;

    for(int i = n-1;i>=0;i--){
      if(s[i]=='0'){
        int x = i+1;
        for(int j = 0;j<=i;j++) {
          if(s[j]=='1') s[j]='0';
          else s[j] = '1';
        }
        resin.push_back({1ll,x});
      }
    }
    int size = resin.size();
    cout<<size<<endl;
    for(auto x:resin) cout<<x[0]<<" "<<x[1]<<endl;
}

int main() {
    int t;cin>>t;
    while(t--){
    solve();
    }
 return 0;
}