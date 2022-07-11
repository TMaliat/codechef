#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int num_children,num_candies; cin >> num_children >> num_candies;
        if(num_children <= num_candies) cout << "0" << endl;
        else{
            int diff=num_children-num_candies;
            if(diff % 4 == 0) cout << diff/4 << endl;
            else cout << (diff/4)+1 << endl;
        }
    }
}