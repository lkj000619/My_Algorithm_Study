#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void dfs(string numbers, vector<bool>& use, map<int,int>& stack, string str){
    if(!str.empty()){
        int number = stoi(str);
        int cnt = 0;
        for(int i = 2; i < number; i++){
            if(number % i == 0){ 
                cnt++;
                break;
            }
        }
        
        if(cnt == 0 && number > 1){
            // cout << "string: " << number << endl;
            stack[number]++;
            //return;
        }
    }
    
    int len = numbers.length()-1;
    for(int i = 0; i <= len; i++){
        if(!use[i]){
            use[i] = 1;
            string tmp;
            tmp = str + numbers[i];
            dfs(numbers, use,stack, tmp);
            // tmp = numbers[i] + str;
            // dfs(numbers, use,stack, tmp);
            use[i] = 0;
        }
    }
    /**
    for(int i = 0; i <= len; i++){
        if(!use[len-i]){
            use[len-i] = 1;
            string tmp = str + numbers[len-i];
            dfs(numbers, use,stack, tmp);
            use[len-i] = 0;
        }
    }
    **/
}

int solution(string numbers) {
    int answer = 0;
    string str = "";
    vector<bool> use(numbers.length(),0);
    map<int,int> stack;
    
    dfs(numbers, use, stack, str);
    answer = stack.size();
    
    return answer;
}