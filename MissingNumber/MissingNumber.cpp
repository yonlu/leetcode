#include <iostream>
#include <vector>
#include <set>

/* Given an array nums containing n distinct numbers in the range [0, n],
 return the only number in the range that is missing from the array. */

int missingNumber(std::vector<int>& nums);

int main() {
	std::vector<int>nums1 = { 3, 0, 1 };


	std::cout << missingNumber(nums1) << std::endl;

	return 0;
}


int missingNumber(std::vector<int>& nums) {
	std::set<int> numbers;

	for (int i = 0; i < nums.size(); i++) {
		numbers.insert(nums.at(i));
	}

	for (int i = 0; i <= nums.size(); i++) {
		if (numbers.find(i) == numbers.end())
			return i;
	}

	return 0;
}