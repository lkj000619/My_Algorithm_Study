#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    if (b == 1) return 1;
    
    int div = a > b ? b : a ;
    
    for(int i = div; i > 1; i--){
        if(a % i == 0 && b % i == 0) {
            a = a/i;
            b = b/i;
            break;
        };
    }
    
    
    cout << "b: " << b << endl;
    while(b%2 == 0) b = b/2;
    while(b%5 == 0) b = b/5;
    
    if(b % 2 == 0 || b % 5 == 0 || b == 1)return 1;
    else return 2;
    
    // return answer;
}