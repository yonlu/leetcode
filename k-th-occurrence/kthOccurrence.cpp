#include <iostream>
#include <map>
#include <vector>

std::vector<int> solve(int, std::vector<int>, std::vector<int>);

int main() {
  std::vector<int> arr = {9, 8, 9, 9, 1, 2, 3, 9, 5, 9};
  std::vector<int> query_values = {1, 2, 4, 5, 6, 100};

  std::vector<int> result = solve(1, arr, query_values);

  for (auto r : result) std::cout << r << std::endl;

  return 0;
}

std::vector<int> solve(int X, std::vector<int> arr,
                       std::vector<int> query_values) {
  std::map<int, int> occurrenceToIndex;
  int occurrences = 0;
  std::vector<int> indexes;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == X) {
      occurrences++;
      occurrenceToIndex.insert({occurrences, i});
    }
  }

  for (auto query : query_values) {
    int queriesFound = occurrenceToIndex.count(query);

    if (queriesFound == 0)
      indexes.push_back(-1);
    else
      indexes.push_back(occurrenceToIndex[query]);
  }

  return indexes;
}
