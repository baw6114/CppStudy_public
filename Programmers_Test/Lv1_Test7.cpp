#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    answer = s.substr( s.size()%2 != 0? s.size()/2 : s.size()/2 -1 , s.size()%2 != 0? 1 : 2);

    return answer;
}

int main(){
    cout << solution("kbs") << endl;
    cout << solution("kebs") << endl;
}

// 가운데 글자 가져오기
// 문제 설명
// 단어 s의 가운데 글자를 반환하는 함수, solution을 만들어 보세요. 단어의 길이가 짝수라면 가운데 두글자를 반환하면 됩니다.

// 재한사항
// s는 길이가 1 이상, 100이하인 스트링입니다.
// 입출력 예
// s	return
// abcde	c
// qwer	we