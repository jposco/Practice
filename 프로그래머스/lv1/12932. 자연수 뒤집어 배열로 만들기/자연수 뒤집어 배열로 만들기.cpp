#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int x;
    while (n > 0)
    {
        x=n%10;
        answer.push_back(x);
        n /= 10;
    }
    return answer;
}