#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> x = {dots[0][0], dots[1][0], dots[2][0], dots[3][0]};
    vector<int> y = {dots[0][1], dots[1][1], dots[2][1], dots[3][1]};
    
    int x_min = *min_element(x.begin(),x.end());
    int x_max = *max_element(x.begin(),x.end());
    
    int y_min = *min_element(y.begin(),y.end());
    int y_max = *max_element(y.begin(),y.end());
    
    answer = (x_max - x_min)*(y_max - y_min);
    
    return answer;
}