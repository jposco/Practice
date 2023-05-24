#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> N;
    for(int i =1; i<n;i++)
    {        
        if(n%i==1)  N.push_back(i);
    }
    for(auto i : N)
    {
        if(n>i) n=i;
    }
    answer=n;
    return answer;
}