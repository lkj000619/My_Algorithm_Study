#include <string>
#include <vector>

using namespace std;

int fact(int n){
    if(n == 1) return 1;
    else return n*fact(n-1);
}

int n_fact[10] = {
    1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800
};

int solution(int n) {
    int answer = 1;
    
    for(int f=0; f<10; f++){
        if(n_fact[f] == n) return f+1;
    }
    
    for(int i = 1; i <=10; i++){
        if(fact(i) > n){
            answer -= 1;
            break;
        }
        else{
            answer++;
        }
    }
    
    return answer;
}