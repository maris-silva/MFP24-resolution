#include <iostream> 
#include <vector>
#include <algorithm>

// Binary Search on Answer Question

using namespace std;

typedef long long ll; // using long long to avoid overflow given the question restrictions for A 

bool is_valid(const vector<ll>& A, ll time, ll p) { // checks if p pizzas can be made in time
    ll total = 0;
    for (ll ai : A) {
        total += time / ai;
        if (total >= p) return true; // early exit if enough pizzas 
    }
    return total >= p;
}

int main() {
    int N;
    ll p;
    cin >> N >> p;

    vector<ll> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    ll left = 1;
    ll right = *min_element(A.begin(), A.end()) * p;
    ll answer = right;

    while (left <= right) { // starts at maximum possible time and narrows down to minimum through binary search
        ll mid = (left + right) / 2;

        if (is_valid(A, mid, p)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << endl;
    return 0;
}
