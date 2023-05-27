#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    vector<char> v = {'a', 'e', 'i', 'o', 'u'};
    for(auto i : v)
    {
        my_string.erase(remove(my_string.begin(),my_string.end(),i ),my_string.end());
    }
    return my_string;
}