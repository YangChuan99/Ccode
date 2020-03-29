#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include <string.h>

struct Stu
{
	char name[20];
	int age;
	char tele[12];
	char sex[5];
};

int main()
{
	struct Stu s = {"ÕÅÈý", 20, "15212345678", "ÄÐ"};
	struct Stu* ps= &s;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%d\n", ps->tele);
	printf("%s\n", ps->sex);
	return 0;
}