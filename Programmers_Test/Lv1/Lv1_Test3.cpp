#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int checkanswer(vector<int> answers ,vector<int> tester){
    int result = 0;
    int size = answers.size();
    int testersize = tester.size();

    for(int numAnswer = 0; numAnswer < size; numAnswer++){
        if(answers[numAnswer] == tester[numAnswer%testersize]){
            result++;
        }
    }
    
    return result;
}

int maximum(int first, int second, int third){

    int MaxData = 0;

    MaxData = (first < second ? second: first);
    MaxData = MaxData < third ? third : MaxData;
    return MaxData ;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> supo1 = {1, 2, 3, 4, 5};
    vector<int> supo2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> supo3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> gradeTemp;  //gradeTemp ={}; 이런 식의 초기화는 할 수 없다
    int MaxVal = 0;
    gradeTemp.assign(3,0);  //gradeTemp 초기화 및 사이즈 지정

    gradeTemp[0] = checkanswer(answers, supo1);
    gradeTemp[1] = checkanswer(answers, supo2);
    gradeTemp[2] = checkanswer(answers, supo3);
    
    MaxVal = maximum(gradeTemp[0], gradeTemp[1], gradeTemp[2]);

    if(MaxVal == 0){    
        answer = {};    //그 누구도 한 문제도 못 맞췄다면?
    }else{
        for(int index = 0; index < gradeTemp.size(); index++){
            if(gradeTemp[index] == MaxVal){
                answer.push_back(index + 1);    //배열의 마지막 인자 뒤에 데이터를 입력
            }
        }
    }
    
    return answer;
}

int main(){
    vector<int> answers = {1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,1};
    vector<int> result;
    result = solution(answers);
    cout << "result : "<< result[0] << ": "<< result[1] << ": "<< result[2] << endl;

    return 0;

}

// 문제 설명
// 수포자는 수학을 포기한 사람의 준말입니다. 수포자 삼인방은 모의고사에 수학 문제를 전부 찍으려 합니다. 
//수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.

// 1번 수포자가 찍는 방식: 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, ...
// 2번 수포자가 찍는 방식: 2, 1, 2, 3, 2, 4, 2, 5, 2, 1, 2, 3, 2, 4, 2, 5, ...
// 3번 수포자가 찍는 방식: 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, 3, 3, 1, 1, 2, 2, 4, 4, 5, 5, ...

// 1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때, 
//가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.

// 제한 조건
// 시험은 최대 10,000 문제로 구성되어있습니다.
// 문제의 정답은 1, 2, 3, 4, 5중 하나입니다.
// 가장 높은 점수를 받은 사람이 여럿일 경우, return하는 값을 오름차순 정렬해주세요.
// 입출력 예
// answers	return
// [1,2,3,4,5]	[1]
// [1,3,2,4,2]	[1,2,3]
// 입출력 예 설명
// 입출력 예 #1

// 수포자 1은 모든 문제를 맞혔습니다.
// 수포자 2는 모든 문제를 틀렸습니다.
// 수포자 3은 모든 문제를 틀렸습니다.
// 따라서 가장 문제를 많이 맞힌 사람은 수포자 1입니다.

// 입출력 예 #2

// 모든 사람이 2문제씩을 맞췄습니다.