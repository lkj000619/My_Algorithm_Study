#include <string>
#include <vector>

using namespace std;
char c[] = {'a','e','i','o','u'};
string solution(string my_string) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++){
        int check = 1;
        for(int j = 0; j < 5; j++){
            if(my_string[i] == c[j]) check =0;
        }
        
        if(check) answer+=my_string[i];
    }
    return answer;
}