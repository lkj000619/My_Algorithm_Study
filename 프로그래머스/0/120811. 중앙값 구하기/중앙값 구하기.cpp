#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    // int answer = 0;
    // for(int i = 0; i < array.size()-1; i++){
    //     for(int j = i+1; j < array.size(); j++){
    //         if(array[i] > array[j]){
    //             int temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }
    // answer = array[array.size()/2];
    sort(array.begin(),array.end());
    int len = array.size();
    
    return array[len/2];
}