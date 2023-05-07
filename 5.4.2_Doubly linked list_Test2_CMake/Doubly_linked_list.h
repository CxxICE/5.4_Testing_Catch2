#pragma once

#include <iostream>

struct ListNode
{
public:
	ListNode(int value, ListNode *prev = nullptr, ListNode *next = nullptr);

public:
	int value;
	ListNode *prev;
	ListNode *next;
};


class List
{
public:
	List();

	virtual ~List();

	bool Empty();

	unsigned long Size();

	void PushFront(int value);

	void PushBack(int value);

	int PopFront();

	int PopBack();

	void Clear();

private:
	ListNode *extractPrev(ListNode *node);

private:
	ListNode *m_head;
	ListNode *m_tail;
	unsigned long m_size;
};
