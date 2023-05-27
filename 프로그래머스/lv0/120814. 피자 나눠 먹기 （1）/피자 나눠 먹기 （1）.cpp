#include <cmath>
using namespace std;

int solution(int n) {
    int answer = 0;
    double x = n/7.0;
    answer = ceil(x);
    return answer;
}