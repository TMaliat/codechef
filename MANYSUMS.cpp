#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        pair<int,int> p;
        cin >> p.first >> p.second;
        if(p.first==p.second) cout << "1" << endl;
        else cout << (2*(abs(p.first-p.second)))+1 << endl;
    }
}