#include <bits/stdc++.h>
using namespace std;

int main() {
  string pos;
  cin >> pos;

  int count = 1;
  for (int i = 1; i < pos.length(); i++) {
    count = pos[i - 1] == pos[i] ? count + 1 : 1;
    if (count >= 7)
    {
        cout << "YES";
        return 0;
    }
  }

  cout << "NO";
}
