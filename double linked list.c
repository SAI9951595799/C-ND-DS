#include<stdio.h>
struct node{
    struct node* prev_link;
	struct node* next_link;
	int data;
};
int main(){
	struct node ob1;
	ob1.prev_link=NULL;
	ob1.next_link=NULL;
	ob1.data=10;
	struct node ob2;
	ob2.prev_link=NULL;
	ob2.next_link=NULL;
	ob2.data=20;
	struct node ob3;
	ob3.prev_link=NULL;
	ob3.next_link=NULL;
	ob3.data=30;
	//forward links//
	ob1.next_link=&ob2;
	ob2.next_link=&ob3;
	//backward links//
	ob2.prev_link=&ob1;
	ob3.prev_link=&ob2;
	printf("%d\t",ob1.data);
	printf("%d\t",ob1.next_link->data);
	printf("%d\n",ob1.next_link->next_link->data);
	printf("%d\t",ob2.prev_link->data);
	printf("%d\t",ob2.data);
	printf("%d\n",ob2.next_link->data);
	printf("%d\t",ob3.prev_link->prev_link->data);
	printf("%d\t",ob3.prev_link->data);
	printf("%d\n",ob3.data);
	return 0;
}
