#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int seat,student; cin >> seat >> student;
        if(seat>=student) cout << "0" << endl;
        else if(seat<student) cout << student-seat << endl;
    }
}
