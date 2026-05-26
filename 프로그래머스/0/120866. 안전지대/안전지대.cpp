#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int rows = board.size();
    int cols = board[0].size();
    vector<vector<int>> map(rows, vector<int>(cols, 0));
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(board[i][j] == 1){
                map[i][j]     = 1;
                
                if(j > 0)                map[i][j-1]   = 1;    // left
                
                if(i < rows-1)             map[i+1][j]   = 1;    // up
                
                if(i < rows-1 && j > 0)    map[i+1][j-1] = 1;    // left-up
                
                if(j < cols-1)             map[i][j+1]   = 1;    // right
                
                if(i < rows-1 && j < cols-1) map[i+1][j+1] = 1;    // right-up
                
                if(i > 0 && j < cols-1)    map[i-1][j+1] = 1;  // right-down
                
                if(i > 0)                map[i-1][j]   = 1;    // down            
                
                if(i > 0 && j > 0)       map[i-1][j-1] = 1;    // left-down
            }   
        }
    }
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            //cout << map[i][j];
            if(map[i][j] == 0) answer += 1; 
        }
        //cout << endl;
    }
    
    return answer;
}