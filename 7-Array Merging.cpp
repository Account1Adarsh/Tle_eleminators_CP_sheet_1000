//watched solution
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
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int sum=0;
        int res=0;
        int arr[2*n+1]={0};
        int brr[2*n+1]={0};

        for(int i=0;i<n;i++){
            int k=a[i];
            sum=0;
            while(a[i]==k and i<n){
                sum++;
                i++;
            }
            arr[k]=max(arr[k],sum);
            i--;
        }
        for(int i=0;i<n;i++){
            int k=b[i];
            sum=0;
            while(b[i]==k and i<n){
                sum++;
                i++;
            }
            brr[k]=max(brr[k],sum);
            i--;
        }
        res=0;
        for(int i=0;i<=2*n;i++){
            res=max(res,arr[i]+brr[i]);
        }
        
        cout<<res<<endl;
    }
    return 0;
}
