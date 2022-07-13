#include <bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int a,b,x; cin >> a >> b >> x;
        int res=(b-a)/x;
        cout << res << endl;
    }
}