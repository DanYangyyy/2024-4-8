#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType *a;//����
	int top;//�±�
	int capacity;
}ST;

void STInit(ST* ps);
void STDestroy(ST* ps);

//ջ��
//����
void STPush(ST* ps, STDataType x);
//��ȡջ��Ԫ��
void STPop(ST* ps);
STDataType STTop(ST* ps);

int STSize(ST* ps);
bool STEmpty(ST* ps);
