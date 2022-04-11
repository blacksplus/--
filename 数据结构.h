#define  _CRT_SECURE_NO_WARNINGS 1
typedef int ElementType;

struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(ElementType X, List L);
int LocateFind(List L, ElementType X);
void Delete(ElementType X, List L);
Position FindPrevious(ElementType X, List L);
void Insert(ElementType X, List L, Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);
int count(List L);
Position PositionFind(List L, int i);
void DeleteInt(List L, int i);
void CreateList_H(List L, int i);  //头插法建表

struct Node
{
	ElementType Element;
	Position Next;
};





struct DoubleNode  //双向链表
{
	Position Pior, Next;
};
//双向链表的插入
void InsertDoubleNode(List L, int i, ElementType X);
//双向链表的删除
void DeleteDoubleNode(List L, int i);
//线性表的合并
void UnionList(List L1, List L2);
//有序列表双指针法
void UnionListTwo(List L1, List L2);