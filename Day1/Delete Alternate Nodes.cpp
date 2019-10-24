#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
};

Node *appendNode(Node *head, int data) {
	Node *newnode = new Node;
	newnode->next = NULL;
	newnode->data = data;
	if (head == NULL)  {
		head = newnode;
		return head;
	}
	Node *curr = head;
	while (curr->next!= NULL) curr = curr->next;
	curr->next = newnode;
	return head;
}

Node *deleteAlt(struct Node *head){
    // Code here
    int deleteit = 0;
    Node *cur = head, *prev = head;
    while (cur != NULL) {
        if (deleteit == 1) {
            if (cur->next != NULL) {
                Node *node = cur;
                cur = cur->next;
                prev->next = cur;
                delete node;
            }
            else {
                prev->next = NULL;
                delete cur;
            }
            deleteit = 0;
        }
        else {
	        deleteit = 1;
	        prev = cur;
	    	cur = cur->next;	
		}
    }
    return head;
}

void printList(Node *head) {
	while (head != NULL) {
		cout<<head->data<<"-->";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x)
{
	// Cpde here
	Node *curr = head, *cu = head;
	int length = 0;
	while (cu!=NULL) {
	    cu = cu->next;
	    length += 1;
	}
	int cur = 0;
	int mid = length/2;
	while (cur<mid) {
	    curr = curr->next;
	    cur += 1;
	}
	Node *node = curr;
	curr = curr->next;
	Node *newnode = new Node;
	node->next = newnode;
	newnode->next = curr;
	newnode->data = x;
	return head;
}

int main() {
	Node *head = NULL;
	head = appendNode(head, 10);
	head = appendNode(head, 20);
	head = appendNode(head, 30);
	head = appendNode(head, 40);
	head = appendNode(head, 50);
	printList(head);
	head = insertInMiddle(head, 9);
	printList(head);
}
