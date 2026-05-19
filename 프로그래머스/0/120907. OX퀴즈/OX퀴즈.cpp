#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calc(string str){
    
    return 0;
}

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(int i = 0; i < quiz.size(); i++){
        int pos = quiz[i].find("=");
        string left = quiz[i].substr(0,pos);
        string right = quiz[i].substr(pos+1, quiz[i].length());
        // cout << left << " | " << right << endl;
        
        vector<string> tmp;
        int head = 0, tail = 0;
        while((tail = left.find(" ",head)) != string::npos){
            tmp.push_back(left.substr(head, tail- head));
            head = tail +1;
            // cout << "add" << endl;
        }
        
        int result = 0;
        for(int j = 0; j < tmp.size(); j++){
            // cout << tmp[j] << endl;
            if(tmp[j].compare("-") == 0){ result -= stoi(tmp[j+1]); j++;}
            else if (tmp[j].compare("+") == 0){ result += stoi(tmp[j+1]); j++;}
            else result += stoi(tmp[j]);
        }
        
//         cout << "---------" << endl;
//         cout << result << " =? " << stoi(right) << endl;
//         cout << "---------" << endl;
        if(result == stoi(right)) answer.push_back("O");
        else answer.push_back("X");
        
        
    }
    return answer;
}