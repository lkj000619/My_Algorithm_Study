#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    int div = n;
    for(int i = 2; i < n; i++){
        if(div%i == 0){
            cout << div << " / " << i << endl;
            answer.push_back(i);
            while(div%i == 0){
                div = div/i;
                cout << div << endl;
            }
        }
    }
    if(answer.empty()) answer.push_back(div);
    
    return answer;
}