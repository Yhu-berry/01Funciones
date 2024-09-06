#include <iostream>
using namespace std;

int S(int);

int main(){
    int num,sum;
    cin>>num;
    sum=S(num);
    cout<<sum;
    return 0;
return 0;
}

int S(int n){
    if(n==1){
       return 1;
    }else{
       return n+ S(n-1); 
    }
}