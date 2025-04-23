#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int N;
  cin >> N;
  int count = 0;
  for (int i = 4; i >= 0; i--){
    int game = pow(2, i); 
    if (game <= N) {
      N -= game;
      count++;
    }
  }
  cout << count << endl;
  return 0;
}