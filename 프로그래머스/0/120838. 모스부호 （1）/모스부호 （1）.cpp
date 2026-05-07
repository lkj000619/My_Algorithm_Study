#include <iostream>
#include <string>
#include <vector>

using namespace std;

pair<string, char> morse[] = {
    {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'},
    {".", 'e'}, {"..-.", 'f'}, {"--.", 'g'}, {"....", 'h'},
    {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
    {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'},
    {"--.-", 'q'}, {".-.", 'r'}, {"...", 's'}, {"-", 't'},
    {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
    {"-.--", 'y'}, {"--..", 'z'}
};

string solution(string letter) {
    string answer = "";
    int size = sizeof(morse) / sizeof(morse[0]);
    
    // cout << "letter length : " << letter.length()  << ", morse size : " << size << endl;
    
    int morse_front = 0;
    int morse_back  = 0;
    while(1){
        morse_back = letter.find(" ",morse_front);
        cout << "morse_back :" << morse_back << endl;
        
        int morse_len = morse_back - morse_front;
        for(int i = 0; i < size; i++){
            if(letter.compare(morse_front,morse_len,morse[i].first) == 0){
                answer += morse[i].second;
            }
        }
        
        if(morse_back > letter.length()) break;
        
        morse_front = morse_back + 1;
    }
    
    
    return answer;
}