#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,n,a[123],sum,c,ans,temp;
    while(cin>>n){
        c=1;
        sum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            ans=a[i]+a[n-1];
            temp=sum-ans;
            c++;
            cout<<"ans : "<<ans<<" temp: "<<temp<<" c: "<<c;
            if(ans>temp)break;
        }
        cout<<endl;
        //cout<<c<<endl;
        c=1;
    }
}
