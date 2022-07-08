#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int marks,x,y; cin >> marks;
        if(marks!=0)
        {
            int reminder=marks % 3;
            if(reminder==0){
                x=marks / 3;
                y=(x*3)-marks;
                cout << y << endl;
            }
        else if(reminder!=0){
                x=(marks / 3)+1;
                y=(x * 3) -marks;
                cout << y << endl;
            }
        }
        else {
            cout << "0" << endl;
        }
    }
}