
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





// using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.

// -using 지시자 예: { using namespace std; cout << "Enter your id: "; }

// -네임스페이스 지정자 예: std::cout << "Enter your id: ";

#include "alarm.h"
#include <array>
namespace leedayeon2566038
{
    void printAlarmArray(const alarm a[], const int n){
        for(int i=0;i<n;++i)
        std::cout<<a[i];
    }
    void parVal(timeOfDay v){v+=1;}
    void parRef(timeOfDay& r){r+=1;}
    void parPtr(timeOfDay* p){*p+=1;}

    timeOfDay retVal(timeOfDay v){v+=1; return v;}
    timeOfDay& retRef(timeOfDay& r){r+=1; return r;}
    timeOfDay* retPtr(timeOfDay* p){*p+=1; return p;}
}
int main(){
    


    using namespace leedayeon2566038;
    timeOfDay val{11,30}; std::cout<< val<<" ";
    parVal(val); std::cout<<val<<std::endl;
    timeOfDay& ref{val}; std::cout<< ref<<" ";
    parRef(ref); std::cout<<ref<<std::endl;
    timeOfDay* ptr{&val}; std::cout<<*ptr<<" ";
    parPtr(ptr); std::cout<< *ptr<< "\n";
    
    val=timeOfDay{15,30}; 
    std::cout<< val<< " "<<retVal(val)<<"\n";
    std::cout<<ref<<" "<<retRef(ref)<<"\n";
    std::cout<<*ptr<<" "<<*retPtr(ptr)<<"\n";
    timeOfDay* tPtr{new timeOfDay };
    tPtr->setHour(18);
    tPtr->setMinute(30);
    std::cout<<*tPtr<<std::endl;
    delete tPtr;

    const int n{4};
    alarm a[n];//a가 알람이라는 배열
    a[0]=alarm{"morning", {6,0},1};

    a[1].setName("class");
    a[1].setWakeTime({9,0});
    a[1].setActive(1);

    a[2].input();
    std::cin>> a[3];
    printAlarmArray(a,n);

    std::array<alarm,n>b;
    for(int i=0;i<b.size();++i)
        b.at(i)=a[i];
    for(const auto&bi:b)
    bi.print();


}