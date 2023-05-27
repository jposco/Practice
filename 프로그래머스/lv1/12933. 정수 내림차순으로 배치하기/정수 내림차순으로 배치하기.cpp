#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str = to_string(n);   
    sort(str.begin(), str.end(), greater<char>());
    //sort(str.begin(), str.end(), less<char>());
    answer = stoll(str);
    return answer;
}