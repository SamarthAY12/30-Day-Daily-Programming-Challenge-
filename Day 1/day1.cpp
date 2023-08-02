#include <iostream>
#include <algorithm>
#include <vector>

int findKthLargestElement(std::vector<int>& nums, int k) {
    if (k > nums.size() || k < 1) {
        std::cerr << "Invalid value of k\n";
        return -1;
    }

    std::partial_sort(nums.begin(), nums.begin() + k, nums.end(), std::greater<int>());
    return nums[k - 1];
}

int main() {
    std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int k = 3; // Find the 3rd largest element

    int result = findKthLargestElement(nums, k);

    if (result != -1) {
        std::cout << "The " << k << "th largest element is: " << result << std::endl;
    }

    return 0;
}

