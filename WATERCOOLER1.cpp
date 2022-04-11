#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,rent,cost,month; cin >> test;
    while(test--){
        cin >> rent >> cost >> month;
        if((rent*month)>= cost) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}