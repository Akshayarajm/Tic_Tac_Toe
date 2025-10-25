#include<stdio.h>
#include<stdlib.h>
void print( char *);
char check(char *);
int main()
{
        char c;
        int pos, i;
        char name1[20], name2[20];
        printf("Enter player 1 :\n");
        scanf("%[^\n]", name1);
        getchar();
        printf("Enter player 2 :\n");
        scanf("%[^\n]", name2);

        printf("%s : ❌\n", name1);
        printf("%s : ⭕\n", name2);

        static char arr[9] = {0};
        char arr1[9] = {'1','2','3','4','5','6','7','8','9'};
        print(arr1);
        for(i = 0; i < 9; i++)
        {
                printf("Enter the position: \n");
                scanf("%d", &pos);
                if(arr[pos - 1] != 0)
                {
                        printf("Already typed value\n");
                        i--;
                        continue;
                }
                system("clear");
                if(i % 2)
                {
                        arr[pos - 1] = 'O';
                }
                else
                {
                        arr[pos - 1] = 'X';
                }
                print(arr);
                char b = check(arr);
                if(i >= 4 && b)
                {
                        if (b == 'X')
                                printf("%s won!\n", name1);
                        else
                                printf("%s won!\n", name2);
                        break;
                }

        }
        if(i == 9)
                printf("🤝 Draw\n");
}
void print(char arr[])
{
        char c;
        int n = 0;
        printf("________________________________________________\n");
        for(int i = 1; i <= 18; i++)
        {
                for(int j = 1; j <= 3; j++)
                {
                        if(i % 6 == 0)
                                printf("|_______________");
                        else if(i % 3 == 0)
                        {
                                if(arr[n] == 'X')
                                        printf("|\t❌\t");
                                else if(arr[n] == 'O')
                                        printf("|\t⭕\t");
                                else
                                        printf("|\t%c\t",arr[n]);
                                n++;
                        }
                        else
                                printf("|\t \t");
                }
                printf("|\n");


        }
}
char check(char * arr)
{
        if((arr[0] == arr[3] && arr[0] == arr[6]) ||(arr[0] == arr[4] && arr[0] == arr[8]) ||(arr[0] == arr[1]) && (arr[0] == arr[2]))
               return arr[0];
        else if((arr[1] == arr[4] && arr[1] == arr[7]) || (arr[3] == arr[4] && arr[3] == arr[5]))
                return arr[4];
        else if((arr[2] == arr[5] && arr[2] == arr[8]) ||(arr[2] == arr[4] && arr[2] == arr[6]))
                return arr[2];
        else if((arr[6] == arr[7] && arr[6] == arr[8]))
                return arr[6];
        else
                return 0;
}
