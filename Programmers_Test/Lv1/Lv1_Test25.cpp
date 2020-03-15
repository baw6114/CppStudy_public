#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    if(sqrt(n) - (int)sqrt(n) != 0){
        answer = -1;
    }else{
        answer = (sqrt(n) + 1)*(sqrt(n) + 1);
    }

    return answer;
}

//다른 사람의 풀이 정수인지 어떻게 판별?
long long solution2(long long n) {
    long long answer = sqrt(n);
    
    return powl(answer, 2) == n ? powl(answer + 1, 2) : -1;
}

int main(){
    long long temp = 26;
    
    cout<< solution(temp) <<endl;
}
// 정수 제곱근 판별
// 문제 설명
// 임의의 양의 정수 n에 대해, n이 어떤 양의 정수 x의 제곱인지 아닌지 판단하려 합니다.
// n이 양의 정수 x의 제곱이라면 x+1의 제곱을 리턴하고, n이 양의 정수 x의 제곱이 아니라면 
// -1을 리턴하는 함수를 완성하세요.

// 제한 사항
// n은 1이상, 50000000000000 이하인 양의 정수입니다.
// 입출력 예
// n	return
// 121	144
// 3	-1
// 입출력 예 설명
// 입출력 예#1
// 121은 양의 정수 11의 제곱이므로, (11+1)를 제곱한 144를 리턴합니다.

// 입출력 예#2
// 3은 양의 정수의 제곱이 아니므로, -1을 리턴합니다.