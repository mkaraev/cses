#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if((((a + b) % 3 == 0) && (a * b > 0) && (min(a, b) * 2 >= max(a, b))) || (a == 0 && b == 0)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}