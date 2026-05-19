#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    for(int i = 2; i < n; i++){
        if(n / i == i && n % i == 0){
            return 1;
        } 
    }
    
    return 2;
}