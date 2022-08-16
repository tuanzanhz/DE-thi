#include<stdio.h>
#include<string.h>

void upperCase(char s[100])
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
	char s[100];
	printf("nhap chuoi ki tu can chuyen thanh in hoa la :  ");
	gets(s);
	upperCase(s);	
}
