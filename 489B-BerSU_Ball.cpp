#include <bits/stdc++.h>
using namespace std;

int main() {
  int num_boys;
  cin >> num_boys;
  map<int, int> boys;

  for (int i = 0; i < num_boys; i++) {
    int skill;
    cin >> skill;
    boys[skill]++;
  }

  int num_girls;
  cin >> num_girls;
  map<int, int> girls;

  for (int i = 0; i < num_girls; i++) {
    int skill;
    cin >> skill;
    girls[skill]++;
  }

  int matches = 0;
  for (auto &[skill, count] : boys) {
    for (int i = -1; i <= 1; i++) {
      int target_skill = skill + i;
      auto girl_skill = girls.find(target_skill);

      if (girl_skill != girls.end()) {
          int num_matches = min(count, girl_skill->second);
          matches += num_matches;
          girls[target_skill] -= num_matches;
          boys[skill] -= num_matches;
      }

    }
  }

  cout << matches;
}
