// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    string target;
    cin>>target;
    vector<string>::iterator pos;
    pos=find(arr.begin(),arr.end(),target);
    if(pos!=arr.end()){
        cout<<pos-arr.begin();
    }
    else{
        cout<<"String not found!";
    }
}