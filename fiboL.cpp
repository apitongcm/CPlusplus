#include <iostream> 
#include <string>
using namespace std; 

int main(){

    int *num1 = new int;
    int *num2 = new int; 
    char  *selection = new char;

    cout << "\n Value for num1: ";
    cin >> *num1;
    cout <<  "\n Value for numb2: ";
    cin >> *num2;
    cout << "\n Enter operation: ";
    cin >> *selection;



    auto add = [](int a, int b){return a + b;};
    auto difference = [](int a, int b){return a - b;};
    auto product = [](int a, int b){return a * b;};
    auto quotient = [](int a, int b){return a / b;};

    switch(*selection){
        case('+'): cout << "result: " << add(*num1,*num2);break;
        case ('-') : cout << "result: " << difference(*num1, *num2);break;
        case('*'): cout <<"result: " << product(*num1, *num2);break;
        case('/'):  cout <<"result: " << quotient(*num1, *num2);break;
        default: cout << "Please select operation. Try again.";
    }

    delete num1;
    delete num2;
    delete selection;

    return 0; 
}