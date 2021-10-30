#include <iostream>
#include <unordered_map>

class Solution {
 private:
  std::unordered_map<int, int> memo;

 public:
  int climbStairs(int n) {
    // nth step
    // n-1 step is either 1 or 2 steps at a time.
    auto it = memo.find(n);

    if (it != memo.end()) {
      return it->second;
    }

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int result = climbStairs(n - 2) + climbStairs(n - 1);

    // memoize
    memo.insert(std::make_pair(n, result));

    return result;
  }
};

int main() {
  Solution* s = new Solution();

  assert(s->climbStairs(2) == 2);
  assert(s->climbStairs(3) == 3);
  assert(s->climbStairs(4) == 5);
  assert(s->climbStairs(5) == 8);
  assert(s->climbStairs(10) == 89);
  assert(s->climbStairs(20) == 10946);
  assert(s->climbStairs(40) == 165580141);

  int result = s->climbStairs(5);

  return 0;
}
