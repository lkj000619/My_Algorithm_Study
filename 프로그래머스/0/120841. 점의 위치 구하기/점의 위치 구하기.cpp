#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    
    // if(dot[0] > 0 && dot[1] > 0){
    //     answer = 1;
    // }
    // else if(dot[0] < 0 && dot[1] > 0){
    //     answer = 2;
    // }
    // else if(dot[0] < 0 && dot[1] < 0){
    //     answer = 3;
    // }
    // if(dot[0] > 0 && dot[1] < 0){
    //     answer = 4;
    // }
    
    if(dot[0] > 0){
        return dot[1] > 0 ? 1 : 4;
    }
    else{
        return dot[1] > 0 ? 2 : 3;
    }
    
    return answer;
}