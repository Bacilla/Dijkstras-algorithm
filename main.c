#include <stdio.h>
#include <stdlib.h>


// -- Прототипы функций --
// Основные

// Вспомогательные
void input(int *start, int *end);
int get_int();





int main() {
    // Пользовательский ввод стартовой и конечной вершины 
    int start = 0, end = 0;
    input(&start, &end);


    printf("start: %d\tend: %d\n", start, end);

    return 0;
}





// Функция получает от пользователя стартовую и конечную вершины
void input(int *start, int *end) {
    printf("input start node: ");
    *start = get_int();
    printf("input end node: ");
    *end = get_int();
}

// Функция получает от пользователя число типа int 
int get_int() {
    // Массив символов для вводимого числа
	char strValue[10] = {0}; 
	if(fgets(strValue, 11, stdin) == NULL) {
        printf("In \"get_int\" function: Error in fgets()\n");
    };
    // Преобразуем полученные массив символов в число типа int 
	int value = atoi(strValue);
	return value;
}