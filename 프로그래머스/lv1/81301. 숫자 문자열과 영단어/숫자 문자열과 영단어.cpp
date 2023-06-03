#include <algorithm>
#include <regex>
#include <string>

using namespace std;

vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

int solution(string s) {
    int answer = 0;
    for(int i = 0; i < numbers.size(); i++) {
        string word = numbers[i];
        size_t found = s.find(word);
        while (found != string::npos) {
            s.replace(found, word.length(), to_string(i));
            found = s.find(word, found + 1);
    }
    }
    answer = stoi(s);
    return answer;
}