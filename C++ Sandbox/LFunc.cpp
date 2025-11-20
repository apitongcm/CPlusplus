#include <iostream>
using namespace std; 

/*##################################################
Date: October 2, 2025
Argument: my_arr[arr_max], arr_max = 10
Description: A Reusable function for finding the maximum
value inside an Array.
####################################################*/


int main(){

//Create Memory
int *arr_max = new int;
*arr_max = 10;
int *my_arr = new int[*arr_max];

for(int i = 0; i < *arr_max; ++i)
{
    //cout << "Element" << i << ":";
    my_arr[i] = i ;
}

for (int i = 0; i < *arr_max; ++i){
    cout << my_arr[i] << ",";
}

auto my_Max = [](int* my_arr, int arr_max){
    int elMax = my_arr[0];
    for(int i = 0; i < arr_max; ++i )
    {
        (my_arr[i] > elMax)? elMax = my_arr[i]: elMax;
    }
    return elMax;
};

cout << "\nMax value found in array: " << my_Max(my_arr,*arr_max) << endl;
//for (int n : my_arr){ cout << n << " ";}


delete  arr_max;
delete[] my_arr;

    return 0;
}