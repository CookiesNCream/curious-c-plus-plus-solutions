#include <iostream>

using namespace std;

int main() {
    int n;
    long ln;
    long long lln;
    char ch;
    float f;
    double d;
    scanf("%d %ld %lld %c %f %lf", &n, &ln, &lln, &ch, &f, &d);
    printf("%d\n" "%ld\n" "%lld\n" "%c\n" "%.2f\n" "%.5lf\n", n, ln, lln, ch, f, d);
    return 0;
}
