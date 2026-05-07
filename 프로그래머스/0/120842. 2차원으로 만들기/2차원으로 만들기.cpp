#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    for(int i = 0; i < num_list.size()/n; i++){
        vector<int> tmp;
        for(int j = i*n; j < (i+1)*n; j++){
            tmp.push_back(num_list[j]);
        }
        answer.push_back(tmp);
    }
    return answer;
}