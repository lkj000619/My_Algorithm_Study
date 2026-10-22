#include <string>
#include <vector>

using namespace std;

// int cnt = 0;

// void branch(vector<int> arr, int target, int sum, int index){
//     if(arr.size() == index){
//         if(sum == target){
//             cnt++;
//         }
        
//         return ;
//     }
    
//     branch(arr,target,sum+arr[index],index+1);
//     branch(arr,target,sum-arr[index],index+1);
    
// }

void dfs(vector<int> numbers, int target, int index, int sum, int& result){
    if(index >= numbers.size()){
        if(target == sum) result++;
        return;
    }
    
    dfs(numbers, target, index+1, sum+numbers[index], result);
    dfs(numbers, target, index+1, sum-numbers[index], result);
}

int solution(vector<int> numbers, int target) {
    // branch(numbers,target,0,0);
    int answer = 0;
    dfs(numbers, target, 0, 0, answer);

    return answer;
}