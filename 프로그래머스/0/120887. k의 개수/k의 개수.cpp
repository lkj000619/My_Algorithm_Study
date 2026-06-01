#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    for(int s = i; s <= j; s++){
        string str_s = to_string(s);
        for(int c = 0; c < str_s.length(); c++){
            if(str_s[c] == (k+'0')) answer++;
        }
    }
    
    return answer;
}