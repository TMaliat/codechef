#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int size; 
        string str; cin >> size >> str;
        bool ans=true;
        while(size>0){
            if(size%2==1) size--;
            else{
                int mid=size/2 - 1;
                if(str.substr(0,mid)==str.substr(mid+1,size-mid)){
                    //continue;
                    size/=2;
                }
                else {
                    ans=false;
                    break;
                }
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}