#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    for(int i =0; i < rsp.length(); i++){
        answer += rsp[i] == '0' ? "5" : 
                  rsp[i] == '2' ? "0" : "2" ;
    }
    
    return answer;
}