#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdarg.h> //va_list
 //
//void main() {
//
//	printf("%d\n", rand()); // ��������  ���� ���� ����
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}
//
//void main() {
//	srand(1);// �õ尪�� 1�������� �߻��ߴ��� 
//
//	printf("%d\n", rand()); // ��������  ���� ���� ����
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}

//
//void main() {
//	// srand �� ��������ؼ� ����ε� ���� 
//	srand((unsigned int) time(NULL));//�׶��׶� �޶����� �Ϸ��� �ð� ������ �����ϸ������
//
//	printf("%d\n", rand()); // ��������  ���� ���� ����
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}
//
//void main() {
//	// srand �� ��������ؼ� ����ε� ���� 
//	srand((unsigned int)time(NULL));//�׶��׶� �޶����� �Ϸ��� �ð� ������ �����ϸ������
//	printf("sec: %d\n", time(NULL)); //�ʴ���
//	printf("%d\n", rand()); // ��������  ���� ���� ����
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//}
//
///* 0 ���� 100���� �����Լ� ����*/
//void main() {
//	// srand �� ��������ؼ� ����ε� ���� 
//	srand((unsigned int)time(NULL));//�׶��׶� �޶����� �Ϸ��� �ð� ������ �����ϸ������
//	printf("%d\n", rand() % 101); // ��������  ���� ���� ����
//	printf("%d\n", rand() % 101); // ��������  ���� ���� ����
//	printf("%d\n", rand() % 101); // ��������  ���� ���� ����
//	printf("%d\n", rand() % 101); // ��������  ���� ���� ����
//	printf("%d\n", rand() %101); // ��������  ���� ���� ����
//
//}

//
///* 1 ���� 10���� �����Լ� ����*/
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; ++i) {
//		printf("%d\n", rand() % 10+1); 
//	}
//}

//
///* A���� Z���� �����Լ� ���� - �������ٰ� �����̵�*/
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; ++i) 
//		printf("%c\n", rand() % 26 + 'A'); //65��ŭ �����̵� 'A' = 65 
//}
//
///* A���� Z������ a���� z���� �����Լ� ���� - */
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; ++i)
//	{
//		if (rand() % 2)
//			printf("%c\n", rand() % 26 + 'A'); //�빮��
//		else
//			printf("%c\n", rand() % 26 + 'a'); //�ҹ��� 
//	}
//}


/* A���� Z����, a���� z����, 0���� 9����  �����Լ� ���� - */
//void main() {
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 5; ++i)
//	{
//		int r = rand() % 3; 
//		if(r==0)
//			printf("%c\n", rand() % 26 + 'A'); //�빮��
//		else if(r==1)
//			printf("%c\n", rand() % 26 + 'a'); //�ҹ��� 
//		else
//			printf("%c\n", rand() % 10 + '0'); //�ҹ��� 
//	}
//}



 /* ������ rand �Լ��� �ٸ� ���¶��̺�󸮸� �����Ұ� c��� rand �� ������..��*/

// ��ü������ ������ rand�� �󵵼���ŭ ����� �ɰ� �� ����� % ����ϴ°�  !!





///* memcpy �޸� ���� �Լ� - ���̾� */
//void main() {
//	int a = 100;
//	int b = 200;
//	b = a;
//
//	memcpy(&b, &a, sizeof(int)); //�޸� ���� �Լ� 
//	printf("%d %d\n", a, b);
//}


/* memcpy -�迭 ���� */
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

/* �޸� ���Լ� ������ 0 ��ȯ*/
//void main() {
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 10,20,30,41,50 };
//
//	printf("%d\n", memcmp(b, a, sizeof(int) * 5));
//}


///* memset - 0���� set �Ҷ� ���� ���� ���̴� �Լ�,ĳ�� 0�����Ҷ� */
//void main() {
//	int a[5] = { 10,20,30,40,50 };
//	int b[5] = { 10,20,30,40,50 };
//
//	
//	memset(a,0,sizeof(int)*5); 
//	//a�� �����ּҺ��� size���� 0���� set �ϴ°� 
//	
//	/* ���������� ����Ʈ ������ �ʱ�ȭ */
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

///* sscanf - ���ڿ� scnaf*/
//void main() {
//	char* s = "100 2.34 Hello!";
//
//	int n;
//	double d;
//	char buf[100];
//
//	sscanf_s(s,"%d %lf %s", &n, &d, buf, 100); //������ �Ǽ��� ���ڸ� �̾ƿ� 
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
///* sprintf_s �� �ݴ�� - �������� string����  */
//void main() {
//	char* s = "100 2.34 Hello!";
//
//	int n = 100;
//	double d = 2.34;
//	char buf[100] ="Hello!";
//	char string[1000];
//
//	// 1000������
//	sprintf_s(string,1000,"%d %g %s\n", n, d, buf); 
//	printf("string : %s\n", string);
//}


/******************************************/

//
///* �������� �Լ�  */
//void PrintInt(...) {
//}
//void main() {
//	PrintInt(10);
//	PrintInt(100,200);
//}

