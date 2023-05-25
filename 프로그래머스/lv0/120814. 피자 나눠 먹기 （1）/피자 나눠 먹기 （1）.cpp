#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x=0;
    int y=0;
    x = n/7; //2
    y= n%7; //1
    if(n<8) return 1;
    if(y>0) answer=x+1;
    else answer = x   ; 
    return answer;
}