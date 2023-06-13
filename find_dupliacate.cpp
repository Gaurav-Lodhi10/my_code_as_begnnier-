#include<iostream>
using namespace std;
int duplicateNumber(int *arr, int size)
{
    int slow =arr[0];
    int fast=arr[0];
    do{
        slow=arr[0];
        fast=arr[arr[slow]];
    }while (slow!=fast);
    fast=arr[0];
    while(slow !=fast){
	slow=arr[slow];
	fast=arr[fast];
}
return  slow;
}
int main(){
    int arr[]={4 ,2 ,3 ,1 ,4 ,0};
    cout<<duplicateNumber(arr,6);
}