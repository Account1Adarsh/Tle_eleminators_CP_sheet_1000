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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if((i-arr[i])==(j-arr[j])) {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}