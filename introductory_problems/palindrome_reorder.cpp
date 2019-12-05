#include <iostream>
#include <map>
#include <deque>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> cnt;
    for(char c: s){
        cnt[c]++;
    }

    if(s.size() == 1){
        cout << s;
        return 0;
    }
    int odd_cnt_chars = 0;
    char middle_char = 0;
    for(auto [k, v]: cnt){
        if(v % 2 == 1){
            odd_cnt_chars++;
            middle_char = k;
        }
    }
    if(odd_cnt_chars > 1){
        cout << "NO SOLUTION";
        return 0;
    }
    deque<char> answer;
    if(odd_cnt_chars == 1){
        for(int i = 0; i < cnt[middle_char]; i++){
            answer.push_back(middle_char);
        }
    }
    for(auto [k, v]: cnt){
        if(k != middle_char){
            for(int i = 0; i < v / 2; i++){
                answer.push_back(k);
            }
            for(int i = 0; i < v / 2; i++){
                answer.push_front(k);
            }
        }
    }
    for(auto c: answer){
        cout << c;
    }
    cout << endl;
    return 0;
}