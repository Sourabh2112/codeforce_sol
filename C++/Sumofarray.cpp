#include<iostream>
using namespace std;
int SumArray(int *arr , int n){
//base case
if(n==0)
    return 0;
if(n==1)
    return arr[0];
//recursive call
int ans =SumArray(arr+1, n-1);
ans=arr[0]+ans;
return ans;
}
int main(){
int arr[5]={3,8,5,3,5};
int n=5;
int ans=SumArray(arr,n);
cout<< ans;
}