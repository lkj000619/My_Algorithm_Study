#include<string>
#include <iostream>
#include <queue>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    queue <int> q;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            q.push(1);
        }
        else{
            if(q.empty()) return false;
            q.pop();
        }
    }
    
    if(!q.empty()) return false;

    return answer;
}