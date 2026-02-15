#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char target;
    int sum=0;
    cin>>target;
    for(int i=0;i<n;i++){
        if(target==arr[i][0]){
            sum++;
        }
        
    }
        cout<<sum;
    }