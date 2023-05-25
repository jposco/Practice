#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int x=num_list.size();
    for(int i =0; i<x;i++)
    {
        answer.push_back(num_list.back());
        num_list.pop_back();
    }
    return answer;
}