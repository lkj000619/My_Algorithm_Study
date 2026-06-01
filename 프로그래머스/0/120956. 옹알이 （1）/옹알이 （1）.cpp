#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    vector<string> str = {"aya", "ye", "woo", "ma"};
    
    for(int i = 0; i < babbling.size(); i++){
        for(int j = 0; j < str.size(); j++){

            int pos = babbling[i].find(str[j]);
            int len = str[j].length();
            if(pos != string::npos){
                // babbling[i].erase(pos,len);
                babbling[i].replace(pos,len," ");
            }

        }
        
        int pos;
        while((pos = babbling[i].find(" ")) != string::npos){
            babbling[i].erase(pos,1);
        }
        
        if(babbling[i].empty()) answer++;
        
        // cout << babbling[i] << endl;
    }
    
    return answer;
}