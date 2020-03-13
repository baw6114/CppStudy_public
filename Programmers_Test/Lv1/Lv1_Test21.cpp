#include <string>
#include <vector>
#include <iostream>
#include <sstream>  //split을 구현하기 위해서 쓴 헤더파일, 문제 풀이에는 필요없음

using namespace std;

/*-------------------------------------------------------------------------------------*/
// Split을 사용했지만, 공백이 2개 이상인 경우도 존재하므로 필요가 없었다.
template<typename Out>
void splitelems(const string &s, char delim, Out result) 
{
    stringstream ss(s);
    string item;
 
    while (getline(ss, item, delim)){
        *(result++) = item;
    } 
        
}

vector<string> split(const string &s, const char delim)
{
    vector<string> elems;
    splitelems(s, delim, back_inserter(elems));
 
    return elems;
}

string solution2(string s) {
    string answer = "";
    vector<string> wordArray = {};

    wordArray = split(s,' ');

    for(int num = 0; num < wordArray.size(); num++){
        for(int i = 0; i < wordArray[num].size(); i++){

            wordArray[num][i] = (i%2 == 0 ? toupper(wordArray[num][i]) : tolower(wordArray[num][i]));
        }
        answer.append(wordArray[num]);
        if(num == wordArray.size() - 1) continue;
        answer.append(" ");
    }
    
    return answer;
}
/*-------------------------------------------------------------------------------------*/

string solution(string s){
    string answer = "";
    answer = s;
    int count = 0;

    for(int i = 0; i < answer.size(); i++){
        answer[i] = (answer[i] != ' ' && count%2 == 0 ? toupper(answer[i]) : tolower(answer[i]) );
        count = answer[i] != ' ' ? count + 1 : 0;
    }

    return answer;
}

int main(){

    string s = "try hello world";

    cout<< solution2(s) <<endl;
    
}

// 이상한 문자 만들기
// 문제 설명
// 문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 
// 각 단어는 하나 이상의 공백문자로 구분되어 있습니다. ->공백이 2개 이상인 경우도 고려 필요
// 각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, 
// solution을 완성하세요.

// 제한 사항
// 문자열 전체의 짝/홀수 인덱스가 아니라, 단어(공백을 기준)별로 짝/홀수 인덱스를 판단해야합니다.
// 첫 번째 글자는 0번째 인덱스로 보아 짝수번째 알파벳으로 처리해야 합니다.
// 입출력 예
// s	return
// try hello world	TrY HeLlO WoRlD
// 입출력 예 설명
// try hello world는 세 단어 try, hello, world로 구성되어 있습니다. 각 단어의 짝수번째 문자를 대문자로, 
// 홀수번째 문자를 소문자로 바꾸면 TrY, HeLlO, WoRlD입니다. 따라서 TrY HeLlO WoRlD 를 리턴합니다.