#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int marks_a,marks_b,marks_c; cin >> marks_a >> marks_b >> marks_c;
        if(marks_a >=10 && marks_b >=10 && marks_c >=10){
            if(marks_a + marks_b + marks_c >=100) cout << "PASS" << endl;
            else cout << "FAIL" << endl;
        }
        else cout << "FAIL" << endl;
    }
}