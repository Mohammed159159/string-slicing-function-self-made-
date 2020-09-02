#include<stdio.h>

char* slice_str(char* str, int s, int e);

int main() {

    char st[1000];
    int n1;
    int n2;

    printf("\n Enter the starting Number(0 is the most initial): ");
    scanf("%d",&n1);
    printf("\n Enter the finishing Number: ");
    scanf("%d",&n2);
    printf("\n Enter a string to slice it: ");
    scanf("%s", st);

    if (n2 >= strlen(st))
    {
        printf("Invalid");
        return 1;
    }

    printf("\n\n      Sliced String: %s", slice_str(st, n1, n2));
}

char* slice_str(char* str, int s, int e) {

    char st[1000] = " ";
    char* str1 = st;
    for (int i = s; i < e; i++)
        str1[i] = str[i];

    return str1;

}
