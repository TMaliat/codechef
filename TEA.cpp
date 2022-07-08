 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int test; cin >> test;
    while(test--){
        int x,y,z; cin >> x >> y >> z;
        if(x<=y) cout << z << endl;
        else {
            int reminder=x%y;
            if(reminder==0) {
                cout << (x/y)*z << endl;
            }
            else{
                cout << ((x/y)+1)*z << endl;
            }
        }
    }
 }