#include <iostream>
#include <map>
#include <deque>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    sort(begin(s), end(s));
    set<string> answer;
    do {
        answer.insert(s);
    } while (next_permutation(begin(s), end(s)));
    cout << answer.size() << endl;
    for(auto& a: answer){
        cout << a << endl;
    }
}