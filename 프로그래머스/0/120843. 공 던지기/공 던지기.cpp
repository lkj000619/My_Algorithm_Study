#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int size = numbers.size();
    cout << (k*2-1)%size-1;
    return (k*2-1)%size != 0 ? numbers[(k*2-1)%size-1] : numbers[size-1];
}