#include <iostream>
#include <map>
#include <deque>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

bool hasBit(int mask, int bit){
    return (mask & (1 << bit)) > 0;
}

int main() {
    int n;
    cin >> n;
    vector<long long> p(n);
    long long total_weight = 0;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        total_weight += p[i];
    }
    int min_mask = 0; long long min_diff = 1e15;
    for(int mask = 0; mask < (1 << n); mask++){
        long long cur_weight = 0;
        for(int i = 0; i < n; i++){
            if(hasBit(mask, i)){
                cur_weight += p[i];
            }
        }
        long long cur_diff = abs((total_weight - cur_weight) - cur_weight);
        if(min_diff > cur_diff){
            min_diff = cur_diff;
            min_mask = mask;
        }
    }
    cout << min_diff;
}