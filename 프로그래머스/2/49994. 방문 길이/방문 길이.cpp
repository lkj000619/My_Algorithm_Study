#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct point{
    int x;
    int y;
};

void stack_dist(point& p, point& e, vector<pair<point,point>>& stack, int& dist){
    int stack_len = stack.size();
    // cout << "stack len: " << stack_len << endl;
    for(int i = 0; i < stack.size(); i++){
        if(e.x == stack[i].first.x && e.y == stack[i].first.y && 
           p.x == stack[i].second.x && p.y == stack[i].second.y){
            stack_len--;
        }
    }
    
    if(stack_len == stack.size()){
        // cout << "(" << e.x << ", " << e.y << ")" << endl; 
        stack.push_back({e,p});
        stack.push_back({p,e});
        dist++;
    };
    
    e = p;
}

int solution(string dirs) {
    int answer = 0;
    point p = {0,0};
    point e = {0,0};
    vector<pair<point,point>> data;
    
    for(char c : dirs){
        // cout << "char: " << c << endl;
        switch(c){
            case 'U':
                if(p.y < 5){
                    p.y++;
                    stack_dist(p, e, data, answer);
                }
                break;
            case 'D':
                if(p.y > -5){
                    p.y--;
                    stack_dist(p, e, data, answer);
                }
                break;
            case 'R':
                if(p.x < 5){
                    p.x++;
                    stack_dist(p, e, data, answer);
                }
                break;
            case 'L':
                if(p.x > -5){
                    p.x--;
                    stack_dist(p, e, data, answer);
                }
                break;
        }
        
        // stack_dist(p, e, data, answer);
    }
    
    return answer;
}