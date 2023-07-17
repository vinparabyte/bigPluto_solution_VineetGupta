//Question11
#include<iostream>
using namespace std;
int MissingNumber(int arr[], int n){
    int i=1;
    for(i=1;i<n;i++){
        if(i==arr[i]){

        }else if (i!=arr[i])
        {
            i=arr[i];
        }
    }
    return i;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MissingNumber(arr,5);

}
