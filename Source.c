#include <locale.h>

#include <stdio.h>

void task2();
void task1();
void task3();


void main()

{

	setlocale(LC_ALL, "RUS"); // ��� ������������ ������� ���������
	task1();
	task2();
	task3();
	
}

void task2() 
{
	int N;
	int K;
	N = 10;
	K = 15;

	printf("%d ����� %d ����� 00 ������\n", N, K);

	printf("���� %d ������\n", N*60+K);

	printf("�� �������� �������� %d ����� � %d �����\n", 24-N, 60-K);

	printf("� 8:00 ������ %d ������\n", (N-8)*3600+K);

	printf("������� ��� %4.2f ����� � ������� ������ %4.2f ����", N/24., K/60.);

}

void task1() {

	

	printf("%20s\n", "��� �����");

	printf("%-20s\n", "��� �����");

	printf("%20s\t", "��� �����");

	printf("%10.3f\n ", 12.234657);

	printf("%10.5f\n ", 12.234657);

	printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);

	printf("%d ��������� �� %d ����� %d\n ", 7, 5, 7 / 5);

	printf("%d �������� �� %d ����� %d\n ", 2000, 4, 2000 * 4);

	printf("%f �������� �� %f ����� %f \n ", 2000., 4., 2000 * 4);
	printf("%g �������� �� %g ����� %g \n ", 2000., 4., 2000 * 4);
	printf("%e �������� �� %e ����� %e \n ", 2000., 4., 2000 * 4);

	printf("%g ��������� %e ����� %f\n ", 5., 2., 5. / 2);
	
}
void task3() {

	printf("%+2d\n%+3d\n%+4d\n%+5d\n%+6d\n", 1, 2, 3, 4, 5);

	
}

