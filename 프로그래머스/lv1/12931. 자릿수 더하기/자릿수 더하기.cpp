#include <iostream>
#include <vector>
using namespace std;

int solution(int n)
{
    int answer = 0;
vector<int> N;
    
    for(int i = 100000000; i >= 1; i = i / 10)
    {
        int num = 0;    
        if(n >= i)
        {            
            num = n / i;
            N.push_back(num);
            n -= num * i;
        }
    }
    for(auto i : N)
    {
        answer += i;
    }

    return answer;
}