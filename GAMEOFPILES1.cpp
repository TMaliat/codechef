#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        long long length,s=0; cin >> length;
        vector<long long> v(length); 
        for(int i=0;i<length;i++) {
            long long element;
            cin >> element;
            s=s+element;
            v.push_back(element);
            }
        //sort(v.begin(),v.end());
        //if(v.at(0) % 2==0) cout << "CHEFINA" << endl;
        //else cout << "CHEF" << endl;
        if(find(v.begin(),v.end(),1)!=v.end() || s%2) cout << "CHEF" << endl;
        else cout << "CHEFINA" << endl;
    }
}