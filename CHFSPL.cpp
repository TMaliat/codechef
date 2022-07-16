#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while (test--)
    {
        vector<int>v; 
        for(int i=0;i<3;i++) {
            int element; cin >> element; 
            v.push_back(element);
        }
        sort(v.begin(),v.end());
        long long int sum=v[1]+v[2];
        cout << sum << endl;
    }
}