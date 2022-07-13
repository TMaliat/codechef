#include<bits/stdc++.h>
using namespace std;
int frequency_controller(int *array,int size){
    int freq[10000];
    int count;
    for(int i=0; i<size; i++) freq[i] = -1;
    for(int i=0; i<size; i++)
    {
        count = 1;
        for(int j=i+1; j<size; j++)
        {
            if(array[i]==array[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    int frequency=0;
    for(int i=0;i<size;i++){
        if(freq[i]==1) frequency++;
    }
    return frequency;
}
int main(){
    int test; cin >> test;
    while(test--){
        int size; cin >> size;
        int array[10000];
        for(int i=0;i<size;i++) cin >> array[i];
        int res=frequency_controller(array,size);
        if(res==0) cout << "0" << endl;
        else if(res==1) cout << "1" << endl;
        else if(res>1) {
            if(res%2==0) cout << res/2 << endl;
            else cout << (res/2)+1 << endl;
        }
    }
}