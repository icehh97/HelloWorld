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


    printf("hello\tworld!\n");//c언어의 출력방법
    printf("HJ\t\"\t");//c언어의 출력방법 ""안에 \n이 있으면 줄을 바꾸라는 의미 (이스케이프 스퀀스)
    printf("97년생입니다.\n");

    //이스케이프 스퀀스
    // \n : 줄바꾸기
    // \t : 탭 넣기
    // \" : 쌍따옴표 한개
    // \\ : \찍기
    // \r : 캐리지 리턴(윈도우에서는 중요하지 않음 , 리눅스에서는 중요함) - 제일 앞으로 보내기


    printf("안녕하세요\n");
    printf("식사하셨나요\n");
    printf("이거 안쓰면 어떻게 되는 거\n");
    printf("나이가 몇 살이신가요?\n");


    int number = 0;  //변수 //number라는 이름을 가진 int(인티저)변수를 선언하고 거기에 0을 대입한다(full-explain)

    //number = 5.3; number 에는 5가 저장된다
    //number = 5.3
        //number = 5 / 2; //number에는 2가 저장된다

    //int bumber; // 변수선언 int한 순간에 넘버라는 자리 생김
    // int : 정수형 (소수점이 없는 숫자, 5, 10, -2, 0, etc..)
    // 
    // 
    //number = 0; // 변수에 값을 대입 넘버통해 값을 쓰거나 읽음 (선언후에 사용 가능 반드시 선언 먼저 )


    scanf("%d", &number); //녹색밑줄 잘못 쓴 것은 아닌데 문제가 될 수 있는 것 //위험한 함수 메모리 침범 가능 (visual studio 에서 권장 x)


    printf("입력한 숫자는(C) : %d\n", number); //저장된 숫자가 대신 들어감 숫자를 하나 입력 받기(C)

    printf(" %d\n이군요", number);

    std::cin >> number;
    printf("입력한 숫자는(C++) : %d\n", number); //숫자를 하나 입력 받기 (C++)

    printf("%d이구나", number);
    //프로그램을 실행했을 때 나이를 물어보고 입력받은 숫자를 그대로 출력



    

    int number1 = 0; //변수는 선언 즉시 값을 넣어주세요
    int number2 = 0;

    printf("숫자 1을 입력하시오 : ");
    std::cin >> number1;

    printf("숫자 2을 입력하시오 : ");
    std::cin >> number2;

    printf("두 숫자의 합은 %d입니다.", number1 + number2);

    int number3 = number1 + number2;
    printf("두 숫자의 합은 %d 입니다.\n", number3);



    /*printf 문 이용해서
    *
    ***
        *****
        찍기*/


        //특수문자 이용 미로 모양 출력
    printf("    *\n   ***\n  *****\n");
    printf("ㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁㅁ\nㅁㅁㅁㅁㅁㅁㅁ\nㅁㅁㅁㅁ\n");
    int h = 7;
    int k = 22;
    printf("h+k = %d\n", h + k);

    //파스칼 케이스를 써야한다네


   // 두 수를 입력 받아 스왑하기
    int w, s, temp; //w랑 s랑 temp(임시)를 지정 한 거 ?
    printf("w를 입력해주세요");
    printf("w 입력: "); //w에 대한 숫자를 입력하라는 거 ?
    scanf("%d", &w);//이건 w 값을 찾는 건가 ?

    printf("s를 입력해주세요");
    printf("s 입력: "); //이제 이게 s에 대한 숫자를 입력하라는 거 ?
    scanf("%d", &s); //이건 s값을 찾는건가 ? 

    printf("두 숫자를 바꾸겠습니다");
    temp = w;
    w = s;
    s = temp;


    printf("w=%d, s=%d\n", w, s); //이건 w랑 s 값을 나열하는 거 ?




    //사각형의 가로, 세로를 입력 받아 넓이를 출력하기
    //현재 사용 알파멧 hk ws
    int n, m;
    printf("n을 입력해주세요");//s값을 입력하고
    printf("n입력:");
    scanf("%d", &n); //이걸 정수 값으로 정의하는 건가 ?
    printf("입력한숫자 n = %d\n", n);

    printf("m을 입력해주세요");
    printf("m 입력:");
    scanf("%d", &m);
    printf("입력한 숫자 M = %d\n", m);

    printf("n은 가로 m은 새로입니다");
    printf("넓이를 계산해보겠습니다.");
    printf("%d*%d=%d\n", n, m, n * m);




    // 두 수를 입력 받아 나머지를 출력하기 

    int z, x;

    printf("몫z을 입력해주세요 : ");
    scanf("%d", &z);



    printf("나누는 수 x를 입력해주세요 :");
    scanf("%d", &x);



    int quotient=z / x;
    int   remainder=z - (quotient * x);


   

    printf("몫= %d, 나머지=%d\n", quotient, remainder );




    //시간 계산기
    //-초를 입력 받아 시분초 출력하기



    int hour, minute, second;
    printf("hour를 입력해주세요(0~23) : ");
    scanf("%d", &hour);
   while (hour < 0 || hour > 23)
    {
        printf("잘못된 hour 값입니다!\n");
        printf("다시 입력: ");
        scanf("%d", &hour);
    }
    printf("minute을 입력해주세요(0~59) : ");
    scanf("%d", &minute);

    while (minute < 0 || minute > 59)
    {
        printf("잘못된 minute 값입니다!\n");
        printf("다시 입력: ");
        scanf("%d", &minute);
    }
    printf("second를 입력해주세요(0~59) : ");
    scanf("%d", &second);

    while (second < 0 || second > 59)
    {
        printf("잘못된 second 값입니다!\n");
        printf("다시 입력: ");
        scanf("%d", &second);
    }

   

    printf("%d시%d분%d초\n", hour, minute, second);



   //동전 개수 계산하기 = 금액을 받아 동전 각각 몇 개 필요한지 계산 , 큰 동전 최대한 많이
    


//std: printf("hello my world!|n"); //C언어의 출력방법
    //std::cout << "Hello My World!\n"; //이것은 한 줄 출력하기 //C++출력 방법 //빨간 줄은 문법 오류 //언리얼에서 사용X printf 사용
    return 0;
}

//게임 입출력 중요
//하나 더 만들어 보자
//아니 깃 허브랑 연동 왜 안돼
//실습실습실슬시브


//int main()
//printf("뭐라적기");
//return 0; 끝내기 ㅇㅇ
//한 번 해보죠
//변화가 저장되어 있음 파일전체는 아님




