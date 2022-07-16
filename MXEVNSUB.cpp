#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        long long int size,sum=0,i; cin >> size;
        for(i=1;i<=size;i++) sum+=i;
        if(sum%2==0) cout << size << endl;
        else cout << size-1 << endl;
    }
}