#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
//     vector<int> answer;
    
//     int check = 0;
    
//     for(int i = 0; i < numbers.size(); i++){        
//         if(i == num2){
//             check = 0;
//             answer.push_back(numbers[i]);
//         }
//         if(i == num1 || check == 1){
//             check = 1;
//             answer.push_back(numbers[i]);
//         }
//     }
//     return answer;
    
    vector<int> answer(numbers.begin()+num1,numbers.begin()+num2+1);
    
    return answer;
}