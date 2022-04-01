#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int TC;cin>>TC;
    while(TC--){
        int length,tax_x,tax_y;
        cin >> length >> tax_x >> tax_y;
        string s; cin>> s;
        int cnt0,cnt1;
        cnt0=cnt1=0;
        for(auto bit:s)
            bit=='1'? cnt1++ : cnt0++;
        if(cnt1 and cnt0) cout << min(tax_x,tax_y) << '\n';
        else cout << "0\n";    
    }
    return 0;
}