#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//seen solution
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                flag=true;
                break;
            }
        }
        flag?cout<<"YES\n":cout<<"NO\n";
    }

    return 0;
}