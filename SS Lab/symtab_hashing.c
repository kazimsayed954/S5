#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 7

struct hashTable {
    char label[10];
    int addr;
} ht[LENGTH];

void addLabel()
{
    int addr;
    char label[10];
    printf("Enter label name: ");
    scanf("%s", label);
    printf("Enter label address: ");
    scanf("%d", &addr);
    int loc = addr % LENGTH;
    if (ht[loc].addr == -1)
    {
        ht[loc].addr = addr;
        strcpy(ht[loc].label, label);
    }
    else
        printf("Hashtable slot occupied\n");
}

void display()
{
    for (int i = 0; i < LENGTH; i++)
        if (ht[i].addr != -1)
            printf("%d %s\n", ht[i].addr, ht[i].label);
        else
            printf("0 0\n");
}

void search() 
{
    char label[10];
    int i, set=0, s;
    printf("Enter label name: ");
    scanf("%s", label);
    for (i=0; i<LENGTH; i++) {
        if (ht[i].addr) {
            if (!strcmp(ht[i].label, label)) {
                set=1;
                s = ht[i].addr;
            }
        }
    }
    if (set)
        printf("Label is present!\n");
    else printf("Label is not present!\n");
}

void main()
{
    for (int i = 0; i < LENGTH; i++) {
        ht[i].addr = -1;
        strcpy(ht[i].label, "");
    }
    int c = 0;
    while (c <= 3) {
        printf("\n1. Add label. \n2. View hashtable. \n3. Search for label. \nENTER CHOICE: ");
        scanf("%d", &c);
        switch (c) {
            case 1:
                addLabel();
                break;
            case 2:
                display();
                break;
            case 3: 
                search();
                break;
            default: exit(0);
        }
    }
}