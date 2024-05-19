#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(k!=4){
            //cout<<"a: ";
            int res=k;
            for(int i=0;i<n;i++){
                res=min(res,k-arr[i]%k);
                if(arr[i]%k==0) res=0;
            }
            cout<<res<<endl;
        }
        else{
            //cout<<"b: ";
            int res=k;
            for(int i=0;i<n;i++){
                res=min(res,k-arr[i]%k);
                if(arr[i]%k==0) res=0;
            }
            int a=0,b=0;
            for(int i=0;i<n;i++){
                 if(arr[i]%2==0) a++;
                 else b++;
            }
            if(a>=2) cout<<0<<endl;
            else{
                if(a==1){
                    cout<<min(res,1)<<endl;
                }
                else cout<<min(res,2)<<endl;
            }
            
        }
    }
    return 0;
}