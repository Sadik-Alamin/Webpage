#include<iostream>
using namespace std;

int main()
{
    int a[6],b[6],i;
    bool f;
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]){
        cin>>b[0]>>b[1]>>b[2]>>b[3]>>b[4];
        f=true;
        for(i=0;i<5;i++){
            if(a[i]==b[i]){
                f=false;
                break;
            }
        }
        if(f)cout<<"Y\n";
        else cout<<"N\n";
    }
    return 0;
}
