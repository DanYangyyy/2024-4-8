#include"stack.h"

void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;//top指向栈顶元素的下一个
	//ps->top = -1;//top指向栈顶元素
}
void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;

}

//栈顶
//插入
void STPush(ST* ps, STDataType x)
{
	assert(ps);
	//满了？就扩容
	if (ps->capacity == ps->top)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, newcapacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("relloc fail");
			return;
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
//删除
void STPop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));

	ps->top--;
}
STDataType STTop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));

	return ps->a[ps->top-1];
}
int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
