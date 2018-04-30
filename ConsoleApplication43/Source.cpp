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
		printf("������� ����� �������: ");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			//1.	� �������� ������ �������� ������ ������ ������ ��������� �� ���� ��������. ����� ��� �������� ��������.
			cin.get();
			char *string = "��� ����� �������";
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
			//2.	� �������� ������ ��������� ���������� ������ ��������, �������� � ��� ������
			cin.get();
			char *string = "��� ����� �������";
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
			printf("\n���-�� ������ ������� = %d\n", count);
		}
		break;
		case 4:
		{
			//4.	� �������� ������ ��������� ���������� ����, ���������� ������ �������� ������� �����. ������������� ���� ��������� �������.
			char *string = "� �������� ������ ��������� ���������� ���� ���������� ������ �������� ������� �����";
			printf("%s\n", string);
			int count = 0;
			for (int i = 0; i < strlen(string); i++)
			{
				if (*(string + i) >= '�' && *(string + i) <= '�')
					if (*(string + i + 1) == ' ' || *(string + i + 1) == '\0')
						count++;
			}
			printf("%d\n", count);
		}break;
		case 5:
		{
			//5.	�� �������� ������ �������� ������ ����, �������� � ��� ������. ������������� ���� ��������� �������.
			char string[] = "�� �������� ������ �������� ������ ����,�������� � ��� ������";
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
			//6.	��� ������ ��������. ����������, ������� ��������� �������� ����������� � ���. ������� �� �� �����
			char *string = { "����� ������ ����" };
			printf("������ - \"%s\"\n", string);
			int count = 0;
			int check = 0;
			printf("���������� �������: ");
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
			printf("\n���-�� ���������� �������� = %d\n", count);
		}
		break;
		case 7:
		{
		//7.	��� ������ ��������. ���������� ����� ������� ������������������ ������ ������ ���� �.
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
			printf("����� ������� ������������������ 'a' = %d\n", max);
		}
		break;
		case 8:
		{
			//8.	��� ������ ��������, ����� ������� ���� ������������� � ������������� ������. 
			//������� �� ����� ������� ��������, ������������� ������ ���� ������.
			char *string = "�� ���(����� ������ �������� ������ ����, �������� � ��� ��)����";
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
			//9.��� ������ ��������, ���������� �����. ���������� ���������� ��������� �������� � ��������� ���� � ������ ����� �������� � ���.
			char *string = "��� ������� ��������, ���������� �����";
			printf("%s\n", string);
			int up = 0, down = 0, total = 0;
			for (int i = 0; i < strlen(string); i++)
			{
				if (*(string + i) >= '�' && *(string + i) <= '�')
					down++;
				if (*(string + i) >= '�' && *(string + i) <= '�')
					up++;
				total++;
			}
			printf("\n�������� - %d (%2.2f%%)\n", down, (float)down * 100 / (float)total);
			printf("��������� - %d (%2.2f%%)\n", up, (float)up * 100 / (float)total);
		}
		break;
		case 10:
		{
			//10.	��� ������ ��������, ����� ������� ���� ���� ������������� � ���� ������������� ������. 
			//������� �� ����� ��� �������, ������������� ������ ���� ������
			char *string = "�� ���(����� ������ �������� ������ ����, �������� � ��� ��)����";
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
