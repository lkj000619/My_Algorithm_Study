#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    int len_result = cipher.length() / code;
    
    for(int i = 1; i <= len_result; i++){
        answer += cipher[i*code-1];
    }
    
    return answer;
}