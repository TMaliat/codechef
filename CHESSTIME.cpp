#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        long long int free_hrs; cin >> free_hrs;
        long long int full_game=(free_hrs*60) / 20;
        cout << full_game << endl;
    }
}