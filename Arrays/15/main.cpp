#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &i:arr){
        cin>>i;
    }
    sort(arr.begin(),arr.end());
    
    for(int i:arr){
        if(count(arr.begin(),arr.end(),i)>n/2){
            cout<<"The majority candidate is ID "<<i;
            return 0;
        }
        
}
 cout<<"No majority candidate found";
    }
    