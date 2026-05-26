#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;

    for(int i = 0; i < dic.size(); i++){
        if(dic[i].length() == spell.size()){
            cout << "if case in" << endl;
            int check = 0;
            for(int j = 0; j < spell.size(); j++){
                if(dic[i].find(spell[j]) != string::npos) check++;
            }
            cout << "check count: " << check << "/ length:" << spell.size() << endl;
            if(check == spell.size()) return 1;
        }
        
    }
    
    return 2;
}