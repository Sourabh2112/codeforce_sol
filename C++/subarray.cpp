#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int sum=0;
    int Arr[100];
    int Count[100];
        cin>>n;
    for(int i=1; i<=n; i++){
         cin>>Arr[i];
    }
    int d,m;
    cin>>d>>m;
    for(int j=1; j<=n; j++){
        Count[j]=Count[j-1]+Arr[j];
        }
    for(int l=m; l<=n; l++){
       if(Count[l]-Count[l-m]==d){
           sum++;
       }
    }cout<<sum;
} 
    
    
    
    

