#include <string>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> v;
    for(int i =my_string.size()-1; i>=0;i--)
    {
    v.push_back(my_string[i]);
        }
    for(auto i : v) answer+=i;
    return answer;
}