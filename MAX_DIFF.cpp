#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int max,sum,diff; cin >> max >> sum;
        if(max>=sum) cout << sum << endl;
        else{
            int num1=abs(sum-max);
            int num2=abs(sum-num1);
            diff=abs(num1-num2);
            cout << diff << endl;
        }
    }
}