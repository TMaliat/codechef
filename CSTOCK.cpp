#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        double s,a,b,c; cin >> s >> a >> b >> c;
        double np=s+((s*c)/100);
        //cout << np << endl;
        if(np>=a && np<=b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}