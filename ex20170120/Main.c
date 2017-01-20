#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdarg.h> //va_list
 //
//void main() {
//
//	printf("%d\n", rand()); // 랜덤으로  정수 값을 만듬
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}
//
//void main() {
//	srand(1);// 시드값이 1기준으로 발생했던것 
//
//	printf("%d\n", rand()); // 랜덤으로  정수 값을 만듬
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}

//
//void main() {
//	// srand 는 양수여야해서 언사인드 붙임 
//	srand((unsigned int) time(NULL));//그때그때 달라지게 하려면 시간 값으로 설정하며ㅑㄴ됨
//
//	printf("%d\n", rand()); // 랜덤으로  정수 값을 만듬
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}
//
//void main() {
//	// srand 는 양수여야해서 언사인드 붙임 
//	srand((unsigned int)time(NULL));//그때그때 달라지게 하려면 시간 값으로 설정하며ㅑㄴ됨
//	printf("sec: %d\n", time(NULL)); //초단위
//	printf("%d\n", rand()); // 랜덤으로  정수 값을 만듬
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}
//
///* 0 부터 100까지 랜덤함수 만든*/
//void main() {
//	// srand 는 양수여야해서 언사인드 붙임 
//	srand((unsigned int)time(NULL));//그때그때 달라지게 하려면 시간 값으로 설정하며ㅑㄴ됨
//	printf("%d\n", rand() % 101); // 랜덤으로  정수 값을 만듬
//	printf("%d\n", rand() % 101); // 랜덤으로  정수 값을 만듬
//	printf("%d\n", rand() % 101); // 랜덤으로  정수 값을 만듬
//	printf("%d\n", rand() % 101); // 랜덤으로  정수 값을 만듬
//	printf("%d\n", rand() %101); // 랜덤으로  정수 값을 만듬
//
//}

//
///* 1 부터 10까지 랜덤함수 만든*/
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; ++i) {
//		printf("%d\n", rand() % 10+1); 
//	}
//}

//
///* A부터 Z까지 랜덤함수 만든 - 갯수에다가 평행이동*/
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; ++i) 
//		printf("%c\n", rand() % 26 + 'A'); //65만큼 평행이동 'A' = 65 
//}
//
///* A부터 Z까지랑 a부터 z까지 랜덤함수 만든 - */
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; ++i)
//	{
//		if (rand() % 2)
//			printf("%c\n", rand() % 26 + 'A'); //대문자
//		else
//			printf("%c\n", rand() % 26 + 'a'); //소문자 
//	}
//}


/* A부터 Z까지, a부터 z까지, 0부터 9까지  랜덤함수 만든 - */
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; ++i)
//	{
//		int r = rand() % 3; 
//		if(r==0)
//			printf("%c\n", rand() % 26 + 'A'); //대문자
//		else if(r==1)
//			printf("%c\n", rand() % 26 + 'a'); //소문자 
//		else
//			printf("%c\n", rand() % 10 + '0'); //소문자 
//	}
//}



 /* 정밀한 rand 함수는 다른 오픈라이브라리를 참고할것 c언어 rand 는 안좋다..ㅎ*/

// 전체갯수중 각각의 rand의 빈도수만큼 출력이 될것 을 만들라 % 출력하는거  !!





///* memcpy 메모리 복사 함수 - 많이씀 */
//void main() {
//	int a = 100;
//	int b = 200;
//	b = a;
//
//	memcpy(&b, &a, sizeof(int)); //메모리 복사 함수 
//	printf("%d %d\n", a, b);
//}


/* memcpy -배열 복사 */
//void main() {
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 0 };
//	
//	memcpy(b, a, sizeof(int) * 5); 
//	{
//		int i;
//		for( i =0; i<5;++i)
//			printf("%d %d\n", a[i], b[i]);
//	}
//}
//
//
//void main() {
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 10,20,30,40,50 };
//
//			printf("%d\n",memcmp(b, a, sizeof(int) * 5));
//}

/* 메모리 비교함수 같으면 0 반환*/
//void main() {
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 10,20,30,41,50 };
//
//	printf("%d\n", memcmp(b, a, sizeof(int) * 5));
//}


///* memset - 0으로 set 할때 제일 많이 쓰이는 함수,캐시 0으로할때 */
//void main() {
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 10,20,30,40,50 };
//
//	
//	memset(a,0,sizeof(int)*5); 
//	//a의 시작주소부터 size까지 0으로 set 하는것 
//	
//	/* 주의할점은 바이트 단위의 초기화 */
//	memset(b,1,sizeof(int)*5); 
//
//	int i;
//	for(i = 0 ;i<5;++i)
//		printf("%x %x\n", a[i], b[i]);
//
//}


