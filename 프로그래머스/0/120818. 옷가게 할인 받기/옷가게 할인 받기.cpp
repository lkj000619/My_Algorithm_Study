#include <string>
#include <vector>

using namespace std;
//	why did not work price - price * %
int solution(int price) {
    int answer = 0;
    if(price >= 0 && price < 100000){
        answer = price;
    }
    else if(price >= 100000 && price < 300000){
        answer = price*95/100;
    }
    else if(price >= 300000 && price < 500000){
        answer = price*90/100;
    }
    else if(price >= 500000){
        answer = price*80/100;
    }
    else{
        answer = 0;
    }
    
    return answer;
}