#include<bits/stdc++.h>
using namespace std; 
int main(){
    int test; cin >> test;
    while(test--){
        pair<string,int> a,b,c;
        a.first="Alice";
        b.first="Bob";
        c.first="Charlie";
        cin >> a.second >> b.second >> c.second;
        if(a.second>=b.second && a.second>=c.second){
            cout << a.first << endl;
        }
        else if(b.second>=a.second && b.second>=c.second){
            cout << b.first << endl;
        }
        else {
            cout << c.first << endl;
        }
    }
}