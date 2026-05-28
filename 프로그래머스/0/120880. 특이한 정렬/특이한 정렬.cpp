#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<pair<int,int>> box;
    
    sort(numlist.rbegin(), numlist.rend());
    
    for(int i = 0; i < numlist.size(); i++){
        int diff = abs(numlist[i] - n);
        box.push_back({diff, i});
    }
    
    sort(box.begin(), box.end());
    
    for(int i = 0; i < box.size(); i++){
        int idx = box[i].second;
        answer.push_back(numlist[idx]);
    }
    
    return answer;
}