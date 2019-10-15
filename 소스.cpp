#include<stdio.h>
int main() {
	long i, c = 1032, s = 5678;
    for (i = 0; i < 10; i++) {
			s = (s * c) % 10000;
			printf("%4d\n", s);
		}
}