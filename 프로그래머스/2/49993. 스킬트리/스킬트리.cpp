#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    
    for(int i = 0; i < skill_trees.size(); i++){
        int skill_trees_len = skill_trees[i].length();
        
        vector<int> index(skill_trees_len, 0);
        for(int j = 0; j < skill.length(); j++){
            for(int k = 0; k < skill_trees_len; k++){
                if(skill[j] == skill_trees[i][k]) index[k] = j+1;
            }
        }
        
        int cnt = 1;
        bool check = 1;
        for(int l = 0; l < skill_trees_len; l++){
            if(index[l] != 0){
                if(index[l] != cnt){
                    check = 0;
                    break;
                }
                else cnt++;
            }
            
            // cout << index[l] << " ";
        }
        // cout << endl;
        
        if(check){
            cout << skill_trees[i] << endl;
            answer++;
        }
    }
    
    
    return answer;
}