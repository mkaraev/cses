#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){

    int n, x;
    cin >> n >> x;
    vector<int> w(n);
    for(auto& a: w){
        cin >> a;
    }
    map<int, int> cnt;
    sort(rbegin(w), rend(w));
    int ans = 0;
    for(auto& a: w){
        auto it = cnt.lower_bound(a);
        if(it == end(cnt)){
            cnt[x - a]++;
            ans++;
        }
        else{
            it->second--;
            if(it->second == 0){
                cnt.erase(it);
            }
        }
    }
    cout << ans;
    return 0;
}