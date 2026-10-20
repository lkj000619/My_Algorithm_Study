#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> list;
    
    for(int number : numbers){
        list.push_back(to_string(number));
    }
    // for(string str : list){
    //     // cout << str << endl;
    // }
    sort(list.begin(), list.end(), compare);
    if(list[0] == "0") return "0";
    // cout << "sorted" << endl;
    for(string str : list){
        // cout << str << endl;
        answer += str;
    }
    
    return answer;
}