#include<bits/stdc++.h>
using namespace std;

void solution(){
    int size,operation;
    cin >> size >> operation;

    vector<int> array(size);
    for(int i=0;i<size;i++) cin >> array[i];
    sort(array.begin(),array.end());
    operation=min(operation,size-1);
    cout << array[operation] << endl;
}
signed main(){
    int test;
    cin >> test;
    while(test--) solution();
    return 0;
}