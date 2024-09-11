#include <locale.h>

#include <stdio.h>

void task2();
void task1();
void task3();


void main()

{

	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки
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

	printf("%d ЧАСОВ %d МИНУТ 00 СЕКУНД\n", N, K);

	printf("Идет %d минута\n", N*60+K);

	printf("До полуночи осталось %d часов и %d минут\n", 24-N, 60-K);

	printf("С 8:00 прошло %d секунд\n", (N-8)*3600+K);

	printf("Текущий час %4.2f суток и текущая минута %4.2f часа", N/24., K/60.);

}

void task1() {

	

	printf("%20s\n", "Это текст");

	printf("%-20s\n", "Это текст");

	printf("%20s\t", "Это текст");

	printf("%10.3f\n ", 12.234657);

	printf("%10.5f\n ", 12.234657);

	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);

	printf("%d разделить на %d равен %d\n ", 7, 5, 7 / 5);

	printf("%d умножить на %d равен %d\n ", 2000, 4, 2000 * 4);

	printf("%f умножить на %f равен %f \n ", 2000., 4., 2000 * 4);
	printf("%g умножить на %g равен %g \n ", 2000., 4., 2000 * 4);
	printf("%e умножить на %e равен %e \n ", 2000., 4., 2000 * 4);

	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);
	
}
void task3() {

	printf("%+2d\n%+3d\n%+4d\n%+5d\n%+6d\n", 1, 2, 3, 4, 5);

	
}

