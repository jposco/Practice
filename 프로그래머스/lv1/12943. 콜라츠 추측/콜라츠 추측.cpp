#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    if(num==0) return 0;
    long long n = num;
    while(n!=1)
    {
        n%2==0 ? n/=2 : n=n*3+1;        
        answer++;
        if(answer>=500) return -1;        
    }
    return answer;
}