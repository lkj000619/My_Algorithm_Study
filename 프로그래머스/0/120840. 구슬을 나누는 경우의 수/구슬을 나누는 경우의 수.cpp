#include <iostream>
#include <string>
#include <vector>

using namespace std;

int fact(int n){
    if(n == 1 || n == 0) return 1;
    else return n * fact(n-1);
}

int solution(int balls, int share) {
    int n = balls;
    int m = share;
    int nm = balls - share;
    
    double top = 1.0;
    for(int i = n; i > m; i--){
        top *= i / (double)nm;
        cout << i << ", "<< nm << endl; 
        nm--;
    }
    
    int answer = top+0.5;
    
    cout << top << " " << endl; 
    
    return answer;
}