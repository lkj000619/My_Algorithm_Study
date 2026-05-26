#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {  

    int three = 1;
    for(int i = 1; i <= n; i++){
        while(1){
            string str_three = to_string(three);
            if(str_three.find("3") != string::npos || three % 3 == 0) three++;
            else break;
        }
        cout << i << ", " << three << endl;
        three++;
    }
    
    return three-1;
}