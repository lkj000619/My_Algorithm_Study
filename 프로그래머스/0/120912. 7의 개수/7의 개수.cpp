#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int num : array){
        string str = to_string(num);
        for(char str_n : str){
            if(str_n == '0') continue;
            else if((str_n -'0') % 7 == 0) answer++;
        }
    }
    return answer;
}