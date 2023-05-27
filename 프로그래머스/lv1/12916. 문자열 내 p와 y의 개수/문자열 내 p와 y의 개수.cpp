#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int cnt_p = 0;
    int cnt_y = 0;
    for(auto i : s)
    {
        if(i=='p'||i=='P') cnt_p++;
        else if(i=='y'||i=='Y') cnt_y++;
    }
    if(cnt_p==cnt_y) return 1;
    return 0;
}