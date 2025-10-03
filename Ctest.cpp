#include <iostream> 
#include <string>
using namespace std;

int add(int number1, int number2){
    return number1 + number2;
}

int multiply(int number1, int number2){
    return number1 * number2; 
}

int main(){
    int given1, given2; 
    int num = 11; 
    bool useAdd = true; 
    cout << "Please give a number: ";
    cin >> given1;
    cout << "Another number: ";
    cin >> given2;

    
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};


    int (*total)(int,int) = useAdd ? add:multiply;

    cout << total(given1,given2) <<endl;

    bool arrDefault = true;
    int (&merging)[4] = arrDefault ?  arr1 : arr2;
    cout << merging[0] << endl;

    string result = num > 10 ? "over ten" : "less than 10";    
    cout << result;
    return 0; 
}