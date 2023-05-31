#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size()==4 || s.size()==6)
    {    
        for(int i : s) if(i>='A') return false;
    }
    else return false;
    return answer;
}