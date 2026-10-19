#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
//     vector<pair <string, string>> user;

//     for(int i = 0; i < record.size(); i++){
//         stringstream ss(record[i]);
//         string cmd, id, name;
//         ss >> cmd >> id >> name;
        
//         if(cmd == "Enter"){
//             bool check = false;
//             for(int j = 0; j < user.size(); j++){
//                 if(id == user[j].first){
//                     user[j].second = name;
//                     check = true;
//                     break;
//                 }
//             }
            
//             if(!check)
//                 user.push_back({id,name}); 
//         }
//         else if(cmd == "Change"){
//             for(int j = 0; j < user.size(); j++){
//                 if(id == user[j].first){
//                     user[j].second = name;
//                     break;
//                 }
//             }
//         }
//     }
    
//     /**
//     for(int i = 0; i < user.size(); i++){
//         cout << user[i].first << " / " << user[i].second << endl;
//     }
//     **/
    
//     for(int i = 0; i < record.size(); i++){
//         stringstream ss(record[i]);
//         string cmd, id, name;
//         ss >> cmd >> id;
        
//         if(cmd == "Enter"){
//             for(int j = 0; j < user.size(); j++){
//                 if(id == user[j].first){
//                     answer.push_back(user[j].second + "님이 들어왔습니다.");
//                     break;
//                 }
//             }
//         }
//         else if(cmd == "Leave"){
//             for(int j = 0; j < user.size(); j++){
//                 if(id == user[j].first){
//                     answer.push_back(user[j].second + "님이 나갔습니다.");
//                     break;
//                 }
//             }
//         }
//     }
    
    unordered_map <string,string> users;
    for(int i = 0; i < record.size(); i++){
        stringstream ss(record[i]);
        string cmd, id, name;
        ss >> cmd >> id >> name;
        
        if(cmd == "Enter" || cmd == "Change"){
            users[id] = name;
        }
    }
    
    for(int i = 0; i < record.size(); i++){
        stringstream ss(record[i]);
        string cmd, id, name;
        ss >> cmd >> id;
        
        if(cmd == "Enter"){
            answer.push_back(users[id] + "님이 들어왔습니다.");
        }
        else if(cmd == "Leave"){
            answer.push_back(users[id] + "님이 나갔습니다.");
        }
    }
    
    return answer;
}