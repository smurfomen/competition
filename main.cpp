#include <iostream>
#include <lib/single_number.hpp>
#include <lib/counting_bits.hpp>
using namespace std;

int main() {
    std::vector<int> nums{1,2,3,2,1};
    cout << singleNumber_1(nums) << endl;

    cout << countBits_2(7) << endl;
    return 0;
}
