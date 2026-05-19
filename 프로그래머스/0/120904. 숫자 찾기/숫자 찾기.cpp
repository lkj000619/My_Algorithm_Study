#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    
    string str_num = to_string(num);
    string str_k = to_string(k);
    
    int index = 0;
    if((index = str_num.find(str_k)) == string::npos) return -1;
    else answer = index+1;
    
    return answer;
}