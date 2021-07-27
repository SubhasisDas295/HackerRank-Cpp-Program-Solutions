#include<bits/stdc++.h>
using namespace std;


int main() {
    int q;
    cin>>q;
    map<string,int>m;
    for(int i=0;i<q;i++)
    {
        int p;
        cin>>p;
        string s;
        if(p==1)
        {
            int n;
            cin>>s>>n;
            m[s]+=n;
        }
        else if(p==2)
        {
            cin>>s;
            m.erase(s);
        }
        else
        {
            cin>>s;
            map<string,int>::iterator itr=m.find(s);
            if(itr==m.end())
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<m[s]<<endl;
            }
        }
    }   
    return 0;
}