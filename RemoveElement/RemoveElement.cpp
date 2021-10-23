#include <iostream>
#include <vector>

int main() {
  std::vector<int> nums = {3, 2, 2, 3};

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == 3) nums.erase(nums.begin() + i, nums.begin() + i + 1);
  }

  return 0;
}

