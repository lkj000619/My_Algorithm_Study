#include <string>
#include <vector>

using namespace std;

string right_push(string A){
    string tmp = "";
    
    tmp += A[A.size() - 1];
    for(int i = 0; i < A.size() - 1; i++){
        tmp += A[i];
    }
    
    return tmp;
}

int solution(string A, string B) {   
    for(int i = 0; i < B.size(); i++){
        if(A == B) return i;
        
        A = right_push(A);
    }
    
    return -1;
}