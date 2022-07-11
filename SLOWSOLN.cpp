#include<bits/stdc++.h>
using namespace std; 
int main(){
    int test_case; cin >> test_case;
    while(test_case--){
        long long int test,size,sum_size; cin >> test >> size >> sum_size;
        long long int chunk=0,worst=0;
        while((sum_size>=0) && test--){
            if(sum_size - size >= 0) chunk=size;
            else chunk=sum_size;
            worst=worst+(chunk*chunk);
            sum_size=sum_size - size;
        }
        cout << worst << endl;
    }
}