#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int x; cin >> x;
        if(x%10==0) cout << "0" << endl;
        else cout << x%10 << endl;
    }
}