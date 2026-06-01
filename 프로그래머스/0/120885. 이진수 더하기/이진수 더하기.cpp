#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    string carry = "0";
    
    reverse(bin1.begin(), bin1.end());
    reverse(bin2.begin(), bin2.end());
    
    int len1 = bin1.length();
    int len2 = bin2.length();
    int big;
    
    if(len1 > len2){
        big = len1;
        for(int i = 0; i < len1-len2; i++){
            bin2.push_back('0');
        }
    }
    else{
        big = len2;
        for(int i = 0; i < len2-len1; i++){
            bin1.push_back('0');
        }
    }
    
    for(int j = 0; j < big; j++){
        int bit = bin1[j] - '0' + bin2[j] - '0' + carry[j] - '0';
        if(bit & 1){
            answer += "1";
        }
        else{
            answer += "0";
        }
        
        if(bit & 2){
            carry += "1";
        }
        else{
            carry += "0";
        }
        
        if(j >= big - 1 && (bit & 2)){
            answer += "1";
        }
        
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}