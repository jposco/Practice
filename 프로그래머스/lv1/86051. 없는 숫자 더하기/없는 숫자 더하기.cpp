#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int sum =45;
    for(auto i : numbers)
    {
        answer +=i;
    }
    
    return sum-answer;
}