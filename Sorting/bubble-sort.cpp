#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>&);

int main() {
  std::vector<int> numbers = {2, 4, 7, 1, 5, 3};

  for (auto num : numbers) std::cout << num << std::endl;

  std::cout << std::endl;

  bubbleSort(numbers);

  for (auto num : numbers) std::cout << num << std::endl;

  return 0;
}

void bubbleSort(std::vector<int>& numbers) {
  for (int i = 0; i < numbers.size() - 1; i++) {
    for (int j = i; j < numbers.size() - 1; j++) {
      if (numbers[j] > numbers[j + 1]) {
        int tmp = numbers[j + 1];
        numbers[j + 1] = numbers[j];
        numbers[j] = tmp;
      }
    }
  }
}
