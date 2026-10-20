#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map <int,int> list;
    
    for(int i = 0; i < tangerine.size(); i++){
        list[tangerine[i]]++;
    }
    
    // for(const auto& [number , count] : list){
    //     cout << number << " / " << count << endl;
    // }
    
    vector<int> count;
    for(const auto& [n,c] : list){
        count.push_back(c);
    }
    
    sort(count.rbegin(),count.rend());
    
    for(int i = 0; i < count.size(); i++){
        // cout << i << endl;
        k -= count[i];
        answer++;
        
        if(k <= 0) break;
    }
    
    
    
    return answer;
}