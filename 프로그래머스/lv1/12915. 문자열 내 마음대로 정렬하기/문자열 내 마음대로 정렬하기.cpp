#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;

    sort(strings.begin(), strings.end(), [n](const string& a, const string& b) {
        if (a[n] == b[n]) {
            return a < b; // 사전순으로 앞선 문자열이 앞쪽에 위치하도록 정렬
        } else {
            return a[n] < b[n];
        }
    });

    for (const auto& str : strings) {
        answer.push_back(str);
    }

    return answer;
}
