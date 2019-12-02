#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long r = max(x, y);
        long long p = (r - 1) * (r - 1);
        if (x == y) {
            cout << x * x - (x - 1);
            cout << endl;
            continue;
        }
        if (x == r) {
            if (x % 2 == 0) {
                cout << x * x - (y - 1);
            } else {
                cout << p + y;
            }
            cout << endl;
            continue;
        }
        if(y == r){
            if(y % 2 == 1){
                cout << y * y - (x - 1);
            }
            else{
                cout << p + x;
            }
            cout << endl;
            continue;
        }
    }

    return 0;
}