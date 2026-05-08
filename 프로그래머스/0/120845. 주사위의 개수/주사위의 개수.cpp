#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {   
    int rows = box[0] / n;
    int cols = box[1] / n;
    int height = box[2] / n;
    return rows*cols*height;
}