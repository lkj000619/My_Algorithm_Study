#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int move(vector<vector<int>>& m, vector<int> ls) {
    int r1 = ls[0] - 1, c1 = ls[1] - 1;
    int r2 = ls[2] - 1, c2 = ls[3] - 1;
    int prev = m[r1][c1]; // 시작점 값을 손에 들고 출발
    int min_val = prev;
    // 1. 윗변 (→): 열 c가 c1+1 부터 c2 까지 증가
    for (int c = c1 + 1; c <= c2; c++) {
        swap(m[r1][c], prev);
        min_val = min(min_val, prev);
    }
    // 2. 오른쪽 변 (↓): 행 r이 r1+1 부터 r2 까지 증가
    for (int r = r1 + 1; r <= r2; r++) {
        swap(m[r][c2], prev);
        min_val = min(min_val, prev);
    }
    // 3. 아랫변 (←): 열 c가 c2-1 부터 c1 까지 감소
    for (int c = c2 - 1; c >= c1; c--) {
        swap(m[r2][c], prev);
        min_val = min(min_val, prev);
    }
    // 4. 왼쪽 변 (↑): 행 r이 r2-1 부터 r1 까지 감소
    for (int r = r2 - 1; r >= r1; r--) {
        swap(m[r][c1], prev);
        min_val = min(min_val, prev);
    }
    return min_val;
}

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    
    vector<vector<int>> metrics(rows, vector<int>(columns,0));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            metrics[i][j] = columns*i+(j+1);
            // cout << metrics[i][j] << " ";
        }
        // cout << endl;
    }
    
    for(int i = 0; i < queries.size(); i++){
        // cout << queries[i][0] << ", " << queries[i][1] << " -> " << metrics[queries[i][1]-1][queries[i][0]-1] << endl;
        // answer.push_back(metrics[queries[i][1]-1][queries[i][0]]-1);
        answer.push_back(move(metrics,queries[i]));
    }
    
    return answer;
}