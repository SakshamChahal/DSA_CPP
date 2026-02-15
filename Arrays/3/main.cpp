#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char* arr=new char(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}