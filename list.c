#define  _CRT_SECURE_NO_WARNINGS 1
#define YES 1
#define NO 0
#include"数据结构.h"
#include<stddef.h>
typedef struct element
{
	int a;
	char b;
}element;
typedef struct linklist
{
	element elem;
	L * next;
}*L;
int is_NULLlist(L list)
{
	if (list->next)
	{
		return NO;
	}
	else
	{
		return YES;
	}
}
void Destorylist(L list)
{
	L tmp;
	if (!(list->next))
		return;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp->next;
	}
}
int IsEmpty(List L)
{
	if (L->Next)
	{
		return NO;
	}
	else
	{
		return YES;
	}
}
List MakeEmpty(List L)
{
	Position p = L;
	if (IsEmpty(L) == YES)
	{
		return L;
	}
	while (p)
	{
		p->Element = 0;
		p = p->Next;
	}
}
int IsLast(Position P, List L)
{
	Position tmp;
	if (IsEmpty(L) == YES)
	{
		return NO;
	}
	while (tmp->Next)
	{
		tmp = tmp->Next;
	}
	if (tmp == P)
	{
		return YES;
	}
	else
	{
		return NO;
	}
}
Position Find(ElementType X, List L)
{
	Position p = L;
	if (IsEmpty(L) == YES)
	{
		return NULL;
	}
	while (p->Element != X && p->Next != NULL)
	{
		p = p->Next;
	}
	if (p->Element == X)
	{
		return p;
	}
	else
	{
		return NULL;
	}
}
int LocateFind(List L, ElementType X)
{
	Position p = L->Next;
	int i = 0;
	while (p && p->Element != X)
	{
		p = p->Next;
		i++;
	}
	if (p)
	{
		return i;
	}
	else
	{
		return 0;
	}
}
void Delete(ElementType X, List L)
{
	Position tmp;
	Position p = Find(X, L);
	if (p == NULL)
	{
		return;
	}
	if (IsLast(p, L) == NO)
	{
		tmp = p->Next;
		free(p);
		p = tmp;
	}
}
Position FindPrevious(ElementType X, List L)
{
	Position p;
	p = L;
	while (p->Next != NULL && p->Next->Element != X)
	{
		p = p->Next;
	}
	return p;
}
void Insert(ElementType X, List L, Position P)
{

}
int count(List L)
{
	int count = 0;
	if (IsEmpty(L) == YES)
	{
		return 0;
	}
	Position p = L->Next;
	count = 1;
	while (p)
	{
		p = p->Next;
		count++;
	}
	return count;
}
ElementType GetElem(List L, int i)
{
	Position p = L;
	while (i > 0 && p)
	{
		p = p->Next;
		i--;
	}
	return p->Element;
}
void LocateInsert(List L, int i, ElementType X)
{
	Position p = PositionFind(L, i - 1);
	if (!p)
	{
		return;
	}
	p->Next = malloc(sizeof(ElementType));
	p->Next->Element = X;
	if (p->Next->Next)
	p->Next->Next = PositionFind(L, i);
}

Position PositionFind(List L, int i)
{
	Position p = L;
	while (i > 0 && p)
	{
		p = p->Next;
	}
	return p;
}
void DeleteInt(List L, int i)
{
	Position p1 = PositionFind(L, i - 1);
	if (!p1->Next)
	{
		return;
	}
	Position p2 = p1->Next->Next;
	if (!p2)
	{
		free(p1->Next);
		p1->Next = NULL;
	}
	free(p1->Next);
	p1->Next = NULL;
	p1->Next = p2;
	
}
void CreateList_H(List L, int i)
{
	L->Next = NULL;
	Position tmp = L;
	while (i > 0)
	{
		Position p = malloc(sizeof(ElementType));
		p->Next = tmp;
		scanf("%d", &p->Element);
		tmp = p;
		i--;
	}
}
void InsertDoubleNode(List L, int i, ElementType X)
{
	
}
void UnionList(List L1, List L2)
{
	//通过循环比较插入
}

List UnionListTwo(List L1, List L2)
{
	//通过创建一个新表，分别对两个表设置指针，
	//从头开始比较两个数，较小的放入新表
	//直到一个表放完剩下的再全部放入
	//如果遇到相等的就取其中一个，地址再同时加一
	//前提要两个表都有序，且任意一个都不为空
}