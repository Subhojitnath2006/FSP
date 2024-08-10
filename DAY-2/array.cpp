#include<iostream>
using namespace std;
void Size(int arr[]){
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<(sizeof(arr)/sizeof(arr[0]));
}
int main(){
    // int arr1[5]={1,2,3,4,5};
    // int arr2[]={1,2,3,4,5};
    int arr[5]={1,2,3,4,5};
    // cout<<arr;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
    // for(int x: arr){
    //     cout<<x<<endl;
    // }
    // cout<<sizeof(arr);
    // cout<<sizeof(arr[0]);
    Size(arr);
    return 0;
}