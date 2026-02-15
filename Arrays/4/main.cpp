#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    cin>>s;
    vector<char>arr(s);
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int p;
    char w;
    cin>>p;
    cin>>w;
    arr.insert(arr.begin()+(p),w);
    s++;
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}