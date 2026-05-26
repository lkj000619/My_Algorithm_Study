#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    
    for(int i = 1; i < 4; i++){
        int v1_x = dots[0][0] - dots[i][0];
        cout << "v1 : " <<  dots[0][0] << " - " << dots[i][0] << " , " << dots[0][1] << " - " << dots[i][1] << endl;
        pair<int,int> v1 = {(dots[0][0] - dots[i][0]), (dots[0][1] - dots[i][1])};
        
        int idx1 = i == 1? 2 : 
                        2? 3 :
                        3? 1 : 0;
        int idx2 = i == 1? 3 : 
                        2? 1 :
                        3? 2 : 0;
        
        cout << "v2 : " <<  dots[idx1][0] << " - " << dots[idx2][0] << " , " << dots[idx1][1] << " - " << dots[idx2][1] << endl;
        pair<int,int> v2 = {(dots[idx1][0] - dots[idx2][0]), (dots[idx1][1] - dots[idx2][1])};
        
        // if(v1 == v2) answer++;
        // int v1_l = v1.first * v1.first + v1.second * v1.second;
        // int v2_l = v2.first * v2.first + v2.second * v2.second;
        // if(v1_l == v2_l) {
        //     cout << "compare---------" << endl;
        //     cout << "v1 : " << v1.first << ", " << v1.second << endl;
        //     cout << "v2 : " << v2.first << ", " << v2.second << endl;
        //     cout << "---------" << endl;
        //     return 1;
        // }
        
        if(v1.first * v2.second == v2.first *v1.second)
            return 1;
        
    }
    
    return 0;
}