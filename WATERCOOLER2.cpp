#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,rent,cost,month; cin >> test;
    while(test--){
        cin >> rent >> cost;
        month = cost % rent;
        if((rent*month) >= cost) cout << "0" << endl;
        else cout << month << endl;
    }
}