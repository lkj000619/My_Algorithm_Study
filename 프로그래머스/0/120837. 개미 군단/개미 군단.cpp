#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    
    // answer += (hp % 5 == 0)? hp/5 :
    //           ((hp/5) % 3 == 0)? hp/5 + (hp%5)/3 : hp/5 + (hp%5)/3 + (hp%5)%3 ;
    
    int ant_j = hp / 5;
    int ant_s = (hp % 5 == 0)? 0 : (hp % 5) / 3;
    int ant_w = (hp % 5 == 0)? 0 : 
                ((hp % 5) % 3 == 0)? 0 : (hp % 5) %3;

    cout << ant_j << " " << ant_s << " " << ant_w << endl;
    answer = ant_j + ant_s + ant_w;
    return answer;
}