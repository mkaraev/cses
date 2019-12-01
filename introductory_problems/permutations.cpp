#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    if(n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }
    deque<int> answer;
    answer.push_back(1);
    for(int i = 3; i <= n; i += 2){
        answer.push_front(i);
    }
    int cur = n;
    if(n % 2 == 1){
        cur -= 1;
    }
    for(int i = cur; i > 0; i -= 2){
        answer.push_back(i);
    }
    for(auto x: answer){
        cout << x << " ";
    }
}