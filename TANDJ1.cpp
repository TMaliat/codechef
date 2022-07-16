#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        long long int a,b,c,d,k; cin >> a >> b >> c >> d >> k;
        long long int steps=abs(a-c)+abs(b-d);
        if(k==steps) cout << "YES" << endl;
        else if(k<steps) cout << "NO" << endl;
        else if(k>steps) {
            if((k-steps)%2==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}