#include <cassert>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

/*
            Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

            You must implement a solution with a linear runtime complexity and use only constant extra space.



            Example 1:
                    Input: nums = [2,2,1]
                    Output: 1

            Example 2:
                    Input: nums = [4,1,2,1,2]
                    Output: 4

            Example 3:
                    Input: nums = [1]
                    Output: 1


            Constraints:
                    1 <= nums.length <= 3 * 104
                    -3 * 104 <= nums[i] <= 3 * 104
                    Each element in the array appears twice except for one element which appears only once.
*/



/*

  Time Complexity: O(n)

  Space Complexity: O(2n)

*/

int singleNumber_2(vector<int>);

int singleNumber_1(vector<int> nums) {
    return singleNumber_2(nums);
}

/*

  Time Complexity: O(n)

  Space Complexity: O(1)

*/

/*
       Couse from constraints we know, that each element in the array appears twice except for one element which appears only once
       then we can use XOR

       f.e.:
       [0110, 1000, 0110]

       0110 ^ 1000 = 1110

       1110 ^ 0110 = 1000

       result: 1000
    */
int singleNumber_2(std::vector<int> nums) {
    int mask = 0;

    for(auto i : nums)
        mask = mask xor i;

    return mask;
}
