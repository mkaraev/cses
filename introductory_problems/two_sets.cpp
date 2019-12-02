#include <iostream>
#include <vector>

using namespace std;
template<typename T>
void printVector(vector<T>& v) {
    cout << v.size() << endl;
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
}

int main() {

    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum % 2 == 1) {
        cout << "NO";
        return 0;
    }
    sum /= 2;
    vector<int> a, b;
    for (int i = n; i >= 1; i--) {
        if (sum - i >= 0) {
            a.push_back(i);
            sum -= i;
        } else {
            b.push_back(i);
        }
    }
    cout << "YES\n";
    printVector(a);
    printVector(b);
    return 0;
}