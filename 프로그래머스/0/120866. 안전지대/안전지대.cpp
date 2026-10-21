#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
//     int rows = board.size();
//     int cols = board[0].size();
//     vector<vector<int>> map(rows, vector<int>(cols, 0));
    
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             if(board[i][j] == 1){
//                 map[i][j]     = 1;
                
//                 if(j > 0)                map[i][j-1]   = 1;    // left
                
//                 if(i < rows-1)             map[i+1][j]   = 1;    // up
                
//                 if(i < rows-1 && j > 0)    map[i+1][j-1] = 1;    // left-up
                
//                 if(j < cols-1)             map[i][j+1]   = 1;    // right
                
//                 if(i < rows-1 && j < cols-1) map[i+1][j+1] = 1;    // right-up
                
//                 if(i > 0 && j < cols-1)    map[i-1][j+1] = 1;  // right-down
                
//                 if(i > 0)                map[i-1][j]   = 1;    // down            
                
//                 if(i > 0 && j > 0)       map[i-1][j-1] = 1;    // left-down
//             }   
//         }
//     }
    
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             //cout << map[i][j];
//             if(map[i][j] == 0) answer += 1; 
//         }
//         //cout << endl;
//     }
    
    int dir[8][2] = {
        {0,1},{1,1},
        {1,0},{1,-1},
        {0,-1},{-1,-1},
        {-1,0},{-1,1}
    };
    
    vector<vector<int>> cpy(board.begin(), board.end());
    
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[0].size(); j++){
            if(board[i][j] == 1){
                for(int k = 0; k < 8; k++){
                    int dx = j + dir[k][0];
                    int dy = i + dir[k][1];
                    
                    if(dx >= 0 && dx < board[0].size() && dy >= 0 && dy < board.size()){
                        cpy[dy][dx]++;
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < cpy.size(); i++){
        for(int j = 0; j < cpy[0].size(); j++){
            if(cpy[i][j] == 0) answer++;
        }
    }
    
    return answer;
}