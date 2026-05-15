#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> list;
    
    string tmp = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            list.push_back(tmp);
            tmp = "";
        }
        else if(i == s.length()-1){
            tmp += s[i];
            list.push_back(tmp);
        }
        else {
            tmp += s[i];
        }
    }
    
    for(int j = 0; j < list.size(); j++){
        // cout << list[j] << endl;
        if(list[j] == "Z") answer -= stoi(list[j-1]);
        else answer += stoi(list[j]);
    }
    
    return answer;
}