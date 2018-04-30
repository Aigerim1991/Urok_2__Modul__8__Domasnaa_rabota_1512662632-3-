#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;
int N;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			//1.	В заданной строке заменить каждый символ строки следующим по коду символом. Букву «я» заменить пробелом.
			cin.get();
			char *string = "Вся жизнь впереди";
			printf("%s\n", string);
			for (int i = 0; i < strlen(string); i++)
			{
				printf("%c", *(string + i) + 1);
			}
			printf("\n");
		}
		break;
		case 2:
		{
			//2.	В заданной строке посчитать количество разных символов, входящих в эту строку
			cin.get();
			char *string = "Вся жизнь впереди";
			printf("%s\n", string);
			int count = 0;
			int check = 0;
			for (int i = 0; i < strlen(string); i++)
			{
				check = 0;
				for (int j = 0; j < strlen(string); j++)
				{
					if ((*(string + i) == *(string + j)) && (i != j))
					{
						check = 1;
						break;
					}
				}
				if (check == 0)
				{
					count++;
					printf("%c ", *(string + i));
				}
			}
			printf("\nКол-во разных сиволов = %d\n", count);
		}
		break;
		case 4:
		{
			//4.	В заданной строке посчитать количество слов, содержащих только строчные русские буквы. Разделителями слов считаются пробелы.
			char *string = "В заданной строке посчитать количество слов содержащих только строчные русские буквы";
			printf("%s\n", string);
			int count = 0;
			for (int i = 0; i < strlen(string); i++)
			{
				if (*(string + i) >= 'а' && *(string + i) <= 'я')
					if (*(string + i + 1) == ' ' || *(string + i + 1) == '\0')
						count++;
			}
			printf("%d\n", count);
		}break;
		case 5:
		{
			//5.	По заданной строке получить массив слов, входящих в эту строку. Разделителями слов считаются пробелы.
			char string[] = "По заданной строке получить массив слов,входящих в эту строку";
			printf("%s\n", string);
			char *pt = strtok(string, " ,");
			while (pt != NULL)
			{
				printf("%s\n", pt);
				pt = strtok(NULL, " ,");
			}
		}
		break;
		case 6:
		{
			//6.	Дан массив символов. Подсчитать, сколько различных символов встречается в нем. Вывести их на экран
			char *string = { "Набор массив слов" };
			printf("Строка - \"%s\"\n", string);
			int count = 0;
			int check = 0;
			printf("Уникальные символы: ");
			for (int i = 0; i < strlen(string); i++)
			{
				check = 0;
				for (int j = 0; j < strlen(string); j++)
				{
					if ((*(string + i) == *(string + j)) && i != j)
						check++;
				}
				if (check == 0)
				{
					count++;
					printf("[%c]", *(string + i));
				}
			}
			printf("\nКол-во уникальных символов = %d\n", count);
		}
		break;
		case 7:
		{
		//7.	Дан массив символов. Подсчитать самую длинную последовательность подряд идущих букв а.
			char *string = { "takabaevaaigerimkanatovnaaaaa" };
			printf("%s\n", string);
			int kol = 0;
			int max = kol;
			for (int i = 0; i < strlen(string); i++)
			{
				if (*(string + i) == 'a')
				{
					kol++;
				}
				else
				{
					if (kol > max)
						max = kol;
					kol = 0;
				}
			}
			printf("Самая длинная последовательность 'a' = %d\n", max);
		}
		break;
		case 8:
		{
			//8.	Дан массив символов, среди которых есть открывающиеся и закрывающиеся скобки. 
			//Вывести на экран массивы символов, расположенные внутри этих скобок.
			char *string = "По зад(анной строке получить массив слов, входящих в эту ст)року";
			char *copystring = NULL;
			copystring = (char*)calloc(strlen(string), sizeof(char));
			printf("%s\n", string);
			int k = 0;
			for (int i = 0; i < strlen(string); i++)
			{
				if (*(string + i - 1) == '(')
					do
					{
						*(copystring + k) = *(string + i);
						i++;
						k++;
					} while (*(string + i) != ')');
			}
			char *pt = strtok(copystring, " ,");
			while (pt != NULL)
			{
				printf("%s\n", pt);
				pt = strtok(NULL, " ,");
			}
			printf("\n");
			free(copystring);
		}
		break;
		case 9:
		{
			//9.Дан массив символов, содержащий текст. Определить процентное отношение строчных и прописных букв к общему числу символов в нем.
			char *string = "Дан МАССсив символов, содержАщий ТЕКСТ";
			printf("%s\n", string);
			int up = 0, down = 0, total = 0;
			for (int i = 0; i < strlen(string); i++)
			{
				if (*(string + i) >= 'а' && *(string + i) <= 'я')
					down++;
				if (*(string + i) >= 'А' && *(string + i) <= 'Я')
					up++;
				total++;
			}
			printf("\nСтрочных - %d (%2.2f%%)\n", down, (float)down * 100 / (float)total);
			printf("Прописных - %d (%2.2f%%)\n", up, (float)up * 100 / (float)total);
		}
		break;
		case 10:
		{
			//10.	Дан массив символов, среди которых есть одна открывающаяся и одна закрывающаяся скобка. 
			//Вывести на экран все символы, расположенные внутри этих скобок
			char *string = "По зад(анной строке получить массив слов, входящих в эту ст)року";
			printf("%s\n", string);
			for (int i = 0; i < strlen(string); i++)
			{
				if (*(string + i - 1) == '(')
					do
					{
						printf("%c", *(string + i));
						i++;
					} while (*(string + i) != ')');
			}
			printf("\n");
		}
		break;
		break;
		default:
			break;
		}

	} while (N > 0);







}

char reverseString(char * arr)
{
	return 0;
}
