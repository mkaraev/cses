#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;
    vector<long long> a(n, 0);
    for(auto& x: a){
        cin >> x;
    }
    long long answer = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] < a[i - 1]){
            answer += abs(a[i] - a[i - 1]);
            a[i] = a[i - 1];
        }
    }
    cout << answer;
    return 0;
}