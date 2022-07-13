#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int d,l,r; cin >> d >> l >> r;
        if(d>r) cout << "Too late" << endl;
        else if(d<l) cout << "Too early" << endl;
        else cout << "Take second dose now" << endl;
    }
}