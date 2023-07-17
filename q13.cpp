#include<iostream>
using namespace std;
void ReverseArray(int arr, int n){
    for(int i=0;i<n;i++){
        if(i==n){
            swap(arr[i],arr[n]);
            n--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
