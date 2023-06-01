#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    for(auto i : s)
    {
        if(isalpha(i))
        {
            if(cnt%2==0){
            answer+=toupper(i);
            cnt++;
            }
            else {
                answer+=tolower(i);
                cnt++;
            }
            
        }
        else {
            answer+=i;
            cnt=0;
        }
    }
    return answer;
}