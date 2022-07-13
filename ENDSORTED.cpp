#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int size; cin >> size;
        vector<int> v;
        int end,start;
        for(int i=0;i<size;i++){
            int element; cin >> element;
            v.push_back(element);
            if(element==1) start=i;
            else if(element==size) end=i;
        }
        if(end<start) 
            cout << (size+1-(end+1))+(start)-2 << endl;
        else
            cout << (size+1-(end+1))+(start)-1 << endl;
    }
}