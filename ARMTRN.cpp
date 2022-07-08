#include<bits/stdc++.h>
using namespace std ;
void insertionSort(long long int * array,long long int  size )
{
    long long int  key,j;
    for(long long int  i=1;i<=size-1;i++)
    {
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
}
int main(){
    long long int  test; cin >> test;
    while(test--){
        long long int  array[1000],size; cin >> size;
        long long int  mid=size/2;
        for(long long int  i=0;i<size;i++){
            cin >> array[i];
        }
        insertionSort(array,size);
        long long int  attack=0,defence=0,max_rating=0;
        for(long long int  i=0;i<mid;i++){
            defence=defence+(1000-array[i]);
        }
        for(long long int  i=mid;i<size;i++){
            attack=attack+array[i];
            }
        cout << attack * defence << endl;
    }    
}