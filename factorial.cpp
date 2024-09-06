#include <iostream>
using namespace std;

int f(int n);

int main(){
    int num,fact;
    cin>>num;
    fact=f(num);
    cout<<fact;
    return 0;
}

int f(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * f(n-1);
}