
// // 4. main.cpp: 테스트
// // 1의 본인이름학번의 네임스페이스 안에 비멤버함수 compareTimeOfDay 정의: 매개변수는 const timeOfDay 참조형 2개, 매개변수 멤버들이 모두 같은지를 비교
// // -main
// // alarm 클래스형 객체1 선언, print함수 호출
// // alarm 클래스형 객체2 초기값을 넣어서 선언, print함수 호출
// // 비멤버함수 compareTimeOfDay를 호출하여 그 리턴값이 true면 same, false면 different를 콘솔창으로 출력

// #include "alarm.h"
// namespace leedayeon2566038{
//     bool compareTimeOfDay(const timeOfDay& t1,const timeOfDay& t2){
//         return t1.getHour()==t2.getHour()&&t1.getMinute()==t2.getMinute();
//     }
// }

// int main()
// {
//     using namespace leedayeon2566038;
//     alarm a1;
//     a1.print();
//     alarm a2{{11,44},1};
//     a2.print();
//     if(compareTimeOfDay(a1.getWakeTime(),a2.getWakeTime()))std::cout<<"same\n";
//     else std::cout<<"different\n";
// }


#include "timeOfDay.h"

int main(){
    using namespace leedayeon2566038;
    timeOfDay t1,t2;
    std::cin >>t1>>t2;
    std::cout<<t1<<" "<<t2<<'\n';
    std::cout<<++t2<<'\n';
    std::cout<<t2++<<'\n';
    std::cout<<t2<<'\n';
    if(t1==t2) std::cout<<"same\n";
    else std::cout<<"different\n";

    std::cout<<t1+t2<<std::endl;
    return 0;

    
}