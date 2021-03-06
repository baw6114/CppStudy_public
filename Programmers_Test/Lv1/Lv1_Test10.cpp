#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a>b){
        int temp = 0;
        temp = b;
        b = a;
        a = temp;
    }
    int numsize = b-a+1;
    int halfnumsize = numsize/2;
    long long SumOfBeginEnd = a + b;
    
    answer = ( numsize%2 != 0 ? (SumOfBeginEnd*halfnumsize)+SumOfBeginEnd/2 : (SumOfBeginEnd*halfnumsize) );

    return answer;
}

long long solution2(int a, int b) {
    return (long long)(a + b) * (abs(a - b) + 1) / 2;
}
//다른 사람의 풀이
//갯수가 홀수개일 때는 어째서 되는건지? 0.5가 없어지지 않는 건지? 버림이 안되는건가?

int main(){
    int a = 1;
    int b = 4;
    cout << solution(a, b) << endl;
    //아래의 세가지 경우를 보면, 4, 4, 5가 반환되는데 괄호를 어떻게 치느냐에 따라서, 연산의 결과가 달라짐을 볼 수 있다.
    //자료형이 바뀜으로 인한 손실을 항상 생각을 해야되는 것을 알 수 있다.
    cout <<  2*(int)((1+4)/2) << endl;
    cout <<  2*((1+4)/2) << endl;
    cout <<  2*(1+4)/2 << endl;
    return 0;
}

// 두 정수 사이의 합
// 문제 설명
// 두 정수 a, b가 주어졌을 때 a와 b 사이에 속한 모든 정수의 합을 리턴하는 함수, solution을 완성하세요.
// 예를 들어 a = 3, b = 5인 경우, 3 + 4 + 5 = 12이므로 12를 리턴합니다.

// 제한 조건
// a와 b가 같은 경우는 둘 중 아무 수나 리턴하세요.
// a와 b는 -10,000,000 이상 10,000,000 이하인 정수입니다.
// a와 b의 대소관계는 정해져있지 않습니다.
// 입출력 예
// a	b	return
// 3	5	12
// 3	3	3
// 5	3	12