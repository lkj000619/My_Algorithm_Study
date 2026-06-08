#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    vector<int> diff;
    
    // sort(common.begin(), common.end());
    for(int i = 0; i < common.size()-1; i++){
        diff.push_back(common[i+1] - common[i]);
    }

    if(diff[1] == diff[0]){
        // Arithmetic seq
        answer = common[common.size()-1] + diff[0];
    }
    else{
        // Geometric seq
        int multi = diff[1]/diff[0];
        answer = common[common.size()-1] * multi;
    }
    
    
    
    return answer;
}