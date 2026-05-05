#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
//     vector<int> answer;
    
//     int x = 0;
//     int y = 0;
    
//     for(int i = 0; i < num_list.size(); i++){
//         if(num_list[i]%2 == 1){
//             x += 1;
//         }
//         if(num_list[i]%2 == 0){
//             y += 1;
//         }
//     }
    
//     answer.push_back(y);
//     answer.push_back(x);
    
//     return answer;
    pair<int,int> odd_even = {0,0};
    
    for(int i=0; i < num_list.size(); i++){
        if(num_list[i]%2 == 1){
            odd_even.second += 1;
        }
        if(num_list[i]%2 == 0){
            odd_even.first += 1;
        }
    }
    
    return {odd_even.first, odd_even.second};
}