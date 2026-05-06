#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string str_age = to_string(age);
    cout << "str_age: " << str_age << endl;
    for(int i = 0; i < str_age.length(); i++){
        answer += (str_age[i] - '0') + 'a';
        // cout << "str_age["<< i <<"]: " << (str_age[i] - '0' + 'a') << endl;
    }
    return answer;
}