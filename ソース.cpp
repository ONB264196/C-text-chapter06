#include<stdio.h>
#define _0615

#ifdef _0601
int min2(int a, int b) {
	return(a < b) ? a : b;
}

int main(void) {
	int a, b;
	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");    scanf_s("%d", &a);
	printf("�����Q�F");    scanf_s("%d", &b);

	printf("�������ق��̒l��%d�ł��B", min2(a, b));

	return 0;
}
#endif

#ifdef _0602
int min3(int a, int b, int c) {
	int min = a;
	if (min > b)min = b;
	if (min > c)min = c;
	
	return min;
}

int main(void) {
	int a, b, c;
	puts("3�̐�������͂��Ă��������B");
	printf("�����P�F");    scanf_s("%d", &a);
	printf("�����Q�F");    scanf_s("%d", &b);
	printf("�����R�F");    scanf_s("%d", &c);

	printf("�ŏ��l��%d�ł��B", min3(a, b, c));

	return 0;
}
#endif

#ifdef _0603
int cube(int x) {
	return x * x * x;
}

int main(void) {
	int i;
	printf("��������͂��Ă��������F");
	scanf_s("%d", &x);
	putchar('\n');

	printf("%d��3���%d�ł��B", i, cube(i));

	return 0;
}
#endif

#ifdef _0604
int spr(int x) {
	return x * x;
}
int pow4(int x) {
	return spr(x) * spr(x);
}

int main(void) {
	int i;
	printf("��������͂��Ă��������F");
	scanf_s("%d", &i);
	putchar('\n');

	printf("%d��4���%d�ł��B", i, pow4(i));

	return 0;
}
#endif

#ifdef _0605
int sumup(int n) {
	int i = 1;
	int sum = 0;
	while (n-- > 0) {
		sum += i;
		i++;
	}
	return sum;
}

int main(void) {
	int i;
	printf("��������͂��Ă��������F");
	scanf_s("%d", &i);
	putchar('\n');

	printf("1����%d�܂ł̑S�����̘a��%d�ł��B", i, sumup(i));

	return 0;
}
#endif

#ifdef _0606
void alert(int n) {
	while (n-- > 0)
		putchar('\a');
}

int main(void) {
	int i;
	printf("�x��̉񐔁F");
	scanf_s("%d", &i);
	alert(i);

	return 0;
}
#endif

#ifdef _0607
void hello(void) {
	printf("����ɂ��́B");
}
int main(void) {
	hello();

	return 0;
}
#endif

#ifdef _0608
#define NUMBER 7
int min_of(const int v[], int n) {
	int min = v[0];
	for (int i = 0; i < n; i++) {
		if (v[i] < min)
			min = v[i];
	}
	return min;
}

int main(void) {
	int week1[NUMBER];
	int week2[NUMBER];
	int min1, min2;
	puts("��r����T�̊e���̍Œ�C������͂��Ă��������B");
	puts(" [1�T��]");
	for (int i = 0; i < 7; i++) {
		scanf_s("%d", &week1[i]);
	}
	putchar('\n');
	puts(" [2�T��]");
	for (int i = 0; i < 7; i++) {
		scanf_s("%d", &week2[i]);
	}
	putchar('\n');
	min1 = min_of(week1, 7);
	min2 = min_of(week2, 7);
	
	printf("1�T�ڂ̍Œ�C���F%d��\n", min1);
	printf("2�T�ڂ̍Œ�C���F%d��\n", min2);

	return 0;
}
#endif

#ifdef _0609
#define NUMBER 5
void rev_intary(int v[], int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = temp;
	}
}
int main(void) {
	int a[NUMBER];
	for (int i = 0; i < NUMBER; i++) {
		printf("n[%d]�F", i);
		scanf_s("%d", &a[i]);
	}
	putchar('\n');
	rev_intary(a, NUMBER);

	puts("���]���܂����B");
	for (int i = 0; i < NUMBER; i++) {
		printf("n[%d]�F%d\n", i, a[i]);
	}

	return 0;
}
#endif

