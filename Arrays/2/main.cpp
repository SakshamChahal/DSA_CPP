#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Original array: ";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    int m;
    int k;
    cin>>m;
    cin>>k;
    if(m<n){
        arr.insert(arr.begin()+(m-1),k);
        n++;
        cout<<endl<<"Updated array: ";
        
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        
    }
    else{
        cout<<endl<<"Invalid position!";
    }
}