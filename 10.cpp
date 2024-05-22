#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        char k;
        cin>>n>>k;
        string s;
        cin>>s;
        int mark=0;
        int count=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]==k and mark==0){
                mark=1;
            }
            if(s[i]=='g' and mark==1) {
                mark=0;
                res=max(res,count);
                count=0;
            }
            if(mark==1) count++;
            res=max(res,count);
        }
        if(mark==1){
            for(int i=0;i<n;i++){
                if(s[i]=='g') break;
                count++;
            }
            res=max(res,count);
        }
        cout<<res<<endl;
    }
    return 0;
}