#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "hy_AM.UTF-8"); // Установка армянской локали с кодировкой UTF-8

    // Код, который требует правильной армянской локали для корректного отображения
    printf("բարև");

    return 0;
}