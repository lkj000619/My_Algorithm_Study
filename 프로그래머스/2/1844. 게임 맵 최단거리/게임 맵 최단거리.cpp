#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    
    int dir[4][2] = {
        {0,1},{1,0},{0,-1},{-1,0}
    };
    
    int rows = maps.size();
    int cols = maps[0].size();
    
    vector<vector<int>> visit(rows, vector<int>(cols,0));
    queue<pair<int,int>> q;
    
    visit[0][0] = 1;
    q.push({0,0});
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(x == cols -1 && y == rows -1){
            return visit[y][x];
        }
        
        for(int i = 0; i < 4; i++){
            int dx = x + dir[i][0];
            int dy = y + dir[i][1];
            
            if(dx >= 0 && dx < cols && dy >= 0 && dy < rows){
                if(maps[dy][dx] != 0 && visit[dy][dx] == 0){
                    visit[dy][dx] = visit[y][x] + 1;
                    q.push({dx,dy});
                }
            }
        }
    }
    
    
    
    return -1;
}