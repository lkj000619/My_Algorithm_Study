#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<int> n(26,0);
    
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < n.size(); j++){
            if(s[i] - 'a' == j) n[j]++;   
        }
    }
    
    cout << "size: " << n.size() << endl;
    for(int k = 0; k < n.size(); k++){
        if(n[k] == 1) {
            answer += 'a' + k;
            // cout << 'a' + k << endl;;
        }
    }
    
    return answer;
}