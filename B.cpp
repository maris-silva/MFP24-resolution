#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> x;
  set<int> y;
  int x_i, y_i;

  for (int i = 0; i < 4; i++) {
    cin >> x_i >> y_i;
    x.insert(x_i);
    y.insert(y_i);
  }

  cout << (*x.begin() - *x.rbegin()) * (*y.begin() - *y.rbegin()) << endl;
  return 0;
}