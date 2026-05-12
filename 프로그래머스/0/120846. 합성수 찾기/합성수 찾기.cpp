#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {   
    // 총 갯수 - 약수의 갯수를 2개만 갖는 수의 갯수 = 합성수의 갯수
    int answer = 0;
    
    if(n < 4) return 0;
    
    answer = 3;
    for(int i = 4; i <= n; i++){
        int cnt = 0;
        for(int j = 2; j < i; j++){
            if(i%j == 0){ 
                cout << i << ", " << j << endl;    
                cnt++;
            }
        }
        if(cnt == 0) {
            //cout << i << endl;
            answer++;
        }
    }

    return n - answer;
}