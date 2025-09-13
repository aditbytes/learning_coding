#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long b;
    float c;
    char d;
    double e;
    scanf("%d %ld %f %c %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%f\n%c\n%lf\n", a, b, c, d, e);
    system("pause");
    return 0;
}