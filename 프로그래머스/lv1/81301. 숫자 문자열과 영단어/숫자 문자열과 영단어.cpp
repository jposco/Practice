#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string start = "";
    for (int i=0;i<s.size();i++)
    {
        if (s[i] == 'o') {
            i += 2;
            start += '1';
        }
        else if (s[i] == 't' && s[i + 1] == 'w')
        {
            i += 2;
            start += '2';
        }
        else if (s[i] == 't' && s[i + 1] == 'h')
        {
            i += 4;
            start += '3';
        }
        else if (s[i] == 'f' && s[i + 1] == 'o')
        {
            i += 3;
            start += '4';
        }
        else if (s[i] == 'f' && s[i + 1] == 'i')
        {
            i += 3;
            start += '5';
        }

        else if (s[i] == 's' && s[i + 1] == 'i')
        {
            i += 2;
            start += '6';
        }
        else if (s[i] == 's' && s[i + 1] == 'e')
        {
            i += 4;
            start += '7';
        }
        else if (s[i] == 'e')
        {
            i += 4;
            start += '8';
        }
        else if (s[i] == 'n')
        {
            i += 3;
            start += '9';
        }
        else if(isdigit(s[i])) start += s[i];
        else
        {
            i += 3;
            start += '0';
        }        
    }
    answer = stoi(start);
    return answer;
}