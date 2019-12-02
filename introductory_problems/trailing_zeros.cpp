#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a = 5;
    long long answer = 0;
    while(n >= a){
        answer += n / a;
        a *= 5;
    }
    cout << answer;
    return 0;
}