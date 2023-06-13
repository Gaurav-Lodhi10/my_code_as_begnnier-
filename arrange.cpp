#include<iostream>
using  namespace std;
void arrange(long long int arr[],int n){
    int start=0;
    int end=n-1;
    int counter=1;
    while(start<=end){
        if(counter%2==1){
            arr[start]=counter;
            start++;
        }
        else{
            arr[end]=counter;
            end--;
        }
        counter++;
    }
    
}
int main(){
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    arrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

  

}