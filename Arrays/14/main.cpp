#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int m;
    cin>>m;
    vector<int>arb(m);
    for(int j=0;j<m;j++){
        cin>>arb[j];
    }
    cout<<"Common Elements: ";
    bool found=false;
    for(int k=0;k<n;k++){
        for(int p=0;p<m;p++){
            if(arr[k]==arb[p]){
                cout<<arr[k]<<" ";
                found=true;
                break;
        }
        }
    }
    if(!found){
        cout<<"None";
    }
}