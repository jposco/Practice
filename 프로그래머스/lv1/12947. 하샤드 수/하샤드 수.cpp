#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string str=to_string(x);
    int sum=0;
    for(char i : str)
    {
        
        sum+=(i-'0');
    }
    if(x%sum==0) return 1;
    return 0;
}