#include <string>
#include <vector>

using namespace std;

int solution(int n) {
//     int answer = 0;
    
//     for(int i = 1; i <= n; i++){
//         if(!(i%2)){
//             answer += i;
//         }
//     }
//     return answer;
    
    int answer = 0;
    for(int i = 0; i < n; i++){
        if((i+1)%2 == 0) answer += i+1;
    }
    
    return answer;
}