#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

vector<int> solution(vector<int> answers) {
    int one[] = {1,2,3,4,5}; //5 * 8
    int two[] = {2,1,2,3,2,4,2,5}; //8 * 5
    int three[]= {3,3,1,1,2,2,4,4,5,5}; //10 * 4
    vector<int> answer;
    vector<int> a;
    vector<int> b;
    vector<int> c;

    int x=0;
    int y=0;
    int z=0;
    for(int i =0;i<answers.size();i++)
    {
        if(answers.at(i)==one[i%5]) x++;
        if(answers.at(i)==two[i%8]) y++;
        if(answers.at(i)==three[i%10]) z++;
    }
    vector<pair<int, int>> comp = {{x, 1},{y, 2},{z, 3}};
    sort(comp.begin(), comp.end(), compare);
   answer.push_back(comp[0].second);
    for (int i = 1; i < 3; i++) {
        if (comp[i].first == comp[0].first) {
            answer.push_back(comp[i].second);
        } else {
            break;
        }
    }
sort(answer.begin(), answer.end());
    return answer;
}