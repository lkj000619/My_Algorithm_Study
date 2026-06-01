#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) {
//     int answer = 1;
    
//     vector<pair<char,int>> c1;
//     vector<pair<char,int>> c2;
    
//     sort(before.begin(),before.end());
//     sort(after.begin(),after.end());
    
//     for(int i = 0; i < before.length(); i++){       
//         bool check = false;
//         for(int j = 0; j < c1.size(); j++){
//             if(before[i] == c1[j].first){
//                 c1[j].second++;
//                 check = true;
//             }
//         }
        
//         if(!check){
//             c1.push_back({before[i], 1});
//         }
//     }
    
//     for(int i = 0; i < after.length(); i++){       
//         bool check = false;
//         for(int j = 0; j < c2.size(); j++){
//             if(after[i] == c2[j].first){
//                 c2[j].second++;
//                 check = true;
//             }
//         }
        
//         if(!check){
//             c2.push_back({after[i], 1});
//         }
//     }
    
//     bool check = false;
//     for(int i = 0; i < c1.size(); i++){
//         // cout << "c1 : " << c1[i].first << "," << c1[i].second<< endl;
//         // cout << "c2 : " << c2[i].first << "," << c2[i].second<< endl;
//         for(int j = 0; j < c2.size(); j++){
//             if(c1[i].first == c2[j].first){
//                 if(c1[i].second == c2[j].second) check = true;
//                 else answer = 0;
//             }   
//         }
//     }
    
//     if(!check) answer = 0;
    
    
//     return answer;
    
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());

    return before == after;
}