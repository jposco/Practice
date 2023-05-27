#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    
    int ja = numer1*denom2 + denom1*numer2;
    int mo = denom1*denom2;
    vector<int> answer = {ja, mo};
    for(int i = mo; i>1;i--)
    {
        if(ja%i==0 && mo%i==0)
        {
            answer.at(0)= (ja/i);
            answer.at(1)= (mo/i);
            break;
        }
    }
    return answer;
}