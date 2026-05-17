#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> str;
    
    int head = 0, tail = 0;
    while(1){
        if((tail = my_string.find(" ", head)) == string::npos){ 
            int len = my_string.length() - head;
            str.push_back(my_string.substr(head,len));    
            break;
        }
        
        cout << head << " - " << tail << endl;
        int len = tail - head;
        str.push_back(my_string.substr(head,len));
        head = tail+1;
    }
    
    for(int i = 0; i < str.size(); i++){
        // cout << str[i] << endl;
        if(i == 0) answer = stoi(str[0]);
        
        if(str[i] == "+") answer += stoi(str[i+1]);
        else if(str[i] == "-") answer -= stoi(str[i+1]);
    }
    
    return answer;
}