#ifdef _0610
#define NUMBER 5
void intary_rcpy(int v1[], int v2[], int n) {
	for (int i = 0; i < n; i++) {
		v1[i] = v2[n - 1 - i];
	}
}

int main(void) {
	int a[NUMBER] = { 0 };
	int b[NUMBER] = { 0 };
	for (int i = 0; i < NUMBER; i++) {
		printf("a[%d]�F", i);
		scanf_s("%d", &a[i]);
	}
	putchar('\n');
	intary_rcpy(b, a, NUMBER);

	puts("[���]�O]");
	for (int i = 0; i < NUMBER; i++) {
		printf("n[%d]�F%d\n", i, a[i]);
	}
	putchar('\n');
	puts("[���]��]");
	for (int i = 0; i < NUMBER; i++) {
		printf("n[%d]�F%d\n", i, b[i]);
	}


	return 0;
}
#endif

#ifdef _0611
#define NUMBER 5

int idx[NUMBER];
int search_idx(const int v[], int idx[], int key, int n) {
	int x = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == key) {
			idx[x] = i;
			x++;
		}
	}
	return x;
}

int main(void) {
	int key, n;
	int vx[NUMBER];

	for (int i = 0; i < NUMBER; i++) {
		printf("vx[%d]�F", i);
		scanf_s("%d", &vx[i]);
	}

	printf("�T���l�F");
	scanf_s("%d", &key);

	n = search_idx(vx, idx, key, NUMBER);

	printf("�������l�̗v�f����%d�ł��B\n", n);

	if (n > 0) {
		printf("idx{");
		for (int i = 0; i < n; i++) {
			if (i == n - 1) {
				printf("%2d", idx[n - 1]);
				break;
			}
			printf("%2d", idx[i]);
			if (n >= 2) {
				putchar(',');
			}
		}
		printf("}\n");
	}

	return 0;
}
#endif

#ifdef _0612
void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
		}
	}
}

int main(void) {
	int A[4][3];
	int B[3][4];
	int C[4][4];

	puts("4�s3��̐��l(3���܂�)����͂��Ă��������B");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("[%d]/[%d]�F", i + 1, j + 1);
			scanf_s("%3d", &A[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');

	puts("3�s4��̐��l(3���܂�)����͂��Ă��������B");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("[%d]/[%d]�F", i + 1, j + 1);
			scanf_s("%3d", &B[i][j]);
		}
		putchar('\n');
	}

	mat_mul(A, B, C);

	puts("�ς�");
	for (int i = 0; i < 4; i++) {
		printf("|  ");
		for (int j = 0; j < 4; j++) {
			printf("%6d ", C[i][j]);
		}
		puts("  |");
	}

	return 0;
}
#endif

#ifdef _0613
void mat_store(const int a[4][3], const int b[4][3], int c[2][4][3]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			c[0][i][j] = a[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			c[1][i][j] = b[i][j];
		}
	}
}

int main(void) {
	int A[4][3] = { {91,63,78},{67,72,46},{89,34,56},{32,54,34} };
	int B[4][3] = { {97,67,82},{73,43,46},{97,56,21},{85,46,35} };
	int C[2][4][3];

	mat_store(A, B, C);

	puts("\n3�����z��tensu");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 3; k++) {
				printf("%4d", C[i][j][k]);
			}
			putchar('\n');
		}
		putchar('\n');
	}

	return 0;
}
#endif

#ifdef _0614
int main(void) {
	static double x[5];

	for (int i = 0; i < 5; i++) {
		printf("x[%d] = %.1f\n", i, x[i]);
	}

	return 0;
}
#endif

#ifdef _0615
void put_count() {
	static int count = 1;
	printf("put_count�F%d���", count);
	count++;
}
void counts(int n) {
	for (int i = 0; i < n; i++) {
		put_count();
		putchar('\n');
	}
}

int main(void) {
	int n;
	printf("�Ăяo���񐔁F");
	scanf_s("%d", &n);

	counts(n);

	return 0;
}
#endif

