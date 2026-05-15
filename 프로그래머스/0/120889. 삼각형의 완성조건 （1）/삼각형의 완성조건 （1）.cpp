#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
//     int a,b,c;
    
//     for(int i = 2; i >= 0; i--){
//         if(sides[i] > sides[i-1] && sides[i] > sides[i-2]){
//             a = sides[i];
//             b = sides[i-1];
//             c = sides[i-2];
//         }
//     }
    
//     answer = a < b+c? 1 : 2;
    
    sort(sides.begin(),sides.end());
    answer = (sides[2] < (sides[0] + sides[1]))? 1 : 2;
    
    return answer;
}