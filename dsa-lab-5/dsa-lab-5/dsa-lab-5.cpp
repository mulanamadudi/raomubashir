//#include <iostream>
//using namespace std;
//class Node
//{
//public:
//	char data;
//	Node* next;
//	Node(char ch)
//	{
//		data = ch;
//		next = nullptr;
//	}
//};
//class Stack
//{
//public:
//	Node* top;
//	Stack()
//	{
//		top = nullptr;
//	}
//	void insert(string st)
//	{
//		if (top == nullptr)
//		{
//			top = new Node(st[0]);
//		}
//		int i = 1;
//		while (st[i] != '\0')
//		{
//			Node* temp = new Node(st[i]);
//			temp->next = top;
//			top = temp;
//		}
//	}
//	string reverseOrder(string st)
//	{
//		string tempstr = "";
//		int j = 0;
//		for (int i = st.length() - 1; i >= 0; i--)
//		{
//			tempstr[j++] = st[i];
//
//		}
//		return tempstr;
//	}
//	void push(char ch)
//	{
//		Node* temp = new Node(ch);
//		temp->next = top;
//		top = temp;
//	}
//	char pop()
//	{
//		return top->data;
//	}
//	string Rearrange()
//	{
//		Stack tempstack;
//		string tempstring2 = "",tempstring3="",tempstring4="";
//		
//		Node* temp = top;
//		while (temp->next != nullptr)
//		{
//			int i = 0;
//			if (temp->data == '/')
//			{
//				tempstack.push('/');
//				while (temp->data == '\\')
//				{
//					tempstring2[i] = temp->next->data;
//					temp = temp->next;
//				}
//				tempstring3=reverseOrder(tempstring2);
//				temp = temp->next;
//			}
//
//		}
//		tempstring4= reverseOrder(tempstring3);
//		return tempstring4;
//	}
//};
//
//
//int main()
//{
//	string a = "eolv";
//	Stack* st1 = new Stack();
//	st1->insert(a);
//	cout << st1->Rearrange();
//}