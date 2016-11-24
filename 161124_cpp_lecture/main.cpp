#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct node_struct
{
    double value;
    struct node_struct *prev;
    struct node_struct *next;
} node;

node *create(double kk)
{
    node *head;
    head = (node *)malloc(sizeof(node));
    head->value = kk;
    head->prev = NULL;
    head->next = NULL;
    return head;
}

void insert(double kk, node *head)
{
    while (head->next != NULL)
    {
        head = head->next;
    }
    node *nextele;
    nextele = (node *)malloc(sizeof(node));
    nextele->value = kk;
    nextele->next = NULL;
    nextele->prev = head;
    head->next = nextele;
}

void printall(node *head)
{
    while (head->next != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
    cout << head->value << endl;
}

int main()
{

    node *a;
    a = create(20.0);

    
    for (int i = 0; i < 10; i++)
    {
        insert(i, a);
    }
    insert(21.0, a);
    printall(a);
    system("pause");
}