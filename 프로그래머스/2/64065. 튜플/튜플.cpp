#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    unordered_map <int,int> list;
    
    int nume = 0;
    for(char c : s){
        if(c >= '0' && c <= '9'){
            nume = nume * 10 + c - '0';
        }
        else if(nume > 0){
            list[nume]++;
            nume = 0;
        }
    }
    
    int len = list.size();
    vector<int> answer(len);
    for(const auto& [number, count] : list){
        answer[len - count] = number;
    }
    
    
    return answer;
}