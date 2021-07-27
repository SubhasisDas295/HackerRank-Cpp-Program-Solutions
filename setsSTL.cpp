#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    set <int>s;
    for(int i=0;i<q;i++)
    {
        int m,n;
        cin>>m>>n;
        if(m==1)
        {
            s.insert(n);
        }
        else if(m==2)
        {
            s.erase(n);
        }
        else
        {
            set<int>::iterator itr=s.find(n);
            if(itr==s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}