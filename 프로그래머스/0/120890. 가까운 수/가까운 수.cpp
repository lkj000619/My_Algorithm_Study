#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int cmp = 100;
    
    for(int i = 0; i < array.size(); i++){
        int tmp = abs(n - array[i]);
        if(tmp <= cmp){
            if(tmp == cmp){
                if(answer > array[i]) answer = array[i];
            }
            else{
                answer = array[i];
            }
            
            cmp = tmp;
        } 
    }
    
    return answer;
}