#include<bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve(){
    i64 n,k,b,s;
    cin>>n>>k>>b>>s;
    if(s<b*k||s>(b*k)+n*(k-1)){
        cout<<-1<<endl;
    }
    else{
        i64 res[n];
        
        for(int i=0;i<n;i++){
            res[i]=0;
        }
        res[0]=b*k;
        s-=b*k;
        for(int i=0;i<n;i++){
            if(s>0){
                if(s>=k){
                    res[i]+=(k-1);
                    s-=(k-1);
                }
                else{
                    res[i]+=s;
                    s=0;
                }
                
            }
            else{
                break;
            }
            
        }
        for(int i=0;i<n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
