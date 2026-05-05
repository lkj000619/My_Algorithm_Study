#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    // vector<int> answer;
    // answer.push_back(money/5500);
    
    vector<int> answer = {money/5500};
    
    if(money%5500 != 0){
        answer.push_back(money - answer[0]*5500);
    }
    else{
        answer.push_back(0);
    }
    return answer;
}