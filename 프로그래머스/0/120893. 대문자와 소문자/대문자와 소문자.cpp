#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i = 0; i < my_string.length(); i++){
        if(my_string[i] >= 'a' && my_string[i] <= 'z') answer += my_string[i] -'a' + 'A';
        else answer += my_string[i] - 'A' + 'a';
    }
    
    return answer;
}