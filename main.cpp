#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll n;
  cin >> n;

  if (n >= numeric_limits<int16_t>::min() &&
      n <= numeric_limits<int16_t>::max()) {
    cout << "short";
  } else if (n >= numeric_limits<int32_t>::min() &&
             n <= numeric_limits<int32_t>::max()) {
    cout << "int";
  } else {
    cout << "long long";
  }

  return 0;
}