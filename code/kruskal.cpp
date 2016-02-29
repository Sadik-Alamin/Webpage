/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<string>
#include<cstring>
#include<sstream>
#include<cmath>
#include<set>
#include<stack>
#include<queue>
#include<deque>
#include <utility>
#include <bits/stdc++.h>
using namespace std;

#define eps 1e9
#define p printf
#define s scanf
#define pi(x) printf("%d\n",x);
#define pll(x) printf("%lld\n",x);
#define ll long long
#define ull unsigned long long
#define gch getchar()
#define PI 2.0*acos(0.0)
#define pb push_back
#define pp pop_back
#define all(a) a.begin(),a.end()
#define nl p("\n")
#define pf(x) push_front(x)
#define ppf(x) pop_front()

//int min=INT_MAX;
//memset(arr,0,sizeof(arr))
/*map<string,int>::iterator it;
  for(it=mp.begin();it!=mp.end();it++)
      cout<<it->first<<" "<<it->second<<endl;
*/
typedef pair<int,string>pr;

int par[52345];
vector<edge>v;
void makeset(int n)
{
    for(i=1;i<=n;i++)
        par=[i]=i;
        v.clear();
}

int find(int r)
{
    if(par[r]==r)return r;
    else
        return find(par[r]);
}
double kruskal(int n)
{
    sort(v.begin(),v.end());
    int a,b,i,cnt=0,s=0,l;
    l=v.size();
    for(i=0;i<l;i++){
        a=find(v[i].a);
        b=find(v[i].b);
        if(a!=b){
            par[a]=b;
            cnt=max(cnt,v[i].cost);
            s++;
            if(s==n)return cnt;
        }
    }
    return cnt;
}
int main()
{
    freopen ("input.txt","r",stdin);
    return 0;
}
