#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  unordered_map<int, int> groups;
  for(int i = 0; i < n; i++) {
      int group;
      cin >> group;
      groups[group]++;
  }

  int num_taxis = 0;

  num_taxis += groups[4];

  num_taxis += groups[3];
  groups[1] = max(0, groups[1] - groups[3]);

  num_taxis += groups[2] / 2 + groups[2] % 2;
  groups[1] = max(0, groups[1] - ((groups[2] % 2) * 2));

  num_taxis += groups[1] / 4;
  num_taxis = groups[1] % 4 == 0 ? num_taxis : num_taxis + 1;

  cout << num_taxis;
}
