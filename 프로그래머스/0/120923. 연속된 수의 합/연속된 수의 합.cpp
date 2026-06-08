#include <string>
#include <vector>

using namespace std;

bool num_sum(vector<int> &n, int total){
    int sum = 0;
    for(int i = 0; i < n.size(); i++){
        sum += n[i];
    }
    
    if(sum == total) return 1;
    
    int arg = sum < total ? 1 : -1;
    for(int i = 0; i < n.size(); i++){
        n[i] += arg;
    }
    
    return 0;
}

vector<int> solution(int num, int total) {
    vector<int> answer;
    for(int i = 0; i < num; i++) answer.push_back(i);
    
    while(!num_sum(answer, total));
    
    return answer;
}