#include <iostream> 
using namespace std; 

int fibo(int n){
    int result = (n <= 1) ? n : fibo(n-1) + fibo(n-2) ;
    return result;
}



int main(){
    int *n = new int; 
    *n = 20; 
    
    for(int i = 3 ; i < *n + 3  ; ++i){
        string closeIt = (i == *n + 3 -1 ) ? " " : ", "; 
        cout << fibo(i) << closeIt;
    }
    
    delete n; 
    return 0; 
}