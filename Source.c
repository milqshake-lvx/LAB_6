#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	double x, y;

	printf("input x y: ");
	scanf("%lf %lf", &x, &y);
	int state = (1 <= y <= 7) && (2*x + 13 >= y) && (-2*x + 15 >= y);
	printf("output: %d", state);

	return 0;
}