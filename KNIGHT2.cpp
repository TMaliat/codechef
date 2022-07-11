#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
        if(((x1+y1)%2)==0 && ((x2+y2)%2)==0) cout << "YES" << endl;
        else if(((x1+y1)%2)==1 && ((x2+y2)%2)==1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}