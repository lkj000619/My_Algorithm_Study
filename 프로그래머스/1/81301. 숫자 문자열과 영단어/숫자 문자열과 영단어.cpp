#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> integer = {
    "zero",
	"one",
	"two",
	"three",
	"four",
	"five",
	"six",
	"seven",
	"eight",
	"nine"
};

int solution(string s) {
    int answer = 0;
    for(int i = 0; i< s.length(); i++){
        // cout << "index : " << i << endl;
        if(s[i] >= '0' && s[i] <= '9'){
            answer = answer *10 + (s[i]-'0');
            // cout << "s[" << i << "]: " << s[i]  << " answer:" << answer << endl;
        }
        else{
            for(int j = 0; j < integer.size(); j++){
                if(integer[j][0] == s[i]){
                    // cout << "if " << integer[j][0] << "==" << s[i] << endl;
                    int k;
                    for(k = 0; k < integer[j].length(); k++){
                        if(s[i+k] != integer[j][k]) break;
                    }
                    
                    if(k == integer[j].length()){
                        i += k-1;
                        cout << "i: " << i << " j: " << j << endl;
                        answer = answer *10 + j;
                        // cout<<" answer:" << answer<<endl;
                        break;
                    }
                }
            }
        }
    }
    return answer;
}