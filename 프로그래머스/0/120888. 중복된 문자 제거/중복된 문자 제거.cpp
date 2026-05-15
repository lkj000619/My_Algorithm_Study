#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i = 0; i < my_string.length(); i++){    
        if(answer.find(my_string[i]) > answer.length()) {
            // cout << "add : " << my_string[i] << endl;
            answer += my_string[i];
        }
    }
    
    return answer;
}