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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int c=1;
        int m=n;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                c++;
            }
            else{
                m=min(m,c);
                c=1;
            }
        }
        m=min(m,c);
        if(m==1){
            cout<<-1<<endl;
        }
        else{
            int k=0;
            int res[n];
            res[0]=1;
            for(int i=1;i<n-1;i++){
                if(arr[i]==arr[i+1]){
                    res[i]=i+1;
                }
                else{
                    res[i]=k;
                    k=i+1;
                }
            }
            res[n-1]=k;

            for(int i=0;i<n;i++){
                cout<<res[i]+1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}