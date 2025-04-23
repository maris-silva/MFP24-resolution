#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int p1 = 0;
  int p2 = 0;

  for (int i = 0; i < n; i++) {
    string _, points;
    int time;
    
    cin >> _ >> time >> points;
    int score = points.back() - '0';

    if (time == 1) {
      p1 += score;
    }
    else {
      p2 += score;
    }
  }
  cout << p1 << " x " << p2 << "\n";
  return 0;
}