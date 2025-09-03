// HelloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 소스파일 (확장자 .c or .cpp같은 것)
// 주석(comment)  : 컴파일러가 무시하는 문장=프로그램에서 실행이 되지 않는 부분
// shift 화살표 : 블럭잡기
/*
alt+shift+화살표 : 세로 블럭잡기
* ctrl+d : 한 줄 복제하기
ctrl+space : 자동완성기능(인텔리센스)창 띄우기
주석
주석
주석
shift+del : 한 줄 삭제하기
shift + 화살표 : 블럭 잡기
이거 맨끝에 꺼 그 사이 주석으로 만들기 ㅇㅇ
alt+화살표 위 아래 : 줄 바꾸기 
ctrl+화살표 단어 단위
ctrl+k+c 주석 설정
ctrl+k+u 주석해제
*/


// 레전드
/*컴파일러: 번역기(사람이 쓴 코드 기계가 알아듣게 번역
execute file = exe
컴파일러 마다 번역 다름(당연..?)
-목적코드 생성
- 링커가 연결해서 실행파일 생성

프로그램 디버그 : <f5> 키 또는 [디버그] > [디버깅 시작] 메뉴
ctrl(alt)+B+B : 프로젝트(솔루션) 빌드
*/

/*
빌드 : 실행파일 생성하기
리빌드 : 전체 다시 빌드(제대로 했는데 실행 X 시 CHECK) 정리+ 빌드 ALT+B+R 프로젝트 리빌드
남한테 .PDB 파일 X (디버깅 가능 정보 ) 프로그램 구조 포함
*/

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.



/*
변수(Variable)
- 변하는 숫자
- 컴퓨터에 값을 기억 시키기 위해 만들고 사용 
*/

/*
연산자(operator)
꼐산을 하기 위한 기호
- 대입 연산자
= 일상적인 연산 ? 
= 오른쪽에 있는 값을 왼쪽에 넣어라 
a=b; //b에 있는 값을 a에 넣어라
오른쪽 변수 자체는 변하지 않음

- 산술 연산자
사칙연산
+더하기-빼기*곱하기/나누기 %까지 모듈러연산=나머지 연산
a=5%3;
a에는 2가 들어간다.(5를 3으로 나누었을 때 나머지가 2)
-복합 대입연산자
줄여쓰기 용도
a+=b; //a=a+b;
a++=// a에다가 1을 더해라
a--= // a에다가 1을 빼라
*/


#define _CRT_SECURE_NO_WARNINGS
#include <iostream> //INPUT, OUTPUT STREAM
#include <stdio.h>//C 언어에서 쓰는 전통적인 방식.?
#include <cstdio> //C++표준 그리고 함수들이 std 네임스페이스 안에 들어갑니다. ? 
//#include "header.h" // header불러오는 것 (깔끔하게 쓰기 위해서)

//#define_CRT_SECURE_NO_WARNINGS

