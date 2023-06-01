#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    //using ULL = unsigned long long;
    //ULL num = 
    int answer = 0;
    vector<string> v;
    for (int i = 0; i < t.size()-p.size()+1; i++)
    {
        v.push_back(t.substr(i, p.size()));
    }
    for (auto i : v)
    {
        int x = stoll(i);
        if(i<=p) answer++;
    }

    return answer;
}