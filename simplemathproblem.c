#include <stdio.h>

int main()
{
int result;
int liczba;
int modresult;
int ii = 0;
int max = 0;

printf("Simple math problem.\n");
printf("For odd N = N *3 +1, and for even N = N /2. \n");
printf("Podaj liczbe poczatkowa: ");
scanf("%d",&liczba);
result = liczba;
max = liczba;
while(result != 1)
{
modresult = result % 2;
if(!modresult)
	result /= 2;
else
	result = result * 3 + 1;
printf("%d \n", result);
ii++;
if (max < result)
	max = result;
}
printf("\n");
printf("Liczba startowa %d \n", liczba);
printf("liczba operacji %d \n", ii);
printf("maksymalna liczba %d \n", max);

//system("pause");

return 0;	
}