#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int cnt_2=0;
    int cnt_1=0;
    for(auto i:num_list )
    {
        if(i%2==0) cnt_2++;
        else cnt_1++;
    }
    answer.push_back(cnt_2);
    answer.push_back(cnt_1);
    return answer;
}