#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<int> coef = {0,0};
    
    stringstream ss(polynomial);
    string str = "";
    while(ss >> str){
        if(str == "+") continue;
        else{
            if(str.find("x") == 0) coef[1]++;
            else if(str.find("x") == string::npos){
                coef[0] += stoi(str);
            }
            else{
                int index = str.find("x");
                string tmp = str.substr(0, index+1);
                coef[1] += stoi(tmp);
            }
        }
    }
    
    cout << coef[1] << " / " << coef[0] << endl;    
    if(coef[1] != 0){
        if(coef[1] != 1)
            answer += to_string(coef[1]);
        answer += "x";
            
        if(coef[0] != 0){
            answer += " + ";
            answer += to_string(coef[0]);
        }
    } 
    else if(coef[0] != 0){
        answer += to_string(coef[0]);
    }
    
    return answer;
}