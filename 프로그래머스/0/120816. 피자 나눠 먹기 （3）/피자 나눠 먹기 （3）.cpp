#include <string>
#include <vector>

using namespace std;

// int gcb(int a, int b){
//     int c;
//     while(b!=0){
//         c = a%b;
//         a = b;
//         b = c;
//     }
//     return a;
// }

int solution(int slice, int n) {
//     int answer = 0;
//     int x = gcb(slice,n);
    
//     if((n/x)%(slice/x) == 0){
//         answer = (n/x)/(slice/x);
//     }
//     else{
//         answer = (n/x)/(slice/x) + 1;
//     }
    
//     return answer;
    
    // slice * result / n = ? -> ? >= 1
    // 7 * result / 10 >= 1 -> result = 1
    
    // min - slice = 2, n = 1; max - slice = 10, n = 100;
    int result = 1;
    while(1){
        if(slice*result/n >= 1) return result;
        
        result++;
    }
}