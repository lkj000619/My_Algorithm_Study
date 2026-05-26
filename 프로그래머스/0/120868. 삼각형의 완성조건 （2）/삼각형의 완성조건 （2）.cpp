#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    
    // [11,7] 
    // 가장 긴 변이 11 인경우
    // 11 < 7 + ?? 
    // ?? = 5,6,7,8,9,10,11
    // ?? < 11 + 7 = 18
    int l1 = sides[0] > sides[1] ? sides[0] : sides[1];
    int l2 = sides[0] > sides[1] ? sides[1] : sides[0];
    cout << "l1: " << l1 << "   l2: " << l2 << endl;
    int sub_l = l1 - l2 +1; // 5
    answer += (l1 - sub_l) >= 0? l1 - sub_l+1 : 0;
    cout << l1 << " < " << l2 << " + ?? " <<"sub l: " << sub_l << endl;
    cout << answer << endl;
    
    int sum_l = l1 + l2;
    cout <<  "?? < " << l1 << " + " <<l2 << " sum l: " << sum_l << endl;
    answer += (sum_l - l1 -1) >= 0 ? sum_l - l1 -1 : 0;
    cout << answer << endl;
    
    return answer;
}