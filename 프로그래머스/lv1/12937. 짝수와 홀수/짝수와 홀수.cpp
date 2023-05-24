#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if(num%2==0)//짝수
    {
        answer = "Even";
    }
    else answer = "Odd";
    return answer;
}