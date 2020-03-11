#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

//에라토테네스의 체 + 제곱근
int solution(int n) {
    int answer = 0;
    vector<int> TempArray(n,0);

    for (int i = 2; i <= n; i++) {
        TempArray[i] = i;   //해당 숫자까지 모든 값을 배열에 입력, 1은 이미 0으로 초기화 상태
    }

    for (int index = 2; index <= sqrt(n); index++) { 

        // 이미 체크된 수의 배수는 건너뛴다
        if (TempArray[index] == 0) continue;
        
        for (int mul = index + index; mul <= n; mul += index) { 
            //index를 제외한(index+index) index의 배수들은 0을 대입
            
            TempArray[mul] = 0;

        }
    }
    for(int var : TempArray){
        if(var != 0){
            answer++;
        }
    }

    return answer;
}

//에라토테네스의 체
int solution2(int n) {
    int answer = 0;
    vector<int> TempArray(n,0);

    for (int i = 2; i <= n; i++) {
        TempArray[i] = i;   //해당 숫자까지 모든 값을 배열에 입력
    }

    for (int index = 2; index <= n; index++) { 

        // 이미 체크된 수의 배수는 건너뛴다
        if (TempArray[index] == 0) continue;
        
        for (int mul = index + index; mul <= n; mul += index) { //index를 제외한(index+index) index의 배수들은 0으로 체크

            TempArray[mul] = 0;

        }
    }
    for(int var : TempArray){
        if(var != 0){
            answer++;
        }
    }

    return answer;
}

//소수를 판별할 수의 제곱근까지만 하면 되는 식, 제곱근까지만 해도 되는 이유?
//효율성 테스트 통과 실패
int solution3(int n) {
    int answer = 0;

    for(int number = 2; number <= n; number++){
        answer++;
        for(int divider = sqrt(number); divider > 1; divider--){
            if(number%divider == 0){
                //소수가 아님
                answer--;
                break;
            }
        }
    }

    return answer;
}

//풀이는 맞으나, 빅오(시간복잡도)가 너무 큼
int solution4(int n) {
    int answer = 0;

    for(int number = 2; number <= n; number++){
        answer++;
        for(int divider = 2; divider < number; divider++){
            if(number%divider == 0){
                //소수가 아님
                answer--;
                break;
            }
        }
    }

    return answer;
}

int main(){

    cout<< solution2(1000000) <<endl;

}

// 소수 찾기
// 문제 설명
// 1부터 입력받은 숫자 n 사이에 있는 소수의 개수를 반환하는 함수, solution을 만들어 보세요.

// 소수는 1과 자기 자신으로만 나누어지는 수를 의미합니다.
// (1은 소수가 아닙니다.)

// 제한 조건
// n은 2이상 1000000이하의 자연수입니다.
// 입출력 예
// n	result
// 10	4
// 5	3
// 입출력 예 설명
// 입출력 예 #1
// 1부터 10 사이의 소수는 [2,3,5,7] 4개가 존재하므로 4를 반환

// 입출력 예 #2
// 1부터 5 사이의 소수는 [2,3,5] 3개가 존재하므로 3를 반환