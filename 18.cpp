#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int k;

        //a=x0 b=y0 c=xw d=yh
        ll a=0,b=0,c=0,d=0;
        
        cin>>k;
        int y0[k];
        for(int i=0;i<k;i++) cin>>y0[i];
        b=y0[k-1]-y0[0];

        cin>>k;
        int yh[k];
        for(int i=0;i<k;i++) cin>>yh[i];
        d=yh[k-1]-yh[0];

        cin>>k;
        int x0[k];
        for(int i=0;i<k;i++) cin>>x0[i];
        a=x0[k-1]-x0[0];

        cin>>k;
        int xw[k];
        for(int i=0;i<k;i++) cin>>xw[i];
        c=xw[k-1]-xw[0];
        
        ll res=max(c*w,a*w);
        res=max(res,b*h);
        res=max(res,d*h);
        cout<<res<<endl;
        
    }
    return 0;
}