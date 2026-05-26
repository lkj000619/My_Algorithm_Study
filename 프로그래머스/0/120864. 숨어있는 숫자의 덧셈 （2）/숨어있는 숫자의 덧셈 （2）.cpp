#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    string tmp = "";
    for(int i = 0; i < my_string.length(); i++){
        if(my_string[i] >= '0' && my_string[i] <= '9'){
            tmp += my_string[i];
            // cout << "insert: " << my_string[i] << endl;
        }
        else if(!tmp.empty()){
            // cout << "push: " << tmp << endl; 
            answer += stoi(tmp);
            tmp = "";
        }
    }
    
    if(!tmp.empty()){
        answer += stoi(tmp);
        tmp = "";
    }
    
    return answer;
}