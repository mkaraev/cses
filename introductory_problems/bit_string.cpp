#include <iostream>

using namespace std;

int main(){
    const long long MOD = 1e9 + 7;
    long long n;
    cin >> n;
    long long answer = 1;
    for(int i = 1; i <= n; i++){
        answer <<= 1;
        answer %= MOD;
    }
    cout << answer;
    return 0;
}