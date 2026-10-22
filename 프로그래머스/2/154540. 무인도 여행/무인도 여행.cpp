#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;


void sreach(vector<string> maps, vector<int>& space){
    int rows = maps.size();
    int cols = maps[0].length();
    
    vector<vector<int>> visit(rows, vector(cols, 0));
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(maps[i][j] != 'X' && visit[i][j] == 0){
                int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
                
                queue<pair<int,int>> q;
                q.push({j,i});
                
                int total_val = maps[i][j] - '0';
                int space_index = space.size()+1;
                visit[i][j] = space_index;
                
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    
                    for(int k = 0; k < 4; k++){
                        int dx = x+dir[k][0];
                        int dy = y+dir[k][1];
                        
                        if(dx >= 0 && dx < cols && dy >= 0 && dy < rows){
                            if(maps[dy][dx] != 'X' && visit[dy][dx] == 0){
                                visit[dy][dx] = space_index;
                                total_val += maps[dy][dx] - '0';
                                // cout << maps[dy][dx] - '0' << endl;
                                q.push({dx,dy});
                            }
                        }
                    }
                    
                }
                // cout << "total_val: " << total_val << endl;
                space.push_back(total_val);
            }
        }
    }
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    
    sreach(maps, answer);
    
    if(answer.empty()) return {-1};
        
    sort(answer.begin(),answer.end());
    
    return answer;
}