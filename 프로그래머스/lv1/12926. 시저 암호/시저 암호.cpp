#include <string>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i : s)
    {
        if(i==' ')
        {
            answer+=i;
            continue;
        }
        if (isalpha(i))
        {
            if(islower(i))
            {
                i+=n;
                if(i>'z') i='a'+(i-'z'-1);               
            }
            else if(isupper(i))
            {
                i+=n;
                if(i>'Z') i='A'+(i-'Z'-1);
            } 
            answer += i;
        }
    }
    return answer;
}