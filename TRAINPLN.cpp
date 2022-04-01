#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(long long i=a;i<b;i++)

#define rf(i,a,b) for(long long i=a;i>=b;i--)
#define vll vector<long long>
#define vc vector
#define all(x) x.begin(),x.end()

int main()
{  
    ios_base::sync_with_stdio(0);
    cin.tie(NULL),cout.tie(NULL);
   int TC;
   cin>>TC;
   while(TC--)
   {
     int size;
     cin>>size;
     vll arr1(size);
     f(i,0,size)
       cin>>arr1[i];
     vll arr2(size);
      f(i,0,size)
       cin>>arr2[i];
     vc<vll> slots(size);
     f(i,0,size)
      slots[arr2[i]].push_back(arr1[i]);
     vc<double> dp(size+1,0);
     multiset<long long> s;
     f(i,1,size+1)
     {
        for(auto&j:slots[i-1])
         s.insert(j);
        if(s.size())
         {
             dp[i]=dp[i-1];
             auto it=s.end();;
             it--;
             dp[i]+=*it;
             s.erase(it);
         }
         else
          break;
     }
     f(i,1,size+1)
      dp[i]/=i;
     double ans=*max_element(all(dp));
     cout<<fixed<<setprecision(6)<<ans<<endl;
      
   }
    return 0;
}
