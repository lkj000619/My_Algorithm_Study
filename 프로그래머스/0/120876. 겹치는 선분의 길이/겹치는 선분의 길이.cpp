#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
        
    // sort(lines.begin(), lines.end());
    
//     for(int i = 0; i < lines.size(); i++){
//         for(int j = i+1; j < lines.size(); j++){
//             // 시작 구간이 겹치는 경우
//             if(lines[i][0] == lines[j][0]){
//                 int l = lines[i][1] > lines[j][1] ? lines[j][1] : lines[i][1];
//                 answer += l - lines[i][0];
//                 cout << "case 1" << endl;
//             }
            
//             // 종료 구간과 시작 구간이 겹치는 경우
//             else if(lines[i][1] > lines[j][0]){
//                 int l = lines[i][1] - lines[j][0] + 1;
//                 answer += l-1;
//                 cout << "case 2 - l0: " << lines[i][1] << ", l1: " << lines[j][0] << endl;
//             }
            
//             // 종료 구간이 겹치는 경우
//             else if(lines[i][1] == lines[j][1]){
//                 int l = lines[i][0] > lines[j][0] ? lines[i][0] : lines[j][0];
//                 answer += lines[i][1] - l +1;
//                 cout << "case 3" << endl;
//             }
            
//         }
//         cout << answer << endl;
//     }
    
    int l[201] = {0,};
    
    for(int i = 0; i < lines.size(); i++){
        for(int j = lines[i][0]; j < lines[i][1]; j++){
            l[j+100]++;
        }
    }
    
    for(int k = 0; k < 201; k++){
        if(l[k] >= 2) answer++;
    }
    
    return answer;
}