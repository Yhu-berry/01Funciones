#include <iostream>
using namespace std;

int comb(int n,int k);

int main(){
    int n,k,c=0;
    cin>>n;
    cin>>k;
    c=comb(n,k);
    cout<<c;
    return 0;
}

int comb(int n,int k){
    cout<<"hola";
    if(n==k){
        return 1;
        
    }else{
        if(k==1){
            return n;  
        }else{
            return comb(n-1,k-1)+comb(n-1,k);
        }
    }
}