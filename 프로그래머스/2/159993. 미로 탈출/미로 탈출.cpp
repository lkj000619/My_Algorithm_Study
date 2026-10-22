#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int dir[4][2] = {
    {0,1},{1,0},{0,-1},{-1,0}
};

int bfs(const vector<string>& str_map, char s, char e){
    int rows = str_map.size();
    int cols = str_map[0].length();
    
    // cout << "rows: " << rows << ", cols: " << cols << endl;
    
    vector<vector<int>> visit(rows, vector<int>(cols,0));
    
    pair<int,int> start_p;
    // pair<int,int> end_p;
    
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(str_map[i][j] == s){
                start_p = {j,i};
            }
            // if(str_map[i][j] == 'E'){
            //     end_p = {j,i};
            // }
        }
    }
    
    queue<pair<int,int>> q;
    q.push(start_p);
    visit[start_p.second][start_p.first] = 1;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(str_map[y][x] == e) return visit[y][x]-1;
        
        for(int i = 0; i < 4; i++){
            int dx = x + dir[i][0];
            int dy = y + dir[i][1];
            
            if(dx >= 0 && dx < cols && dy >= 0 && dy < rows){
                if(str_map[dy][dx] != 'X' && visit[dy][dx] == 0){
                    visit[dy][dx] = visit[y][x] + 1;
                    q.push({dx,dy});
                }
            }
        }
    }
    
    return -1;
}

int solution(vector<string> maps) {
    int answer = 0;
    
    int part1 = bfs(maps, 'S', 'L');
    int part2 = bfs(maps, 'L', 'E');
    
    if(part1 == -1 || part2 == -1) return -1;
    
    answer = part1+part2;
    
    return answer;
}