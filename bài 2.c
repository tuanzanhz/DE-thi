#include<stdio.h>
#include<string.h>
#define max 100

void upperCase(char s[])
{
	int i, a;
	a = strlen(s);
	for(i = 0;i < a; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i]-32;
		}
	}
	printf("%s", s);
}
  int main() {
	char s[max];
	printf("nhap chuoi ki tu can chuyen thanh in hoa la :  ");
	gets(s);
	upperCase(s);	
}