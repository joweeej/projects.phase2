#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1|| n==2){
        return 1;
    }
    
    else{
        int sfib = fib(n-1) + fib(n - 2);
        return sfib;
    }
};
int main(){
    
  int n = 5;
  cout<<"Fibonacchi sequence of 5 numbers: "<<endl;
  
    
    
    
    
    
    
    
    
    
    return 0;
}