//void main() {
//	//100, 2.34, "Hello!"
//	printf("%d %g %s\n", 100, 2.34, "Hello!");
//
//	int n;
//	double d;
//	char buf[100];
//
//	scanf_s("%d %lf %s", &n, &d, buf, 100);
//	printf("%d %g %s\n", n, d, buf);
//}

///* sscanf - 문자열 scnaf*/
//void main() {
//	char* s = "100 2.34 Hello!";
//
//	int n;
//	double d;
//	char buf[100];
//
//	sscanf_s(s,"%d %lf %s", &n, &d, buf, 100); //정수와 실수와 문자를 뽑아옴 
//	printf("%d %g %s\n", n, d, buf);
//}

//
//void main() {
//	char* s = "100";
//	int data;
//	sscanf_s(s, "%d", &data); 
//	printf("int data : %d\n", data);
//}
//
///* sprintf_s 그 반대로 - 여러개를 string으로  */
//void main() {
//	char* s = "100 2.34 Hello!";
//
//	int n = 100;
//	double d = 2.34;
//	char buf[100] ="Hello!";
//	char string[1000];
//
//	// 1000사이즈
//	sprintf_s(string,1000,"%d %g %s\n", n, d, buf); 
//	printf("string : %s\n", string);
//}


/******************************************/

//
///* 가변인자 함수  */
//void PrintInt(...) {
//}
//void main() {
//	PrintInt(10);
//	PrintInt(100,200);
//}

//
///* 가변인자 함수  */
//void PrintInt(...) {
//}
//void main() {
//	PrintInt(1,10); //한개의 정보가 넘어가요 
//	PrintInt(2,100, 200); //두개의 정보가 넘어가요
//}

//
///* 가변인자 함수 - 꼭 첫번째에 갯수인자가 필요   */
////num = 갯수
//void PrintInt(int num,...) {
//	printf("%d\n", num);
//}
//void main() {
//	PrintInt(1, 10);
//	PrintInt(2, 100, 200);
//}

//
///* 가변인자 함수   */
//void PrintInt(int num, ...) {
//	int* p = &num + 1;
//	for (int i = 0; i < num; ++i)
//		printf("%d ", p[i]);
//	printf("\n");
//}
//void main() {
//	PrintInt(1, 10);
//	PrintInt(2, 100, 200);
//}
//
///* 가변인자 함수 va_list  */
//void PrintInt(int num, ...) {
//	va_list p; // 포인터 <stdagr.h> 
//	va_start(p, num); //p는 num주소 다음을 가르켜라
//	
//	for (int i = 0; i < num; ++i)
//		printf("%d ",va_arg(p,int)); //p로부터 int형만큼 가져와라 할때마다 다음것을 가져옴 
//	printf("\n");
//	va_end(p); // 이제 사용하지않는다 
//}
//void main() {
//	PrintInt(1, 10);
//	PrintInt(2, 100, 200);
//}

//
///* 가변인자 함수 - 여러가지 형식정보가 넘어가야한다면 문자열로..  */
//void UserPrintf(char* fmt, ...) { //format
//	va_list p; 
//	//va_start(p, fmt); 
//	
//	for (int i = 0; fmt[i]; ++i)
//		
//		printf("%c ", fmt[i]); 
//	//va_end(p);
//}
//void main() {
//	UserPrintf("int %d, %s, %f\n", 10, "Hello!",5.55);
//	UserPrintf("double %f, %c, %c\n", 5.55, 'A', 'B');
//	UserPrintf("int %d, %d, %f, %s\n", 100, 200,5.567,"Hello!");
//
//}

//
///* 가변인자 함수 - 여러가지 형식정보가 넘어가야한다면 문자열로.. if % */
//void UserPrintf(char* fmt, ...) { //format
//	va_list p;
//	//va_start(p, fmt); 
//
//	for (int i = 0; fmt[i]; ++i)
//		if(fmt[i]!='%')
//		printf("%c", fmt[i]);
//		else {
//			++i;
//		}
//			
//	//va_end(p);
//}
//void main() {
//	UserPrintf("int %d, %s, %f\n", 10, "Hello!", 5.55);
//	UserPrintf("double %f, %c, %c\n", 5.55, 'A', 'B');
//	UserPrintf("int %d, %d, %f, %s\n", 100, 200, 5.567, "Hello!");
//
//}

