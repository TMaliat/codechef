#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,free,files_1,files_2;
    cin >> test ;
    while(test--){
        cin >> free >> files_1 >> files_2;
        if(((files_2 * 2)+ files_1) <= free) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}