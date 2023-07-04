#include <stdio.h>

struct two_ints {
    int a : 16; // первые 16 бит зарезервированы для переменной a
    int b : 16; // следующие 16 бит зарезервированы для переменной b
};

int main() {
    struct two_ints my_int;
    my_int.a = 12345;
    my_int.b = -6789;
    printf("a = %d, b = %d\n", my_int.a, my_int.b);
    printf("my_int = %d\n", *(int*)&my_int); // выводим значение переменной как int
    return 0;
}
