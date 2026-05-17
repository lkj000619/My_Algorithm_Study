#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    vector<pair<int, int>> test;
    for(int i = 0; i < array.size(); i++){
        test.push_back({array[i],i});
    }
    sort(test.begin(), test.end());
    
    answer.push_back(test[test.size()-1].first);
    answer.push_back(test[test.size()-1].second);
    
    return answer;
}