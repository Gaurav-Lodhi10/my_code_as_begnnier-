#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int a=arr[0];
    for(int i=1;i<n;i++){  
        a=a^arr[i];
    }
    return a;
    
}
int main(){
    int arr[]={2,3,1,6,3,6,2};
    cout<<duplicate(arr,7);
}