//
///* 가변인자 함수 최종  */
//void UserPrintf(char* fmt, ...) { //format
//	va_list p;
//	va_start(p, fmt); 
//
//	for (int i = 0; fmt[i]; ++i)
//		if (fmt[i] != '%')
//			printf("%c", fmt[i]);
//		else {
//			switch (fmt[++i])
//			{
//			case 'd':
//				printf("%d", va_arg(p, int));
//				break;
//			case 's':
//				printf("%s", va_arg(p, char*));
//				break;
//			case 'f':
//				printf("%g", va_arg(p, double));
//				break;
//			case 'c': 
//				printf("%c", va_arg(p, char));
//				break;
//			default:
//				break;
//
//			}
//		}
//	va_end(p);
//}
//void main() {
//	UserPrintf("int %d, %s, %f\n", 10, "Hello!", 5.55);
//	UserPrintf("double %f, %c, %c\n", 5.55, 'A', 'B');
//	UserPrintf("int %d, %d, %f, %s\n", 100, 200, 5.567, "Hello!");
//
//}

//
///* 재귀함수  */
//void c() {
//	printf("C function!\n");
//}
//void b() {
//	printf("B function!\n");
//	c();
//}
//void a() {
//	printf("A function!\n");
//	b();
//}
//void main() {
//	a();
//	b();
//}

//
///* 재귀함수 -종료조건이있어야함, 선형 재귀함수  */
//void Print(int data) {
//	printf("int:%d\n", data);
//	if(data>0)
//	Print(data-1);
//}
//void main() {
//	Print(5);
//	
//}

//
///* 재귀함수 - */
//void Print(int data) {
//	printf("int:%d\n", data);
//	if (data>0)
//		Print(data - 1);
//	printf("-int : %d\n", data);
//}
//void main() {
//	Print(5);
//
//}
//
//
///* 재귀함수 - 이진트리탐색과 비슷 */
//void Print(int data) {
//	printf("+int:%d\n", data);
//	if (data > 0) {
//		Print(data - 1);
//		Print(data - 2);
//	}
//		printf("-int : %d\n", data);
//	
//}
//void main() {
//	Print(3);
//
//}


//
///* 재귀함수  */
//void Print(int data) {
//	printf("+int:%d\n", data);
//	if (data > 0) {
//		int num = rand() % 5 + 1;
//		for (int i = 0; i < num; ++i) //랜덤에의해 결정돼서 얼마나 될지모름..ㅎ
//			Print(data - 1);
//	}
//	printf("-int : %d\n", data);
//
//}
//void main() {
//	Print(3);
//
//}

///////////////////////////////////////////////////////

/**/
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//}



//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//
//	Node* head = NULL;
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d\n", n1.data);
//	printf("%d\n", n2.data);
//	printf("%d\n", n3.data);
//}


//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//
//	Node* head = NULL;
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//}


//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	Node* head = NULL;
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	printf("%d\n", head->data);
//	printf("%d\n", head->link->data);
//	printf("%d\n", head->link->link->data);
//	printf("%d\n", head->link->link->link->data);
//	printf("%d\n", head->link->link->link->link->data);
//}



//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	Node* p = NULL;
//	Node* head = NULL;
//	
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	
//	p = head;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//	p = p->link;
//	printf("%d\n", p->data);
//
//}

//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	Node* p = NULL;
//	Node* head = NULL;
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	for (p = head; p != NULL; p = p->link)// 다음 노드로 이동 
//		printf("%d\n", p->data);
//}


