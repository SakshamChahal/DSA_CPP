#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<arr[0];
    }
    else if(n==2){
        cout<<arr[0]*arr[1]<<" ";
        cout<<arr[1]*arr[0];
    }
    else{
        cout<<arr[0]*arr[1]<<" ";
        for(int i=1;i<n-1;i++){
            cout<<arr[i-1]*arr[i+1]<<" ";
        }
        cout<<arr[n-1]*arr[n-2];
    }
}