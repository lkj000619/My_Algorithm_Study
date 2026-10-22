#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int k, const vector<vector<int>>& dungeons, vector<bool> visit, int cnt, int& max_cnt){
    max_cnt = max(cnt, max_cnt);
    
    for(int i = 0; i < dungeons.size(); i++){
        if(!visit[i]){
            if(k - dungeons[i][0] >= 0 && k - dungeons[i][1] >= 0){
                visit[i] = 1;
                dfs(k - dungeons[i][1], dungeons, visit, cnt+1, max_cnt);
                visit[i] = 0;
            }
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    
    vector<bool> visit(dungeons.size(), 0);
    dfs(k, dungeons, visit, 0, answer);
    
    return answer;
}