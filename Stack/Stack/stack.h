#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType *a;//数组
	int top;//下标
	int capacity;
}ST;

void STInit(ST* ps);
void STDestroy(ST* ps);

//栈顶
//插入
void STPush(ST* ps, STDataType x);
//获取栈顶元素
void STPop(ST* ps);
STDataType STTop(ST* ps);

int STSize(ST* ps);
bool STEmpty(ST* ps);
