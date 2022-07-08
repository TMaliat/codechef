#include<bits/stdc++.h>
using namespace std;

bool frequency(int *array,int size){
    int flag=0;
    int fr[size],visited=-1;
    for(int i=0;i<size;i++) {
        int count=1;
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                count++;
                fr[j]=visited;
            }
        }
        if(fr[i]!=visited) fr[i]=count;
    }
    for(int i=0;i<size;i++){
        if(fr[i]!=visited){
            if(fr[i]%array[i]!=0) {
            flag=1;
            break;
        }
            }
    }
    if(flag==0) return true;
    else return false;
}

int main(){
    int test; cin >> test;
    while(test--){
        int size,array[100006]; cin >> size;
        for(int i=0;i<size;i++) cin >> array[i];
        bool b=frequency(array,size);
        if(!b) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}