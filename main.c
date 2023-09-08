#include <stdio.h>
#include <stdlib.h>
#define N 10 // число вершин графа

// -- Прототипы функций --
// Основные

// Вспомогательные
int input(int *start, int *end);
int get_int();





int main() {
    // Содержит метки: 0 - вершина ещё не рассмотрена, 1 - вершина уже рассмотрена
    int FIKS[N] = {0};
    // Текущие кратчайшие расстояния от исходной до соответствующей вершины
    int MIN_WEG[N] = {0};
    
    // Пользовательский ввод стартовой и конечной вершины 
    int start = 0, end = 0;
    if(input(&start, &end) == 1) {
        printf("input error\n");
        return 0;
    }

    printf("start: %d\tend: %d\n", start, end);

    return 0;
}





// Функция получает от пользователя стартовую и конечную вершины, возвращает 1 в случае ошибки
int input(int *start, int *end) {
    printf("input the node from 0 to 9 (0...9)\n");
    printf("start node: ");
    *start = get_int();
    if(*start < 0 || *start > 9){
        return 1;
    }
    printf("end node: ");
    *end = get_int();
    if(*end < 0 || *end > 9) {
        return 1;
    }
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