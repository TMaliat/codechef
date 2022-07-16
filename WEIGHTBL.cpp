#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int w1,w2,x1,x2,m; cin >> w1 >> w2 >> x1 >> x2 >> m;
        int diff=w2-w1;
        if(diff >=x1*m && diff<=x2*m) cout << "1" << endl;
        else cout << "0" << endl;
    }
}