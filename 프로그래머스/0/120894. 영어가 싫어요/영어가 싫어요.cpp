#include <iostream>
#include <string>
#include <vector>

using namespace std;

string str_numbers[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" 
};

long long solution(string numbers) {
    long long answer = 0;
    string result = "";
    
    for(int i = 0; i < numbers.length(); i++){
        for(int j = 0; j < 10; j++){
            // cout << j << ": " <<numbers.find(str_numbers[j], i) << endl;
            if(numbers.find(str_numbers[j], i) == i){
                i += str_numbers[j].length()-1;
                // result += '0'+j;
                result += to_string(j);
                break;
            }
        }
        // cout << "--------" << endl;
    }
    
    // answer = stoi(result); // signal: aborted (core dumped) -> long long
    for(int k = 0; k < result.length(); k++){
        answer *= 10;
        answer += result[k] - '0';
        // cout << result[k] << " - " << answer << endl;
    }
    
    return answer;
}