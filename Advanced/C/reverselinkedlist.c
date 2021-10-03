#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *head;

void insert(int ele){
    struct node *p = (struct node *)malloc(sizeof(struct node)), *q;
    p->info = ele;
    p->next = NULL;
    if(head == NULL)
        head = p;
    else{
        for(q=head; q->next!=NULL; q=q->next);
        q->next = p;
    }
}

void print(){
    struct node *p;
    for(p=head; p!=NULL; p=p->next)
        printf("%d  ",p->info);
    printf("\n");
}

void reverse_list(){
    struct node *p, *q, *r;
    if(head == NULL || head->next == NULL)
        return;
    p = r = NULL;
    q = head;
    while(q!=NULL){
        p = q->next;
        q->next = r;
        r = q;
        q = p;
    }
    head = r;
}


int main(){
    head = NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);

    printf("List before reversing: ");
    print();
    reverse_list();
    printf("List after reversing: ");
    print();
    return 0;
}
