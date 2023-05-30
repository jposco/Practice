#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int x = n>m ? m : n; // 작은수
    int y = n>m ? n : m; // 큰수

    for(int i = y; i>=2;i--) //최대공약수
    {
        if(x%i==0 && y%i==0)
        {answer.push_back(i);
         break;}
    }
    if(answer.empty()) answer.push_back(1);
    int sum = x*y;
    for(int i=x;i<=sum;i++)
    {
        if(i%x==0 && i%y==0)
        {
            answer.push_back(i);
            break;
        }
    }
    return answer;
}