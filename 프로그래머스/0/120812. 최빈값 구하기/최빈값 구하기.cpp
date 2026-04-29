#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int compare(pair<int,int>& a, pair<int,int>& b){
    return a.second > b.second;
}

int solution(vector<int> array) {
//     vector<int> count;
//     vector<int> num;
    
//     for(int i = 0; i < array.size()-1; i++){
//         for(int j = i+1; j < array.size(); j++){
//             if(array[i] > array[j]){
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
    
//     int answer = 0;
//     int dupl = 0;
    
//     if(array.size() == 1){
//         answer = array[0];
//     }
//     else{
//         for(int i = 0; i < array.size()-1; i++){
//             if(array[i] == array[i+1]){
//                 dupl +=1;
//                 if(i+2 == array.size()){
//                     count.push_back(dupl);
//                     num.push_back(array[i]);
//                 }
//             }
//             else{
//                 count.push_back(dupl);
//                 num.push_back(array[i]);
//                 dupl = 0;
//             }
//         }

//         int memory = 0;
//         int check = 0;
//         int j = 0;

//         for(int i = 0; i < count.size(); i++){
//             if(memory < count[i]){
//                 memory = count[i];
//                 check = 0;
//                 j = i;
//             }
//             else if(memory  == count[i]){
//                 check = 1;
//             }
//         }

//         answer = check? -1 : num[j];
//     }
    int answer = 0;
    vector<pair<int,int>> metrics;
    for(int i = 0; i < array.size(); i++){
        if(metrics.empty()){
            metrics.push_back({array[i],1});
        }
        else {
            int checker = 1;
            for(int j = 0; j < metrics.size(); j ++){
                if(array[i] == metrics[j].first){
                    metrics[j].second++;
                    break;
                }   
                checker = 0;
            }
            
            if(!checker){
                metrics.push_back({array[i],1});
            }
        }
    }
    
    sort(metrics.begin(),metrics.end(),compare);
    
    // for(int k = 0; k < metrics.size(); k++){
    //     cout << "metrics " << k << " :" << metrics[k].first << ", " << metrics[k].second << endl;   
    // } 
    
    return (metrics[0].second == metrics[1].second)? -1: metrics[0].first;
}