//
///* �������� �Լ�  */
//void PrintInt(...) {
//}
//void main() {
//	PrintInt(1,10); //�Ѱ��� ������ �Ѿ�� 
//	PrintInt(2,100, 200); //�ΰ��� ������ �Ѿ��
//}

//
///* �������� �Լ� - �� ù��°�� �������ڰ� �ʿ�   */
////num = ����
//void PrintInt(int num,...) {
//	printf("%d\n", num);
//}
//void main() {
//	PrintInt(1, 10);
//	PrintInt(2, 100, 200);
//}

//
///* �������� �Լ�   */
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
///* �������� �Լ� va_list  */
//void PrintInt(int num, ...) {
//	va_list p; // ������ <stdagr.h> 
//	va_start(p, num); //p�� num�ּ� ������ �����Ѷ�
//	
//	for (int i = 0; i < num; ++i)
//		printf("%d ",va_arg(p,int)); //p�κ��� int����ŭ �����Ͷ� �Ҷ����� �������� ������ 
//	printf("\n");
//	va_end(p); // ���� ��������ʴ´� 
//}
//void main() {
//	PrintInt(1, 10);
//	PrintInt(2, 100, 200);
//}

//
///* �������� �Լ� - �������� ���������� �Ѿ���Ѵٸ� ���ڿ���..  */
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
///* �������� �Լ� - �������� ���������� �Ѿ���Ѵٸ� ���ڿ���.. if % */
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
///* �������� �Լ� ����  */
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
///* ����Լ�  */
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
///* ����Լ� -�����������־����, ���� ����Լ�  */
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
///* ����Լ� - */
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
///* ����Լ� - ����Ʈ��Ž���� ��� */
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
///* ����Լ�  */
//void Print(int data) {
//	printf("+int:%d\n", data);
//	if (data > 0) {
//		int num = rand() % 5 + 1;
//		for (int i = 0; i < num; ++i) //���������� �����ż� �󸶳� ������..��
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
//	for (p = head; p != NULL; p = p->link)// ���� ���� �̵� 
//		printf("%d\n", p->data);
//}