int main() //엔트리 포인트 (코드가 시작되는 곳) // {열은거 있으면 닫아야함}
{


    // printf("hello\tworld!\n");//c언어의 출력방법
    // printf("HJ\t\"\t");//c언어의 출력방법 ""안에 \n이 있으면 줄을 바꾸라는 의미 (이스케이프 스퀀스)
    // printf("97년생입니다.\n");

    // //이스케이프 스퀀스
    // // \n : 줄바꾸기
    // // \t : 탭 넣기
    // // \" : 쌍따옴표 한개
    // // \\ : \찍기
    // // \r : 캐리지 리턴(윈도우에서는 중요하지 않음 , 리눅스에서는 중요함) - 제일 앞으로 보내기


    // printf("안녕하세요\n");
    // printf("식사하셨나요\n");
    // printf("이거 안쓰면 어떻게 되는 거\n");
    // printf("나이가 몇 살이신가요?\n");


    // int number = 0;  //변수 //number라는 이름을 가진 int(인티저)변수를 선언하고 거기에 0을 대입한다(full-explain)

    // //number = 5.3; number 에는 5가 저장된다
    // //number = 5.3
    //     //number = 5 / 2; //number에는 2가 저장된다

    // //int bumber; // 변수선언 int한 순간에 넘버라는 자리 생김
    // // int : 정수형 (소수점이 없는 숫자, 5, 10, -2, 0, etc..)
    // // 
    // // 
    // //number = 0; // 변수에 값을 대입 넘버통해 값을 쓰거나 읽음 (선언후에 사용 가능 반드시 선언 먼저 )


    // scanf("%d", &number); //녹색밑줄 잘못 쓴 것은 아닌데 문제가 될 수 있는 것 //위험한 함수 메모리 침범 가능 (visual studio 에서 권장 x)


    // printf("입력한 숫자는(C) : %d\n", number); //저장된 숫자가 대신 들어감 숫자를 하나 입력 받기(C)

    // printf(" %d\n이군요", number);

    // std::cin >> number;
    // printf("입력한 숫자는(C++) : %d\n", number); //숫자를 하나 입력 받기 (C++)

    // printf("%d이구나", number);
    // //프로그램을 실행했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력



    // 

    // int number1 = 0; //변수는 선언 즉시 값을 넣어주세요
    // int number2 = 0;

    // printf("숫자 1을 입력하시오 : ");
    // std::cin >> number1;

    // printf("숫자 2을 입력하시오 : ");
    // std::cin >> number2;

    // printf("두 숫자의 합은 %d입니다.", number1 + number2);

    // int number3 = number1 + number2;
    // printf("두 숫자의 합은 %d 입니다.\n", number3);



    // /*printf 문 이용해서
    // *
    // ***
    //     *****
    //     찍기*/


    //     //특수문자 이용 미로 모양 출력
    // printf("    *\n   ***\n  *****\n");
    // printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\nㅁㅁㅁㅁㅁㅁㅁ\nㅁㅁㅁㅁ\n");
    // int h = 7;
    // int k = 22;
    // printf("h+k = %d\n", h + k);

    // //파스칼 케이스를 써야한다네


    //// 두 수를 입력 받아 스왑하기
    // int w, s, temp; //w랑 s랑 temp(임시)를 지정 한 거 ?
    // printf("w를 입력해주세요");
    // printf("w 입력: "); //w에 대한 숫자를 입력하라는 거 ?
    // scanf("%d", &w);//이건 w 값을 찾는 건가 ?

    // printf("s를 입력해주세요");
    // printf("s 입력: "); //이제 이게 s에 대한 숫자를 입력하라는 거 ?
    // scanf("%d", &s); //이건 s값을 찾는건가 ? 

    // printf("두 숫자를 바꾸겠습니다");
    // temp = w;
    // w = s;
    // s = temp;


    // printf("w=%d, s=%d\n", w, s); //이건 w랑 s 값을 나열하는 거 ?




    // //사각형의 가로, 세로를 입력 받아 넓이를 출력하기
    // //현재 사용 알파멧 hk ws
    // int n, m;
    // printf("n을 입력해주세요");//s값을 입력하고
    // printf("n입력:");
    // scanf("%d", &n); //이걸 정수 값으로 정의하는 건가 ?
    // printf("입력한숫자 n = %d\n", n);

    // printf("m을 입력해주세요");
    // printf("m 입력:");
    // scanf("%d", &m);
    // printf("입력한 숫자 M = %d\n", m);

    // printf("n은 가로 m은 새로입니다");
    // printf("넓이를 계산해보겠습니다.");
    // printf("%d*%d=%d\n", n, m, n * m);



    // // 두 수를 입력 받아 나머지를 출력하기 

    // int z, x;

    // printf("몫z을 입력해주세요 : ");
    // scanf("%d", &z);



    // printf("나누는 수 x를 입력해주세요 :");
    // scanf("%d", &x);



    // int quotient=z / x;
    // int   remainder=z - (quotient * x);


    //

    // printf("몫= %d, 나머지=%d\n", quotient, remainder );




    // //시간 계산기
    // //-초를 입력 받아 시분초 출력하기



    // int hour, minute, second;
    // printf("hour를 입력해주세요(0~23) : ");
    // scanf("%d", &hour);
    //while (hour < 0 || hour > 23)
    // {
    //     printf("잘못된 hour 값입니다!\n");
    //     printf("다시 입력: ");
    //     scanf("%d", &hour);
    // }
    // printf("minute을 입력해주세요(0~59) : ");
    // scanf("%d", &minute);

    // while (minute < 0 || minute > 59)
    // {
    //     printf("잘못된 minute 값입니다!\n");
    //     printf("다시 입력: ");
    //     scanf("%d", &minute);
    // }
    // printf("second를 입력해주세요(0~59) : ");
    // scanf("%d", &second);

    // while (second < 0 || second > 59)
    // {
    //     printf("잘못된 second 값입니다!\n");
    //     printf("다시 입력: ");
    //     scanf("%d", &second);
    // }

    //

    // printf("%d시%d분%d초\n", hour, minute, second);



    //동전 개수 계산하기 = 금액을 받아 동전 각각 몇 개 필요한지 계산 , 큰 동전 최대한 많이


 //   float number4 = 10.0f; //위에는 플롯이 맞음
 //float number5 = 15.0; //뒤에 f를 안붙이면 더블임 15라는 double type 의 값을 float인 number2에 넣기 //사이즈에 안맞게 들어가면 뭐 ....뒤에 거가 날라간다고 생각하면 될듯?
 // std::cin >> number4 >> number5;
 // printf("number4 : %f\nnumber5 : %.2f\n", number4, number5);
 //
 // 
 // 
 // 
 // 
 // 
 // 
 // 
 // 
  //원의 반지름을 입력 받고 넓이 구하기

 //#define pi 3.141592f //판단 따로 들어가야돼서 별로임 (매크로 쓰지마라/언리얼은 꽤 많이 쓰긴함)

 //const folat pi = 3.141592f; //  상수 선언 정의
 // float radius = 0.0f;
 // printf("원의 반지름을 입력하세요: \n");
 // std::cin >> radius;
 // printf("원의 넓이는 %f입니다.", radius* radius* 3.141592f);


  /*int square = 0;
  printf("정사각형의 한변의 길이를 입력하세요: ");
  std::cin >> square;
  printf("정사각형의 넓이는 %d입니다.", square*square);*/



  /*
  상수(constant)
  -변하지 않는 수
  -코드의 안정성과 가독성을 높여준다 . (매직넘버 회피에 좋다), 매크로와는 달리 타입 체크가 가능하다)
  const float Pi = 3.141592f; 상수를 선언하고 정의  실수 X
  다른 거 넣으면 고쳐지지 않음
  /







  /*
  * 비교연산자
 - 비교를 하는 연산자. 참이냐 거짓이냐가 결과로 나온다.
 - >, <, >=, ==

int a =10;
int b=20;
bool result =  a>b; // 결과는 거짓 result = false;

 int a=100;
 int b=2;
 bool result = a>b; // 결과는 참 result=ture;

 int a= 50;
 int  b=50;
 bool result = a ==b; // 결과는 참이니까 result=true //=대입연산자 ==비교연산자 좌우비교
 */


 //float a = 123.0f;
 //float b = 0.0f;
 //std::cin >> b;
 //b = b * 123.0f;
 //bool result = a == b; //f9브레이크 포인트 설정/해제

 //float 타입을 ==로 비교할 때 반드시 아래와 같이 진행해야함
 //float epsilon = 0.001f;
 //a < (b + epsiolon);
 //a > (b - epsilon);

 //if : 소괄호 안이 true면 중괄호 안의 코드를 실행하라
 ////특정 조건 만족했을때만 코드 실행하고 싶을 때 사용
 //int a = 10;
 ////int b = 0;
 ////printf("a는 10\nb를 입력하세요 :");
 //std::cin >> b;
 //
 //    if (a>b) 
 //    {
 //        printf("if가 성공했다.\n");
 //        printf("b가 %d라서 a가 더 크다\n ", b);
 //    }
 //
 //    if (a <= b);
 //    {
 //        printf("b가 %d라서 a가 더 작거나 같다\n", b
 // 
 //    }
 //
 //
 ////if-else
 //    if(a>b)
 //    {
 //      printf("a가 b보다 크다.\n"); //조건 참 이것 실행
 //        }
 //    else
 //    {
 //        printf("a가 b보다 작거나 같다.\n"); //조건 거짓 이 거 실행
 //    }
 //
 ////    if (a < b)
 //    {
 //
 //
 //    }
 //    else if (a < b *2)
 //
 //
 //        if (b<60)
 //        {
 ////d
 //        }
 //        else if (b < 70)
 //        {
 //            //c
 //        }
 //        else if (b < 80)
 //        {
 //            //b
 //        }
 //        else if (b < 90)
 //        {
 //            //a
 //        }
 //        else if (b < 100)
 //        {
 //            //s
 //        }


 //
 //int a = 0;
 //std::cin >> a;
 //switch (a)
 //{
 //case 1:
 //    printf("1이다.\n");
 //    break; //원하는 case만 실행하고 나오기 위해 쓰는 거
 //case 3:
 //    printf("3이다.\n");
 //    break;
 //case 5:
 //    printf("5이다.\n");
 //    break;
 //default:
 //    printf("1,3,5가 아니다.\n");
 //    break; //왜냐하면 다른 케이스가 실행된다.
 //}
 //
 //
 //int a : 10;
 //int b : 20;
 //int c : 0;
 //if (a > b)
 //{
 //    c = a * 2 + b;
 //}
 //else
 //{
 //    c = a + b * 2;
 //}
 //c = (a > b) ? (a * 2 + b) : (a + b * 2);//삼항연산자 ?a>b 참이면 앞에 --거짓이면--뒤에 출력 되는 거


 //int a = 10;
 //if (a > 5 && 10 > a) //왼쪽 트루 오른쪽 false로 실패 뭐 알아서 확인해봐
 //{
 //    //성공
 //
 //}
 //else
 //{
 //    //실패
 //}
 //

 ////숫자를 입력받아 양수인지 음수인지 0인지 출력하기
 //숫자를 입력받아 홀수인지 짝수인지 출력하기
 //두 수를 입력 받아 더 큰 수를 출력하기.같을 경우는 같다고 출력.
 //나이와 키를 입력 받아, 6세 이상, 120cm 이상일 때 롤러코스터 탑승 가능, 그 외에는 불가능으로 출력
 //점수를 입력 받아 90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 그 이하는 F라고 출력하기
 //세 과목의 점수를 입력받아, 세 과목 평균 60점 이상이면 "합격", 아니면 "불합격"을 출력하는 프로그램을 작성하세요.
 //한과목이라도 40점 미만이면 불합격 출력하기


 ////숫자를 입력받아 양수인지 음수인지 0인지 출력하기
    float a = 0.0f;

    printf("숫자를 입력하세요 : ");
    scanf("%f", &a);

    if (a > 0)
    {
        printf("a는 양수입니다.\n");

    }
    else if (a == 0)
    {
        printf("a는 0입니다.\n");

    }
    else if (a < 0)
    {
        printf("a는 음수입니다.\n");
    }






    //숫자를 입력받아 홀수인지 짝수인지 출력하기 (양수이기 떄문에 int 사용하면 될듯)



    int b = 0;
    printf("숫자를 입력하세요: ");
    scanf("%d", &b);

    if (b % 2 == 0)
    {
        printf("b= 짝수입니다.\n");
    }

    else
    {
        printf("b=홀수입니다.\n");
    }


    //두 수를 입력 받아 더 큰 수를 출력하기.같을 경우는 같다고 출력.


    float c = 0.0f;
    float d = 0.0f;
    printf("숫자를 입력해주세요\n");
    scanf("%f", &c);

    printf("숫자를 입력해주세요\n");
    scanf("%f", &d);

    if (c > d)
    {
        printf("더 큰 수는 %.2f입니다.\n", c);
    }

    else if (c < d)
    {
        printf(" 더 큰 수는 %.2f입니다.\n", d);
    }

    else
    {
        {
            printf("두 수는 같습니다.\n");
        }
    }

    //나이와 키를 입력 받아, 6세 이상, 120cm 이상일 때 롤러코스터 탑승 가능, 그 외에는 불가능으로 출력


    int e = 0;
    float f = 0.0f;

    printf("나이를 입력해주세요\n");
    scanf("%d", &e);

    if (e >= 6)
    {
        printf("나이가 통과되었습니다.\n");
    }
    else
    {
        printf("연령제한으로 인해 탑승할 수 없습니다.\n");
    }


    printf("키를 입력해주세요\n");
    scanf("%f", &f); // Correct
    if (f >= 120)
        printf("키가 통과 되었습니다.");
    else
    {
        printf("키로 인해 탑승할 수 없습니다.");
    }





    if (e >= 6 && f >= 120)
    {
        printf("롤러코스터에 탑승하실 수 있습니다.\n");
    }
    else
    {
        printf("탑승하실 수 없습니다.\n");
    }


    //점수를 입력 받아 90점 이상은 A, 80점 이상은 B, 70점 이상은 C, 60점 이상은 D, 그 이하는 F라고 출력하기


    int score;
    printf("점수 입력:");
    std::cin >> score;

    
    if (score > 100)
    {
        printf("오류입니다.");
    }
    
    else if (score >= 90)
    {
        printf("A입니다.");
    }
     

    else if (score >= 80)
    {
        printf("b입니다.");
    }
    else if (score >= 70)
    {
        printf("c입니다.");
    }
    else if (score >= 60)
    {
        printf("d입니다.");
    }
    else if (score < 60)

    { 
        printf("f입니다."); 
    }


    //세 과목의 점수를 입력받아, 세 과목 평균 60점 이상이면 "합격", 아니면 "불합격"을 출력하는 프로그램을 작성하세요.
    //단  한 과목이라도 40점 미만이면 불합격 출력하기

    int scoreA, scoreB, scoreC;
    std::cin >> scoreA;
    std::cin >> scoreB;
    std::cin >> scoreC;

    int average = (scoreA + scoreB + scoreC) / 3;


    if (scoreA >= 40 && scoreB >= 40&& scoreC >= 40&& average >= 60)
        {
            printf("합격");
        }
        else {
            printf("불합격");
        }





return 0; }



  /*제어문
  -프로그램의 흐름을 제어하는 문 (statement)
  -조건문 : 조건에 따라 프로그램의 흐름을 변경하는 문
  -if, else if, else
  -switch
  -삼항연산자
  -반복문 : 일정 조건에 따라 코드를 반복하는 문

  논리연산자********
  -bool 값을 양변에 받아 bool로 된 결과를 낸다.
  && (And) &&의 양쪽이 둘 다 true면 true. 그 외는 false
  || (Or) ||의 양쪽에 하나라도 ture가 있으면 true , 아니면 false
  ! (Not) ! 뒤에 bool이 ture면 false , false면 true. - 참거짓을 반대로 바꿈






















  //게임 입출력 중요
  //하나 더 만들어 보자
  //아니 깃 허브랑 연동 왜 안돼
  //실습실습실슬시브


  //int main()
  //printf("뭐라적기");
  //return 0; 끝내기 ㅇㅇ
  //한 번 해보죠
  //변화가 저장되어 있음 파일전체는 아님


  //std: printf("hello my world!|n"); //C언어의 출력방법
      //std::cout << "Hello My World!\n"; //이것은 한 줄 출력하기 //C++출력 방법 //빨간 줄은 문법 오류 //언리얼에서 사용X printf 사용
      return 0;
  }

  // HelloWorld.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
  //

  // 소스파일 (확장자 .c or .cpp같은 것)
  // 주석(comment)  : 컴파일러가 무시하는 문장=프로그램에서 실행이 되지 않는 부분
  // shift 화살표 : 블럭잡기
  /*
  alt+shift+화살표 : 세로 블럭잡기
  * ctrl+d : 한 줄 복제하기
  ctrl+space : 자동완성기능(인텔리센스)창 띄우기
  주석
  주석
  주석
  shift+del : 한 줄 삭제하기
  shift + 화살표 : 블럭 잡기
  이거 맨끝에 꺼 그 사이 주석으로 만들기 ㅇㅇ
  alt+화살표 위 아래 : 줄 바꾸기
  ctrl+화살표 단어 단위
  ctrl+k+c 주석 설정
  ctrl+k+u 주석해제
  */


  // 레전드
  /*컴파일러: 번역기(사람이 쓴 코드 기계가 알아듣게 번역
  execute file = exe
  컴파일러 마다 번역 다름(당연..?)
  -목적코드 생성
  - 링커가 연결해서 실행파일 생성

  프로그램 디버그 : <f5> 키 또는 [디버그] > [디버깅 시작] 메뉴
  ctrl(alt)+B+B : 프로젝트(솔루션) 빌드
  */

  /*
  빌드 : 실행파일 생성하기
  리빌드 : 전체 다시 빌드(제대로 했는데 실행 X 시 CHECK) 정리+ 빌드 ALT+B+R 프로젝트 리빌드
  남한테 .PDB 파일 X (디버깅 가능 정보 ) 프로그램 구조 포함
  */

  // 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
  // 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

  // 시작을 위한 팁: 
  //   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
  //   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
  //   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
  //   4. [오류 목록] 창을 사용하여 오류를 봅니다.
  //   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
  //   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.



  /*
  변수(Variable)
  - 변하는 숫자
  - 컴퓨터에 값을 기억 시키기 위해 만들고 사용
  */

  /*
  연산자(operator)
  꼐산을 하기 위한 기호
  - 대입 연산자
  = 일상적인 연산 ?
  = 오른쪽에 있는 값을 왼쪽에 넣어라
  a=b; //b에 있는 값을 a에 넣어라
  오른쪽 변수 자체는 변하지 않음

  - 산술 연산자
  사칙연산
  +더하기-빼기*곱하기/나누기 %까지 모듈러연산=나머지 연산
  a=5%3;
  a에는 2가 들어간다.(5를 3으로 나누었을 때 나머지가 2)
  -복합 대입연산자
  줄여쓰기 용도
  a+=b; //a=a+b;
  a++=// a에다가 1을 더해라
  a--= // a에다가 1을 빼라
  */


  //#define _CRT_SECURE_NO_WARNINGS
  //#include <iostream> //INPUT, OUTPUT STREAM
  //#include <stdio.h>//C 언어에서 쓰는 전통적인 방식.?
  //#include <cstdio> //C++표준 그리고 함수들이 std 네임스페이스 안에 들어갑니다. ? 
  ////#include "header.h" // header불러오는 것 (깔끔하게 쓰기 위해서)
  //
  ////#define_CRT_SECURE_NO_WARNINGS
  //
  //int main() //엔트리 포인트 (코드가 시작되는 곳) // {열은거 있으면 닫아야함}
  //{
  //
  //
  //
  //
  //
  //    //여기까지 하는중입니다.업데이트 체크 
  //
  //
  //    float number4 = 10.0f; //위에는 플롯이 맞음
  //    float number5 = 15.0; //뒤에 f를 안붙이면 더블임 15라는 double type 의 값을 float인 number2에 넣기 //사이즈에 안맞게 들어가면 뭐 ....뒤에 거가 날라간다고 생각하면 될듯?
  //    std::cin >> number4 >> number5;
  //    printf("number4 : %f\nnumber5 : %.2f", number4, number5);
  //
  //    // 원의 반지름을 입력 받고 넓이 구하기
  //
  //
  //
  ////std: printf("hello my world!|n"); //C언어의 출력방법
  //    //std::cout << "Hello My World!\n"; //이것은 한 줄 출력하기 //C++출력 방법 //빨간 줄은 문법 오류 //언리얼에서 사용X printf 사용
  //    return 0;
  //}
  //
  ////게임 입출력 중요
  ////하나 더 만들어 보자
  ////아니 깃 허브랑 연동 왜 안돼
  ////실습실습실슬시브
  //
  //
  ////int main()
  ////printf("뭐라적기");
  ////return 0; 끝내기 ㅇㅇ
  ////한 번 해보죠
  ////변화가 저장되어 있음 파일전체는 아님
  //
  //
  //
  //
  ///*
  //이진수(binary)
  //-컴퓨터는 0과 1만 알 수 있기 때문에 기본적으로 이진수를 사용
  //
  //int number = 10; // 사람이 알아보기 위해 10진수로 값을 대입
  //                 // 실제 메모리에는 0000   0000    0000    0000    0000    0000    0000    1010
  // ex) 13= (2^3)8+(2^2)4+0+(2^0)1 = 1101
  //
  //
  //
  //*/
  //
  ///*
  //데이터 타입
  //int : 정수형. 일반적으로 32bit. 범위는 대략 -21억~+21억
  //float : 실수형. 32bit(태생적으로 오차가 있는 data type) 대략 총7자리부터 오차 발생
  //3.14159까지 안전 뒤 부터 위험 같냐 다르다하고 비교 X 범위 설정해줘야함 ㄷ
  //double : 실수형. 64bit
  //bool : 불리언. true/false만 저장
  //char : 캐릭터. 글자 하나를 저장하는 데이터 타입.
  //
  ////사이즈 반드시 기억
  //
  //char alpha = 'a'; 이런식으로 사용
  //char apha2 = 64;
  //std :: string : 스트링. 문자열을 쉽게 다룰 수 있는 자료형 (초보자용이라 생각하면 편함
  //문자열 : 글자 여러 개가 연결된 것
  //std::string str = "hello world!";
  //char* str;
  //char str[32]; (포인터, 배열 배우고 들어~)
  //*/

