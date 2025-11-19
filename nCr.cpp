#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact *=i;
    }
    return fact;
}

int nCr(int n, int r){
    int result = factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}
int main(){
    int n , r;
    cout<<"Enter the number : ";
    cin>>n>>r;
    cout<<" \n"<<nCr(n,r); 
   
return 0;
}