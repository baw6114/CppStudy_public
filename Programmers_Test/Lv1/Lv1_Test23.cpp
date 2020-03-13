#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    while (n > 0)
    {
        answer.emplace_back(n%10);
        //answer.push_back(n%10); //똑같음
        n = n/10;
    }
    
    return answer;
}

int main(){
    vector<int> Temp = {};
    long long n = 0;
    Temp = solution(2135);

    for(int var : Temp){
        cout<< var <<endl;
    }
}

// 자연수 뒤집어 배열로 만들기
// 문제 설명
// 자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 
// 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.

// 제한 조건
// n은 10,000,000,000이하인 자연수입니다.
// 입출력 예
// n	return
// 12345	[5,4,3,2,1]