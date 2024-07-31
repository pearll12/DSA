#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0, max=arr[0];
    for(int i=0;i<n;i++){
        if(i==0||i==n-1){
            if(arr[i]>arr[i+1] || arr[i]>arr[i-1]){
                count++;
                max = arr[i];
            }
        }
        else{
            if(arr[i]>max && arr[i]> arr[i+1]){
                count++;
                max= arr[i];
            }
        }
    }
    cout<< count << endl;
}