/* �ڱ����� ����ü*/
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) {
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// ���� ���� �̵� 
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
///* �� �޸𸮿� ������ */
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) {
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// ���� ���� �̵� 
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



/* �� �޸𸮿� ������ */
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) {
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// ���� ���� �̵� 
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
//void PrintNode(Node* head) { //���� ��� ������ ��� 
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// ���� ���� �̵� 
//		printf("%d\n", p->data);
//}
//Node* AllocNode(int data) {// ������ ���� 
//	Node* p = NULL;
//	p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->link = NULL;
//	return p;
//}
//void AddNode(Node* head, int data) {
//	Node* tail = NULL;
//	for (tail = head; tail->link != NULL; tail = tail->link) //����� ã�� ����
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
//void PrintNode(Node* head) { //���� ��� ������ ��� 
//		Node* p;
//	for (p = head; p != NULL; p = p->link)// ���� ���� �̵� 
//		printf("%d\n", p->data);
//}
//Node* AllocNode(int data) {// ������ ���� 
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
//	for (tail = *phead; tail->link != NULL; tail = tail->link) //����� ã�� ����
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


/*���� ��� */
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//void PrintNode(Node* head) { //���� ��� ������ ��� 
//	Node* p;
//	for (p = head; p != NULL; p = p->link)// ���� ���� �̵� 
//		printf("%d\n", p->data);
//}
//Node* AllocNode(int data) {// ������ ���� 
//	Node* p = NULL;
//	p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->link = NULL;
//	return p;
//}
//void AddNode(Node** phead, int data) {
//	Node* tail = NULL;
//	for (tail = *phead; tail->link != NULL; tail = tail->link) //����� ã�� ����
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
///*_list ����ü - ���� ���Ḯ��Ʈ �ϼ� */
//typedef struct _node {
//	int data;
//	struct _node* link;
//}Node;
//typedef struct _list {
//	Node* head; 
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// ������ ���� 
//	Node* p= (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->link = NULL;
//	return p;
//}
//void PrintList(List* plt) { //����Ʈ�� ������ ����Ұ� 
//	Node* p;
//	for (p = plt->head->link; p != NULL; p = p->link)// ��¥���� link ���� �����ؼ�  
//		printf("%d\n", p->data);
//}
//void AddList(List* plt, int data) {
//	//���� �˰��ִٰ��ؼ� ã�� �ڵ� �ʿ���� 
//	plt->tail->link = AllocNode(data);
//	plt->tail = plt->tail->link;
//}
//void InitList(List*plt) { //��尡 �ϳ��� ���ϰ� ��尡 ���� 
//	plt->head = plt->tail = AllocNode(0);
//}
//void UninitList(List*plt) {  //���̳�嵵 ���� �Ǿ��� 
//	Node* cur;
//	for (cur = plt->head; cur;) {//cur�� null�� �ƴҶ����� 
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
///* ���߿��� ����Ʈ -  InitList, UninitList  */
//typedef struct _node {
//	int data;
//	struct _node* prev;
//	struct _node* next;
//}Node;
//typedef struct _list {
//	Node* head; 
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// ������ ���� 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next= NULL;
//	return p;
//}
//
//void InitList(List*plt) { //head �� tail ���� �׸��� ����  
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



/*���߿��� ����Ʈ - AddList, PrintList  */
//typedef struct _node {
//	int data;
//	struct _node* prev;
//	struct _node* next;
//}Node;
//typedef struct _list {
//	Node* head;
//	Node* tail;
//}List;
//Node* AllocNode(int data) {// ������ ���� 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next = NULL;
//	return p;
//}
//void AddList(List*plt, int data) { // ���տ� �޸��°�!  �ð���� �ϳ��� ���� 
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
//	for (p = plt->head->next; p != plt->tail; p = p->next) //����(���̳�尡 �ƴҶ�����)
//		printf("%5d", p->data);
//	printf("\n");
//}
//void InitList(List*plt) { //head �� tail ���� �׸��� ����  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //���̳�嵵 ���� �Ǿ��� 
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
//Node* AllocNode(int data) {// ������ ���� 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next = NULL;
//	return p;
//}
//void AddList(List*plt, int data) { // ���տ� �޸��°�!  �ð���� �ϳ��� ���� 
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
//	for (p = plt->head->next; p != plt->tail; p = p->next) //����(���̳�尡 �ƴҶ�����)
//		printf("%5d", p->data);
//	printf("\n");
//}
//void InitList(List*plt) { //head �� tail ���� �׸��� ����  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //���̳�嵵 ���� �Ǿ��� 
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
//	//�⺻������ 
//	//�տ� ���� �ڿ����� �߰�����,��� ���Ҹ� �����Ҽ������� �ڷᱸ�� ���Ḯ��Ʈ�� 
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
//Node* AllocNode(int data) {// ������ ���� 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next = NULL;
//	return p;
//}
//void AddList(List*plt, int data) { // ���տ� �޸��°�!  �ð���� �ϳ��� ���� 
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
//void InitList(List*plt) { //head �� tail ���� �׸��� ����  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //���̳�嵵 ���� �Ǿ��� 
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
//	{//��� ���Ҹ� ���� --.. ����ü���⿡���� ���ͷ����� 
//
//		//client �� �˾ƾ� �ϱ� ������ �̰� ������ �������̽��� �����ؾ��� 
//		Node* p;
//		for (p = lt.head->next; p != lt.tail; p = p->next) //����(���̳�尡 �ƴҶ�����)
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
//Node* AllocNode(int data) {// ������ ���� 
//	Node* p = (Node*)malloc(sizeof(Node));
//	p->data = data;
//	p->prev = NULL;
//	p->next = NULL;
//	return p;
//}
//void AddList(List*plt, int data) { // ���տ� �޸��°�!  �ð���� �ϳ��� ���� 
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
//void InitList(List*plt) { //head �� tail ���� �׸��� ����  
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List*plt) {  //���̳�嵵 ���� �Ǿ��� 
//	Node* cur;
//	for (cur = plt->head; cur;) {
//		Node* nextCur = cur->next;
//		free(cur);
//		cur = nextCur;
//	}
//}
//
////////////////////����Ʈ�� �����Ҹ� ��ȸ (Iterator)/////////////////////////
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
//	{//��� ���Ҹ� ���� --.. ����ü���⿡���� ���ͷ����� 
//
//	 //�������̽� 
//		POSITION p;
//		for (p = GetHead(&lt); HasNext(&lt,p); p = Next(&lt,p)) //����(���̳�尡 �ƴҶ�����)
//			printf("%5d", GetItem(&lt,p));
//		printf("\n");
//
//	}
//	UninitList(&lt);
//}

/* 20 ã�� */
typedef struct _node {
	int data;
	struct _node* prev;
	struct _node* next;
}Node;
typedef struct _list {
	Node* head;
	Node* tail;
}List;
Node* AllocNode(int data) {// ������ ���� 
	Node* p = (Node*)malloc(sizeof(Node));
	p->data = data;
	p->prev = NULL;
	p->next = NULL;
	return p;
}
void AddList(List*plt, int data) { // ���տ� �޸��°�!  �ð���� �ϳ��� ���� 
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
void InitList(List*plt) { //head �� tail ���� �׸��� ����  
	plt->head = AllocNode(0);
	plt->tail = AllocNode(0);
	plt->head->next = plt->tail;
	plt->tail->prev = plt->head;
}
void UninitList(List*plt) {  //���̳�嵵 ���� �Ǿ��� 
	Node* cur;
	for (cur = plt->head; cur;) {
		Node* nextCur = cur->next;
		free(cur);
		cur = nextCur;
	}
}

//////////////////����Ʈ�� �����Ҹ� ��ȸ (Iterator)/////////////////////////
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
	{//��� ���Ҹ� ���� --.. ����ü���⿡���� ���ͷ����� 

	 //�������̽� 
		POSITION p;
		for (p = GetHead(&lt); HasNext(&lt, p); p = Next(&lt, p)) //����(���̳�尡 �ƴҶ�����)
			if(20 == GetItem(&lt,p))
		printf("\n");

	}
	UninitList(&lt);
}
