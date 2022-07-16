#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        long long int u,v,a,s; cin >> u >> v >> a >> s;
        if((v*v)>((u*u)-(2*a*s))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}