# Maksym
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//Перше, що потрапио мені увічі - це відсутність табуляції(пробілів).
int main(int argc, string argv[])
{
if (argc != 2)//я звичайно вибачаюсь,але чому саме число "2"?Потрібно пояснити ,що означає число "2",не для кожної особи воно є зрозумілим.
{
printf("Try again.");
return 1;
}

string key = argv[1];
unsigned long keyCount = strlen(key);

for(int k = 0; k < keyCount; k++) 
{
if (!isalpha(key[k]))
{
printf("Try again.");
return 1;
}
}

string text = GetString();
if(text == NULL) 
{
printf("Try again.");
return 1;
}

for (int i = 0, n = 0; i < strlen(text); i++) 
{
if (isalpha(text[i])) 
{
if (isupper(text[i]))
printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount]))-'A')%26) % 26) + 'A'));
if (islower(text[i]))
printf("%c", ((((text[i] - 'a') + ((tolower(key[n++%keyCount]))-'a')%26) % 26) + 'a'));
} 
else
printf("%c", text[i]);
}

printf("\n");
return 0;
}
