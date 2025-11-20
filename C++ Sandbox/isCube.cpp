#include <iostream>
using namespace std; 

int squared(int a){
    return a*a;
}

int cubed(int a){
    return a*a;
}



int main(){

    bool cubeFlg = false; 
    int a  =5; 
    int (*result)(int a) = cubeFlg ? cubed : squared;
    cout << result(a) << endl;


    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10}; 
    
    bool arr1_flag = false; 
    bool arr2_flag = false; 
    int (&selArr)[5] = (arr1_flag == true && arr2_flag == false ) ? arr1 : arr2;

    cout << selArr[2] << endl;
    return 0; 
}