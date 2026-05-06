#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    int size = emergency.size();
    vector<int> answer(size, 1);
    
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i != j){
                if(emergency[i] < emergency[j]) answer[i]++;
            }
        }
    }
    
    
    return answer;
}