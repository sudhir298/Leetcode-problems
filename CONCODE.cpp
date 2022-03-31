#include<iostream>
#include<algorithm> 
#include<map>
#include<set>
#include<climits>  
#include<vector>    
#include<cmath>
#include<cstring>
#include<iomanip>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res=0;
    int i=0;
    int k=n;
    char ch='1';
    vector<pair<int,int>> v;
    while(i<n)
    {
        if(s[i]==ch)
        {
            v.push_back({i+1,min(k,n-i)});
            k--;
            while(s[i]==ch && i<n)
                i++;
            if(ch=='1')
                ch='0';
            else
                ch='1';
            i--;
        }
        i++;
    }
    cout<<v.size()<<'\n';

    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<' '<<v[i].second<<"\n";
    

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
     }
    return 0;
}
