#include<bits/stdc++.h>
using namespace std;
int main(){
    int test; cin >> test;
    while(test--){
        int n,x; cin >> n >> x;
        int imdb=0;
        while(n--){
            int s,r; cin >> s >> r;
            if(s<=x && imdb<r) imdb=r;
        }cout << imdb << endl;
    }
}
