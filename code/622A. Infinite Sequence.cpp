/*I wanna fuck u
 lucifer lucifer...
 hate hate u
 lucifer lucifer...
بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم*/
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
   // freopen ("input.txt","r",stdin);
    ll i,n,ans,temp;
    while(cin>>n){
        for(i=1;i<112345678901234;i++){
            temp=i*(i+1)/2;
            if(n<=temp)break;
        }
        ans=i-(temp-n);
        cout<<ans<<endl;
    }
    return 0;
}
