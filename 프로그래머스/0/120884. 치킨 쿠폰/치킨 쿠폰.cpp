#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    
    if(chicken < 10) return answer;
    
    cout << "chicken : " << chicken << endl; 
    
    while(1){
        int div = chicken / 10;
        int mod = chicken % 10;
        
        if(!div) break;
        
        answer += div;
        
        cout << "div : " << div << ", mod : " << mod  << ", result : " << answer << endl; 
        
        chicken = div+mod;
    }
    
   
    
    return answer;
}