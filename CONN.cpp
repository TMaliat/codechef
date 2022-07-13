#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        if(n<7 && n%2!=0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}