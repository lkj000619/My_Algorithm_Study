#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {   
    int len = score.size();
    vector<int> rank(len,1);
    vector<int> bank(len,0);
    
    for(int i = 0; i < score.size(); i++){
        int mean = (score[i][0] + score[i][1]);
        bank[i] = mean;
    }
    
    for(int i = 0; i < score.size(); i++){
        for(int j = 0; j < score.size(); j++){
            if(i == j) continue;
            if(bank[i] > bank[j]) rank[j]++; 
        }
    }
    
//     for(int i = 0; i < score.size(); i++){
//         cout << bank[i]  << ", ";
//     }
//     cout << endl;
    
//     for(int i = 0; i < score.size(); i++){
//         cout << rank[i]  << ", ";
//     }
//     cout << endl;
    
    return rank;
}