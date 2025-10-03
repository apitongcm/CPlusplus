#include <iostream> 
#include <string> 
using namespace std;


int fibo(int n){
    int result = (n <= 1)? n:fibo(n-1) + fibo(n-2);
    return result;
}

int main(){
    int const ONE = 1;
    int n = 20;
    int offSet = 3;
    
    cout << "Fibonacci Sequence: ";
    for(int i = offSet; i <= n + offSet - ONE; i++){
        string closing = (i == n+offSet-ONE)? " ":", ";
        cout << fibo(i) << closing;
    }
    return 0;
}