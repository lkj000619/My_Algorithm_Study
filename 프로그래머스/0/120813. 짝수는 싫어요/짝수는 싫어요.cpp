#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    // for(int i = 1; i <= n; i++){
    //     if(i%2 == 1){
    //         answer.push_back(i);
    //     }
    // }
    
    int count = (n%2)? (n+1)/2 : n/2;
    for(int i = 0; i < count; i++){
        answer.push_back(i*2+1);
    }
    
    return answer;
}