#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map <string,int> total_plays;
    unordered_map <string, vector<pair<int,int>>> songs;
    
    for(int i = 0; i < genres.size(); i++){
        total_plays[genres[i]] += plays[i];    
        songs[genres[i]].push_back({plays[i],i});
    }
    
    vector<pair<string,int>> cpy_total(total_plays.begin(),total_plays.end());
    
    sort(cpy_total.begin(),cpy_total.end(),
        [](const auto&a, const auto&b){
            return a.second > b.second;
        });
    
    
    
    for(int i = 0; i < cpy_total.size(); i++){
        cout << cpy_total[i].first << " / " << cpy_total[i].second << endl;
        sort(songs[cpy_total[i].first].begin(),songs[cpy_total[i].first].end(),[](const auto&a, const auto&b){
            return a.first > b.first;});
        for(int j = 0; j < songs[cpy_total[i].first].size(); j++){
            if(j < 2){
                answer.push_back(songs[cpy_total[i].first][j].second);
            }
        }
    }
    
    
    return answer;
}