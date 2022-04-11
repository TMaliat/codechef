#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,guard,apple; cin >> test;
    while(test--){
        cin >> guard >> apple; 
        if(guard>=apple) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}