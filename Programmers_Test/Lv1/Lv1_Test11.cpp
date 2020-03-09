#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num;

//인자 두 개를 받는 비교 함수로, 첫 번째 인자가 더 작을 경우 true 를 리턴
//더 작을 경우, 정렬을 할 필요가 없음( 아스키 코드에 따라 )
bool compareto(string a, string b){

    //at(var) : string에서 var위치의 문자 반환
    return a.at(num) != b.at(num) ? a.at(num) < b.at(num) : a < b;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    answer = strings;
    num = n;

    sort(answer.begin(), answer.end(), compareto);

    return answer;
}

int main(){
    vector<string> Temp = {};
    vector<string> Test = {"sun", "bed", "car"};

    Temp = solution(Test, 1);
    
    for(string var : Temp){
        cout<< var <<endl;
    }

    Test = {"abce", "abcd", "cdx"};
    Temp = solution(Test, 2);
    for(string var : Temp){
        cout<< var <<endl;
    }
}
// 문자열 내 마음대로 정렬하기
// 문제 설명
// 문자열로 구성된 리스트 strings와, 정수 n이 주어졌을 때, 각 문자열의 인덱스 n번째 글자를 기준으로 오름차순 정렬하려 합니다. 
// 예를 들어 strings가 [sun, bed, car]이고 n이 1이면 각 단어의 인덱스 1의 문자 u, e, a로 strings를 정렬합니다.

// 제한 조건
// strings는 길이 1 이상, 50이하인 배열입니다.
// strings의 원소는 소문자 알파벳으로 이루어져 있습니다.
// strings의 원소는 길이 1 이상, 100이하인 문자열입니다.
// 모든 strings의 원소의 길이는 n보다 큽니다.   ->n의 예외를 둘 필요가 없음
// 인덱스 1의 문자가 같은 문자열이 여럿 일 경우, 사전순으로 앞선 문자열이 앞쪽에 위치합니다.
// 입출력 예
// strings	n	return
// [sun, bed, car]	1	[car, bed, sun]
// [abce, abcd, cdx]	2	[abcd, abce, cdx]
// 입출력 예 설명
// 입출력 예 1
// sun, bed, car의 1번째 인덱스 값은 각각 u, e, a 입니다. 이를 기준으로 strings를 정렬하면 [car, bed, sun] 입니다.

// 입출력 예 2
// abce와 abcd, cdx의 2번째 인덱스 값은 c, c, x입니다. 
// 따라서 정렬 후에는 cdx가 가장 뒤에 위치합니다. abce와 abcd는 사전순으로 정렬하면 abcd가 우선하므로, 답은 [abcd, abce, cdx] 입니다.