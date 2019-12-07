#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto& x: a) {
        cin >> x;
    }
    for (auto& x: b) {
        cin >> x;
    }
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    int i = 0, j = 0;
    int answer = 0;
    while (i < m and j < n) {
        if (abs(a[j] - b[i]) <= k) {
            i++;
            j++;
            answer++;
        } else if (b[i] < a[j] - k) {
            i++;
        } else if (b[i] > a[j] + k){
            j++;
        }
    }
    cout << answer;
}