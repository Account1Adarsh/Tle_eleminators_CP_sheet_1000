#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comparator(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        pair<ll,ll> a[n];
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            a[i].first=x;
        }
        for(int i=0;i<n;i++) {
            cin>>x;
            a[i].second=x;
        }
        sort(a,a+n,comparator);
        ll res=p;
        ll k=n-1;
        int i=0;
        while(k>0 and i<n){
            if(a[i].second<p){
                k-=a[i].first;
                res+=a[i].first*a[i].second;
            }
            else{
                if(k!=0) res+=k*p;
                k=0;
            }
            i++;
        }
        if(k<0){
            res+=(k*a[i-1].second);
        }
        cout<<res<<endl;

    }
    return 0;
}