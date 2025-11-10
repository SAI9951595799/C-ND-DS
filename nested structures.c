#include<stdio.h>
#include<string.h>
struct address{
	char add[50];
	int pin;
};
struct employee{
	char name[50];
	int empid;
	struct address a;
};
int main(){
	struct employee e;
    strcpy(e.name,"tanay");
    e.empid=100;
    strcpy(e.a.add,"yanam");
    e.a.pin=533464;
    printf("the name of employee is :%s\n",e.name);
    printf("the id of employee is :%d\n",e.empid);
    printf("the address of employee is :%s\n",e.a.add);
    printf("the pin code of address is :%d\n",e.a.pin);
    return 0;
}

