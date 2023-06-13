#include<iostream>
using  namespace std;
void swap(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   swap(arr,n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

}