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

int main()
{
    //freopen ("input.txt","r",stdin);
    int k,n,w,ans,sum;
    while(cin>>k>>n>>w){
        sum=w*(w+1)/2*k;
        ans=sum-n;
        cout<<max(0,ans)<<endl;
    }
    return 0;
}
