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

int solution(int n) {
//     int answer = 0;
//     int x = gcd(n,6);
//     answer = (n/x);
    
    // pizza / n
    // 6 / 6   = 1
    // 6 / 10  = 0 ... 4 -> 6*5 / 10 = 3 
    // 6 / 4   = 1 ... 2 -> 6*2 / 4  = 3
    
    // if n = 100 -> result 50
    
    if(!(6%n)){
        return 1;
    }
    else{
        for(int i = 2; i <=50; i++){
            if(!((6*i)%n)) return i;
        }
    }
    
    // return answer;
}