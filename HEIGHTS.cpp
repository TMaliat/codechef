#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int size; cin >> size;
        vector<int>v(size+1);
        map<int,int>mp;
        for(int i=0;i<size;i++){
            cin >> v[i];
            int x=v[i];
            mp[x]++;
        }
        int count=0,maxFreq=0;
        for(auto it:mp){
            int x=it.first;
            int freq=it.second;
            maxFreq=max(maxFreq,freq);
            if(freq==1) count++;
        }
        if(count!=1) //count==0 or count>=2
            cout << (count+1)/2 << endl;
        else{
            sort(v.begin()+1,v.end());
            if(mp[v[size]]!=1) cout << "1" << endl;
            else{
                if(maxFreq>2) cout << "1" << endl;
                else cout << "2" << endl;
            }
        }
    }
}
