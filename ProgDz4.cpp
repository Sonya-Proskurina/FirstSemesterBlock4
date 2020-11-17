// ProgDz4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<stdio.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>

void r1() {
    int N,G;
    float arr[100];
    float sum = 0;
    printf("Введите N и G:\n");
    scanf("%d%d", &N, &G);
    printf("Введите N элементов массива\n");
    for (int i = 0; i < N; i++) {
        scanf("%f", &arr[i]);
        if (i >= G) {
            sum += arr[i];
        }
    }
    printf("Среднее количество осадков: %f\n", (sum / (N - G + 1.)));
    for ( int i=0; i < N; i++) {
        printf("Отклонение от года с номером %d = %f\n", i+1,fabsf(arr[i]- (sum / (N - G + 1.))));
    }
}

void r2() {
    int N;
    float arr[100];
    printf("Введите N:\n");
    scanf("%d", &N);
    printf("Введите N элементов массива:\n");
    for (int i = 0; i < N; i++)
        scanf("%f",&arr[i]);
    printf("\"Сглаженный\" массив:\n");
    printf("%f ", arr[0]);
    for (int i = 1; i < N-1; i++) {
        printf("%f ", (arr[i-1] + arr[i] + arr[i + 1]) / 3);
    }
    printf("%f\n", arr[N - 1]);
}
//исправлено
void r3_1() {
    int N;
    float arr[100];
    float arrB[100];
    int a=0;
    int numA = 0;
    int numB = 0;
    printf("Введите N:\n");
    scanf("%d", &N);
    printf("Введите N элементов массива:\n");
    for (int i = 0; i < N; i++) scanf("%f",&arr[i]);
    for (int i = 0; i < N; i++) {
        if (arr[i] >= 0) {
            arrB[a] = arr[i];
            a++;
        }
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            arrB[a] = arr[i];
            a++;
    }
        printf("%f ", arrB[i]);
    }
 /*   printf("Введите N:\n");
    scanf("%d", &N);
    printf("Введите N элементов массива:\n");

    for (int i = 0; i < N; i++) {
        scanf("%f", &a);
        if (a >= 0) {
          
            arr[numA] = a;
            numA++;
        }
        else {
        
            arrB[numB] = a;
            numB++;
        }
    }
    numB = 0;
    for (int i = 0; i < N; i++) {
        if (i<numA)
        printf("%f ", arr[i]);
        else {
            printf("%f ", arrB[numB]);
            numB++;
        }
    }
    printf("\n");*/
}
//исправлено
void r3_2() {
        float arr[100];
        int n;
        float k;
        int num = 0;
        printf("Введите N элементов массива: ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%f", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        { if (arr[i] >= 0)
            {
                k = arr[i];
                for (int j = i; j > num; j--)
                {
                    arr[j] = arr[j - 1];
                }
                arr[num] = k;
                num++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%f ", arr[i]);
        }
    }

//исправлено
void r4_1() {
    int N;
    int arr[100];
    int a;
    int num = 0;
    printf("Введите N:\n");
    scanf("%d", &N);
    printf("Введите N элементов массива:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
  
    for (int i = 0; i < N-1-num; i++) {
        for (int j = i+1; j <N-num; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < N - 1-num; k++) {
                    arr[k] = arr[k + 1];
                    if ((k == N - 2 - num) && (arr[i] == arr[k])) num++;
                }
                j--;
                num++;
            }
            }
    }
    for (int i = 0; i < N-num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
       /* for (int j = 1; j <=num; j++) {
            if (a == arr[j]) {
                b = false;
                break;
            }
        }
        if (b) {
            printf("%d ", a);
            num++;
            arr[num] = a;
        }
        b = true;
    }
    printf("\n");*/
}

void r4_2(){
    int N;
    int arr[100];
    int arrB[100];
    int a;
    int num = 0;
    bool b = true;
    printf("Введите N:\n");
    scanf("%d", &N);
    printf("Введите N элементов массива:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        for (int j = 0; j < num; j++) {
            if (arr[i] == arrB[j]) {
                b = false;
                break;
            }
        }
        if (b) {
           
            arrB[num] = arr[i];
            num++;
        }
        b = true; 
    }
    for (int i = 0; i < num; i++) {
        printf("%d ", arrB[i]);
    }
    printf("\n");
}

void r5() {
    char s[100];
    int x=0;
    scanf("%s", &s);
    for (int i = 0; i < 100; i++) {
        if (s[i] ==NULL) break;
        if (s[i]== 'X')x++;
    }
    printf("%d\n",x);
}

void r6() {
    char s[100];
    //char kostyl[100];
    char s2[100];
    char s2max[100];
    int x = 0;
    int xMax = 0;
    //gets_s(kostyl);
    gets_s(s,sizeof(s));
    for (int i = 0; i < 100; i++) {
        if (s[i] != ' '&&s[i]!=NULL) {
            s2[x] = s[i];
            x++;
        }
        else {
            if (x > xMax) {
                xMax = x;
                for (int j = 0; j < x; j++) {
                    s2max[j] = s2[j];
                }
            }
            x = 0;
        }
    }
    for (int i = 0; i < xMax; i++) {
        printf("%c", s2max[i]);
    }
    printf("\n");
}

void r7() {
    int N;
    float min1;
    float min2;
    float min3;
    float min4;
    float arr[100];
    printf("Введите N:\n");
    scanf("%d", &N);
    printf("Введите N элементов массива:\n");
    scanf("%f", &arr[0]);
    scanf("%f", &arr[1]);
    scanf("%f", &arr[2]);
    scanf("%f", &arr[3]);
    min1 = arr[0];
    min2 = arr[1];
    min3 = arr[2];
    min4 = arr[3];
    for (int i = 4; i < N; i++) {
        scanf("%f", &arr[i]);
        if (arr[i] < min1) {
            min4 = min3;
            min3 = min2;
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2) {
            min4 = min3;
            min3 = min2;
            min2 = arr[i];
        }
        else if (arr[i] < min3)
        {
            min4 = min3;
            min3 = arr[i];
        }
        else if (arr[i] < min4) min4 = arr[i];
    }
    printf("Лучшие 4 бегуна пробежали за: %f, %f, %f, %f\n",min1,min2,min3,min4);
}

void r8() {
    int N;
    int arr[10];
    int x = 0;
    bool b = true;
    printf("Введите N:\n");
    scanf("%d", &N);
    while (N>0){
        if (arr[N % 10] == 100) {
            b = false;
        }
        if (b) {
            arr[N % 10] =100;
            x++;
        }
        b = true;
        N = N / 10;
    }
    printf("x=%d\n",x);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    bool go = true;
    int again = 1;
    //программирование. дз4
    while (again) {
        go = true;
        while (go)
        {
            printf("Введите номер задания (1- 8):\n ");
            scanf("%i", &num);
            switch (num)
            {
            case 1:
                r1();
                go = false;
                break;
            case 2:
                r2();
                go = false;
                break;
            case 31:
                r3_1();
                go = false;
                break;
            case 32:
                r3_1();
                go = false;
                break;
          
            case 41:
                r4_1();
                go = false;
                break;
            case 42:
                r4_2();
                go = false;
                break;
            case 5:
                r5();
                go = false;
                break;
            case 6:
                r6();
                go = false;
                break;
            case 7:
                r7();
                go = false;
                break;
            case 8:
                r8();
                go = false;
                break;
            default:
                printf("Данное число не доступно\n");
                break;
            }
        }
        printf("Чтобы закончить введите 0, а чтобы продолжить 1\n");
        scanf("%i", &again);
    }
    _getch();
}