/* 자기참조 구조체*/
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) {
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// 다음 노드로 이동 
//		printf("%d\n", p->data);
//}
//void main() {
//	Node n1 = { 10,NULL };
//	Node n2 = { 20,NULL };
//	Node n3 = { 30,NULL };
//	Node n4 = { 40,NULL };
//	Node n5 = { 50,NULL };
//
//	Node* p = NULL;
//	Node* head = NULL;
//
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	PrintNode(head);
//}
//
///* 힙 메모리에 생성됨 */
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) {
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// 다음 노드로 이동 
//		printf("%d\n", p->data);
//}
//void main() {
//	Node* head = NULL;
//	Node* p = NULL;
//	p =	(Node*)malloc(sizeof(Node));
//
//	p->data = 10;
//	p->link = NULL;
//	head = p;
//	PrintNode(head);
//}



/* 힙 메모리에 생성됨 */
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) {
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// 다음 노드로 이동 
//		printf("%d\n", p->data);
//}
//void main() {
//	Node* head = NULL;
//	Node* p = NULL;
//	p = (Node*)malloc(sizeof(Node));
//
//	p->data = 10;
//	p->link = NULL;
//	head = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 20;
//	p->link = NULL;
//	head->link = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 30;
//	p->link = NULL;
//	head->link->link = p;
//
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 40;
//	p->link = NULL;
//	head->link->link->link = p;
//	p = (Node*)malloc(sizeof(Node));
//	p->data = 50;
//	p->link = NULL;
//	head->link->link->link->link = p;
//
//	PrintNode(head);
//}


//
///*AddNode*/
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) { //다음 노드 데이터 출력 
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// 다음 노드로 이동 
//		printf("%d\n", p->data);
//}
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p = NULL;
//	p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->link = NULL;
//	return p;
//}
//void AddNode(Node* head, int data) {
//	Node* tail = NULL;
//	for (tail = head; tail->link != NULL; tail = tail->link) //끝노드 찾기 위해
//		;
//	tail->link = AllocNode(data);
//}
//void main() {
//	Node* head = NULL;
//	Node* p = NULL;
//	
//	p = AllocNode(10);
//	head = p;
//	
//	AddNode(head, 20);
//	AddNode(head, 30);
//	AddNode(head, 40);
//
//	PrintNode(head);
//}


/*Node** phead*/
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) { //다음 노드 데이터 출력 
//		Node* p;
//	for (p = head; p != NULL; p = p->link)// 다음 노드로 이동 
//		printf("%d\n", p->data);
//}
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p = NULL;
//	p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->link = NULL;
//	return p;
//}
//void AddNode(Node** phead, int data) {
//	if (*phead == NULL) {
//		*phead = AllocNode(data);
//		return;
//	}
//	Node* tail = NULL;
//	for (tail = *phead; tail->link != NULL; tail = tail->link) //끝노드 찾기 위해
//		;
//	tail->link = AllocNode(data);
//}
//void main() {
//	Node* head = NULL;
//	
//	AddNode(&head, 10);
//	AddNode(&head, 20);
//	AddNode(&head, 30);
//	AddNode(&head, 40);
//	AddNode(&head, 50);
//
//	PrintNode(head);
//}


/*더미 노드 */
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) { //다음 노드 데이터 출력 
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// 다음 노드로 이동 
//		printf("%d\n", p->data);
//}
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p = NULL;
//	p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->link = NULL;
//	return p;
//}
//void AddNode(Node** phead, int data) {
//	Node* tail = NULL;
//	for (tail = *phead; tail->link != NULL; tail = tail->link) //끝노드 찾기 위해
//		;
//	tail->link = AllocNode(data);
//}
//void main() {
//	Node* head = NULL;
//
//	head = AllocNode(0);
//
//	AddNode(&head, 10);
//	AddNode(&head, 20);
//	AddNode(&head, 30);
//	AddNode(&head, 40);
//	AddNode(&head, 50);
//
//	PrintNode(head);
//}

//
///*_list 구조체 - 단일 연결리스트 완성 */
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//typedef struct _list {
//	Node* head; 
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p= (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->link = NULL;
//	return p;
//}
//void PrintList(List* plt) { //리스트의 내용을 출력할것 
//	Node* p;
//	for (p = plt->head->link; p != NULL; p = p->link)// 진짜노드는 link 부터 시작해서  
//		printf("%d\n", p->data);
//}
//void AddList(List* plt, int data) {
//	//테일 알고있다고해서 찾는 코드 필요없음 
//	plt->tail->link = AllocNode(data);
//	plt->tail = plt->tail->link;
//}
//void InitList(List*plt) { //노드가 하나라 테일과 헤드가 같음 
//	plt->head = plt->tail = AllocNode(0);
//}
//void UninitList(List*plt) {  //더미노드도 제거 되야함 
//	Node* cur;
//	for (cur = plt->head; cur;) {//cur가 null이 아닐때까지 
//		Node* nextCur = cur->link;
//		free(cur);
//		cur = nextCur;
//	}
//}
//void main() {
//
//	List lt;
//	InitList(&lt);
//
//	AddList(&lt, 10);
//	AddList(&lt, 20);
//	AddList(&lt, 30);
//	AddList(&lt, 40);
//	AddList(&lt, 50);
//
//	PrintList(&lt);
//
//	UninitList(&lt);
//
//}


//
///* 이중연결 리스트 -  InitList, UninitList  */
//typedef struct _node {
//	int data;
//	struct _node* prev;
//	struct _node* next;
//}Node;
//typedef struct _list {
//	Node* head; 
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next= NULL;
//	return p;
//}
//
//void InitList(List*plt) { //head 와 tail 정의 그리고 연결  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //?????
//	Node* cur;
//	for (cur = plt->head; cur;) {
//		Node* nextCur = cur->next;
//		free(cur);
//		cur = nextCur;
//	}
//}
//}
//void main() {
//
//	List lt;
//	InitList(&lt);
//	UninitList(&lt);
//
//}



/*이중연결 리스트 - AddList, PrintList  */
//typedef struct _node {
//	int data;
//	struct _node* prev;
//	struct _node* next;
//}Node;
//typedef struct _list {
//	Node* head;
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next = NULL;
//	return p;
//}
//void AddList(List*plt, int data) { // 헤드앞에 달리는것!  시간없어서 하나만 만듬 
//	Node* tail = plt->tail;
//	Node*ptail = tail->prev;
//	Node* n = AllocNode(data);
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintList(List* plt) {
//	Node* p;
//	for (p = plt->head->next; p != plt->tail; p = p->next) //테일(더미노드가 아닐때까지)
//		printf("%5d", p->data);
//	printf("\n");
//}
//void InitList(List*plt) { //head 와 tail 정의 그리고 연결  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //더미노드도 제거 되야함 
//	Node* cur;
//	for (cur = plt->head; cur;) {
//		Node* nextCur = cur->next;
//		free(cur);
//		cur = nextCur;
//	}
//}
//void main() {
//
//	List lt;
//	InitList(&lt);
//
//	AddList(&lt, 10);
//	AddList(&lt, 20);
//	AddList(&lt, 30);
//
//	PrintList(&lt);
//
//	UninitList(&lt);
//
//}
//
//typedef struct _node {
//	int data;
//	struct _node* prev;
//	struct _node* next;
//}Node;
//typedef struct _list {
//	Node* head;
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next = NULL;
//	return p;
//}
//void AddList(List*plt, int data) { // 헤드앞에 달리는것!  시간없어서 하나만 만듬 
//	Node* tail = plt->tail;
//	Node*ptail = tail->prev;
//	Node* n = AllocNode(data);
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintList(List* plt) {
//	Node* p;
//	for (p = plt->head->next; p != plt->tail; p = p->next) //테일(더미노드가 아닐때까지)
//		printf("%5d", p->data);
//	printf("\n");
//}
//void InitList(List*plt) { //head 와 tail 정의 그리고 연결  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //더미노드도 제거 되야함 
//	Node* cur;
//	for (cur = plt->head; cur;) {
//		Node* nextCur = cur->next;
//		free(cur);
//		cur = nextCur;
//	}
//}
//void main() {
//
//	List lt;
//	InitList(&lt);
//
//	AddList(&lt, 10);
//	AddList(&lt, 20);
//	AddList(&lt, 30);
//
//	PrintList(&lt);
//
//	UninitList(&lt);
//	//기본적으로 
//	//앞에 삽입 뒤에삽입 중간삽입,모든 원소를 참조할수있을때 자료구조 연결리스트다 
//}

//
//typedef struct _node {
//	int data;
//	struct _node* prev;
//	struct _node* next;
//}Node;
//typedef struct _list {
//	Node* head;
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next = NULL;
//	return p;
//}
//void AddList(List*plt, int data) { // 헤드앞에 달리는것!  시간없어서 하나만 만듬 
//	Node* tail = plt->tail;
//	Node*ptail = tail->prev;
//	Node* n = AllocNode(data);
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintList(List* plt) {
//
//}
//void InitList(List*plt) { //head 와 tail 정의 그리고 연결  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //더미노드도 제거 되야함 
//	Node* cur;
//	for (cur = plt->head; cur;) {
//		Node* nextCur = cur->next;
//		free(cur);
//		cur = nextCur;
//	}
//}
//void main() {
//
//	List lt;
//	InitList(&lt);
//
//	AddList(&lt, 10);
//	AddList(&lt, 20);
//	AddList(&lt, 30);
//	{//모든 원소를 참조 --.. ㅈ객체지향에서는 이터레이터 
//
//		//client 가 알아야 하기 때문에 이게 가능한 인터페이스를 제공해야함 
//		Node* p;
//		for (p = lt.head->next; p != lt.tail; p = p->next) //테일(더미노드가 아닐때까지)
//			printf("%5d", p->data);
//		printf("\n");
//
//	}
//	UninitList(&lt);
//}


//
//typedef struct _node {
//	int data;
//	struct _node* prev;
//	struct _node* next;
//}Node;
//typedef struct _list {
//	Node* head;
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// 데이터 생성 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next = NULL;
//	return p;
//}
//void AddList(List*plt, int data) { // 헤드앞에 달리는것!  시간없어서 하나만 만듬 
//	Node* tail = plt->tail;
//	Node*ptail = tail->prev;
//	Node* n = AllocNode(data);
//	ptail->next = n;
//	n->prev = ptail;
//	n->next = tail;
//	tail->prev = n;
//}
//void PrintList(List* plt) {
//
//}
//void InitList(List*plt) { //head 와 tail 정의 그리고 연결  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //더미노드도 제거 되야함 
//	Node* cur;
//	for (cur = plt->head; cur;) {
//		Node* nextCur = cur->next;
//		free(cur);
//		cur = nextCur;
//	}
//}
//
////////////////////리스트의 모든원소를 순회 (Iterator)/////////////////////////
//typedef Node* POSITION;
//POSITION GetHead(List* plt) {
//	return plt->head->next;
//}
//int HasNext(List* plt, POSITION pos) {
//	//return pos != plt->tail ? 1 : 0;
//	return pos != plt->tail;
//}
//POSITION Next(List*plt, POSITION pos) {
//	return pos->next;
//}
//int GetItem(List* plt, POSITION pos) {
//	return pos->data;
//}
//void main() {
//
//	List lt;
//	InitList(&lt);
//
//	AddList(&lt, 10);
//	AddList(&lt, 20);
//	AddList(&lt, 30);
//	{//모든 원소를 참조 --.. ㅈ객체지향에서는 이터레이터 
//
//	 //인터페이스 
//		POSITION p;
//		for (p = GetHead(&lt); HasNext(&lt,p); p = Next(&lt,p)) //테일(더미노드가 아닐때까지)
//			printf("%5d", GetItem(&lt,p));
//		printf("\n");
//
//	}
//	UninitList(&lt);
//}

/* 20 찾기 */
typedef struct _node {
	int data;
	struct _node* prev;
	struct _node* next;
}Node;
typedef struct _list {
	Node* head;
	Node* tail;
}List;
Node* AllocNode(int data) {// 데이터 생성 
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = data;
	p->prev = NULL;
	p->next = NULL;
	return p;
}
void AddList(List*plt, int data) { // 헤드앞에 달리는것!  시간없어서 하나만 만듬 
	Node* tail = plt->tail;
	Node*ptail = tail->prev;
	Node* n = AllocNode(data);
	ptail->next = n;
	n->prev = ptail;
	n->next = tail;
	tail->prev = n;
}
void PrintList(List* plt) {

}
void InitList(List*plt) { //head 와 tail 정의 그리고 연결  
	plt->head = AllocNode(0);
	plt->tail = AllocNode(0);
	plt->head->next = plt->tail;
	plt->tail->prev = plt->head;
}
void UninitList(List*plt) {  //더미노드도 제거 되야함 
	Node* cur;
	for (cur = plt->head; cur;) {
		Node* nextCur = cur->next;
		free(cur);
		cur = nextCur;
	}
}

//////////////////리스트의 모든원소를 순회 (Iterator)/////////////////////////
typedef Node* POSITION;
POSITION GetHead(List* plt) {
	return plt->head->next;
}
int HasNext(List* plt, POSITION pos) {
	//return pos != plt->tail ? 1 : 0;
	return pos != plt->tail;
}
POSITION Next(List*plt, POSITION pos) {
	return pos->next;
}
int GetItem(List* plt, POSITION pos) {
	return pos->data;
}
void main() {

	List lt;
	InitList(&lt);

	AddList(&lt, 10);
	AddList(&lt, 20);
	AddList(&lt, 30);
	{//모든 원소를 참조 --.. ㅈ객체지향에서는 이터레이터 

	 //인터페이스 
		POSITION p;
		for (p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p)) //테일(더미노드가 아닐때까지)
			if(20 == GetItem(&lt,p))
		printf("\n");

	}
	UninitList(&lt);
}
