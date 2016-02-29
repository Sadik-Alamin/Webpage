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
#define nl pt("\n")
#define pf(x) push_front(x)
#define ppf(x) pop_front()

//int min=INT_MAX;
//memset(arr,0,sizeof(arr))
/*map<string,int>::iterator it;
  for(it=mp.begin();it!=mp.end();it++)
      cout<<it->first<<" "<<it->second<<endl;
*/
typedef pair<int,string>pr;

double bisection(double x,double a,double b,double c)
{
    double r;
    r=a*pow(x,2)+b*x+c;
    return r;
}
int main()
{
    //freopen ("input.txt","r",stdin);
    double a,b,c,xl,xu,m,temp,err=1.000,fxl,fm,fxu;
    cout<<"Enter a,b,c:"<<endl;
    cin>>a>>b>>c;
    cout<<"Enter xl & xu:"<<endl;
    cin>>xl>>xu;
    while(err>=.00001){
        fxl=bisection(xl,a,b,c);
        fxu=bisection(xu,a,b,c);
        m=(xu+xl)/2;
        fm=bisection(m,a,b,c);
        //cout<<"fm "<<fm<<endl;
        err=abs(fm);
       // cout<<"err : "<<err<<endl;
        temp=fxl*fm;
        if(temp<0){
            xl=xl;
            xu=m;
        }
        else{
            xl=m;
            xu=xu;
        }
    }
    cout<<"The Root is: ";
    cout<<m<<endl;
    return 0;
}
