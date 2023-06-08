#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
//vector<pair<int, int>> monthDay = {{1, 31},{2, 29},{3, 31},{4, 30},{5, 31},{6, 30},{7, 31},{8, 31},{9, 30},{10, 31},{11, 30},{12, 31}};
    int monthDay[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"THU", "FRI","SAT","SUN","MON","TUE","WED"};
    int sum = b;    
    for(int i =0;i<a-1;i++)
    {
        sum += monthDay[i];
    }
    int i = sum%7;
    answer = week[i];
        
    return answer;
}