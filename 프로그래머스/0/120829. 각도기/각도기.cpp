#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
//     int answer = 0;
//     if(angle > 0 && angle < 90){
//         answer = 1;
//     }
//     else if(angle == 90){
//         answer = 2;
//     }
//     else if(angle > 90 && angle < 180){
//         answer = 3;
//     }
//     else if(angle == 180){
//         answer = 4;
//     }
    
//     return answer;
    int answer = (angle > 0 && angle < 90) ?      1 :
                 angle == 90 ?                    2 : 
                 (angle > 90 && angle < 180) ?    3 :
                 angle == 180 ?                   4 :  0;
    return answer;
}