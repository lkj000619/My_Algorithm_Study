#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <map>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    unordered_map <string,int> in_time;
    map <string, int> total_time;
    string time, number, state;
    
    for(int i = 0; i < records.size(); i++){
        stringstream ss(records[i]);
        ss >> time >> number >> state;
        
        if(state == "IN"){
            in_time[number] = stoi(time.substr(0,2)) * 60 + stoi(time.substr(3,2));
        }
        else if(state == "OUT"){
            total_time[number] += stoi(time.substr(0,2)) * 60 + stoi(time.substr(3,2)) - in_time[number];
            in_time.erase(number);
        }
    }
    
    string n;
    int t;
    if(in_time.size() > 0){
        for(auto [n, t] : in_time){
            total_time[n] += 23*60+59-t;
        }
    }
    
    for(auto [n,t] : total_time){
        // cout << n << " / " << t << endl;
        if(t <= fees[0]){
            answer.push_back(fees[1]);
        }
        else{
            answer.push_back(fees[1] + (t-fees[0]+fees[2]-1)/fees[2]*fees[3]);
        }
    }
    
    return answer;
}