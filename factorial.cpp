#include <iostream> 
using namespace std; 

int factorial(int n){
    int result = (n <= 1) ? 1 : (n * factorial(n-1));
    return result;
}

int main(){

    int n, counter;
    cout << "Enter value of n: "; 
    cin >> n; 

    cout << "Descending\n";
    for(int i = n; i >= 1 ; i--){
        cout << factorial(i) << ", ";
    }
    cout << "\nAscending\n";
    for(int i = 1; i <= n; ++i){
        cout  << factorial(i) << ", ";
    }

    
    return 0; 
}