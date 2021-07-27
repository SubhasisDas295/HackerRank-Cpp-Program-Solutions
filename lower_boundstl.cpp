#include <bits/stdc++.h>
using namespace std;


int main() 
{
   int n,m,val;
   cin >>n;
   vector <int>arr(n);
   for(int i=0;i<arr.size();i++)
   {
       cin>>arr[i];
   }
   cin>>m;
   for(int i=0;i<m;i++)
   {
       cin>>val;
       vector <int>::iterator low=lower_bound(arr.begin(),arr.end(),val);
       if(arr[low-arr.begin()]==val)
       {
           cout<<"Yes "<<(low-arr.begin()+1)<< endl;
       }
       else
       {
           cout<<"No "<<(low-arr.begin()+1)<<endl;
       }
   }
 return 0;
}