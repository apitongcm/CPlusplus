#include <iostream>
#include <vector>
#include <algorithm>
#include <cinttypes>
using namespace std;

int descending(uint64_t number ){
    vector<uint64_t> nums(number);

    sort(nums.begin(),nums.end(), greater<uint64_t>());
    for(uint64_t val : nums){
        cout << val << " ";
    }
    return 0;
}

int main(){
    uint64_t n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << descending(n) << endl;
    return 0;
}