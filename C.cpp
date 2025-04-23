#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int N;
int max_idx;

int max_reward_recursive(vector<int>& memo, vector<int>& coins, int idx) {
  if (idx > max_idx) return 0;
  if (memo[idx] != -1) return memo[idx];

  int greatest = max(
      max_reward_recursive(memo, coins, 2 * idx),
      max_reward_recursive(memo, coins, 2 * idx + 1)
  );

  memo[idx] = coins[idx] + greatest;
  return memo[idx];
}

int max_reward(vector<int>& coins) {
  vector<int> memo(max_idx + 1, -1);
  return max_reward_recursive(memo, coins, 1); 
}

int main() {
  cin >> N;
  max_idx = pow(2, N) - 1;

  vector<int> coins(max_idx + 1); 

  for (int i = 1; i <= max_idx; ++i) {
    cin >> coins[i];
  }

  cout << max_reward(coins) << endl;

  return 0;
}
