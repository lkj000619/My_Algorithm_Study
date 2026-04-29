#include <string>
#include <vector>

using namespace std;

// int gcd(int a, int b){
//     int c;
//     while(b!=0){
//         c = a%b;
//         a = b;
//         b = c;
//     }
//     return a;
// }

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
//     int result_numer = numer1*denom2 + numer2*denom1;
//     int result_denom = denom1*denom2;
    
//     int judge = gcd(result_numer,result_denom);
//     if(judge == 1){
//         answer.push_back(result_numer);
//         answer.push_back(result_denom);
//     }
//     else{
//         answer.push_back(result_numer/judge);
//         answer.push_back(result_denom/judge);
//     }
    
    int top = numer1*denom2 + numer2*denom1;
    int bottom = denom1*denom2;
    
    int divider = (top > bottom)? bottom : top; 
    

    for(int i = divider; i > 0; i--){
        if((top % i == 0) && (bottom % i == 0)){
            top = top / i;
            bottom = bottom / i;
            break;
        } 
    }
    
    answer.push_back(top);
    answer.push_back(bottom);
    
    
    return answer;
}