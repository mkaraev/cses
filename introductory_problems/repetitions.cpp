#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int answer = 0;
    for(int i = 0; i < s.size();){
        int j = i;
        while(j < s.size() and s[j] == s[j + 1]){
            j++;
        }
        answer = max(answer, j - i + 1);
        i = j + 1;
    }
    cout << answer;
    return 0;
}