#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=2, curr=2;
    for(int i=1;i<n;i++){
        int pd= arr[i] - arr[i-1];
        int cd= arr[i+1] - arr[i];
        
        if(pd==cd){
            curr++;
        }
        else{
            curr=2;
        }
        if(curr>ans){
            ans=curr;
        }
    }
    cout<<ans;
}