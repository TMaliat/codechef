#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        pair<int,int> feat,one,two; 
        cin >> feat.first >> feat.second >> one.first >> one.second >> two.first >> two.second ;
        if(feat.first==one.first || feat.second==one.first){
            if(feat.first==one.second || feat.second==one.second)
                cout << "1" << endl;
            else cout << "0" << endl;    
        }
        else if(feat.first==two.first || feat.second==two.first){
            if(feat.first==two.second || feat.second==two.second)
                cout << "2" << endl;
            else cout << "0" << endl;    
        }  
        else cout << "0" << endl;    
        }        
}
