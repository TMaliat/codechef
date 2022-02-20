#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int len = s.length();
	    
	    string s1 = s.substr(0,len/2);
	    string s2;
	    
	    if(len%2==0){
	        s2 = s.substr(len/2, len/2);
	    }
	    else{
	        s2 = s.substr(len/2 + 1, len/2);
	    }
	    
	    sort(s1.begin(),s1.end());
	    sort(s2.begin(),s2.end());
	    int flag = 1;
	    for(int i = 0; i<len/2; i++){
	        if(s1[i]!=s2[i]){
	            flag=0;
	            break;
	        }
	    }
	   
	    
	    if(flag==1){
	        cout<<"YES"<<endl;
	    }
	    else if(flag==0)
	        cout<<"NO"<<endl;
	    
	}
	return 0;
}
