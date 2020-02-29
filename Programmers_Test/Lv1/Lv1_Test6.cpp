#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> Day = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"}; //시작 요일에 맞게 배열 선언
    vector<int> Month = {30, 31};   //16년도 2월은 29일까지
    int SumOfDay = 0;

    for(int num = 1; num < a; num++){
        if(num == 8){
            swap(Month[0], Month[1]);
        }
        SumOfDay += Month[num%2];
    }
    SumOfDay += b;
    (a >= 3? SumOfDay -= 1 : false);    //윤년이고 2월 29일까지이므로, 1일을 제외시켜준다

    answer = Day[(SumOfDay-1) % 7];

    return answer;
}

int main(){

    for(int month = 1; month <= 12; month++){
        if(month%2){
            for(int Day = 1; Day <= 31; Day++){
                cout << month << "/" << Day << " : "<<solution(month, Day) << endl;
            }
        }else{
            if(month==2){
                for(int Day = 1; Day <= 29; Day++){
                    cout << month << "/" << Day << " : "<<solution(month, Day) << endl;
                }
            }else{
                for(int Day = 1; Day <= 30; Day++){
                    cout << month << "/" << Day << " : "<<solution(month, Day) << endl;
                }
            }
            
        }
        
    }
}
// 2016년
// 문제 설명
// 2016년 1월 1일은 금요일입니다. 2016년 a월 b일은 무슨 요일일까요? 
// 두 수 a ,b를 입력받아 2016년 a월 b일이 무슨 요일인지 리턴하는 함수, solution을 완성하세요. 
// 요일의 이름은 일요일부터 토요일까지 각각 SUN,MON,TUE,WED,THU,FRI,SAT 입니다. 
// 예를 들어 a=5, b=24라면 5월 24일은 화요일이므로 문자열 TUE를 반환하세요.

// 제한 조건
// 2016년은 윤년입니다.
// 2016년 a월 b일은 실제로 있는 날입니다. (13월 26일이나 2월 45일같은 날짜는 주어지지 않습니다)
// 입출력 예
// a	b	result
// 5	24	TUE