#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int guest,vegetable,fruit,fish; cin >> guest >> fruit >> vegetable  >> fish;
        if((fish+fruit)>=guest && vegetable>=guest) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}