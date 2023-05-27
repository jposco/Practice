#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int last = arr.size();
    for(int i = 1; i<last;i++)
    {
        if(arr.at(i-1) != arr.at(i))
        {
        //arr.erase(arr.begin()+(i-1));
        answer.push_back(arr.at(i-1));
        }
    }
    answer.push_back(arr.back());
    return answer;
}