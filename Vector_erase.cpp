#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,p,q,r;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }  
    cin>>p;
    cin>>q>>r;
    a.erase(a.begin()+(p-1));
    a.erase(a.begin()+(q-1),a.begin()+(r-1));
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    } 
    return 0;
}