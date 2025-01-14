#include <stdio.h>
#include<string.h>
char** copySubstring(char *s, int start, int end) {
    static char *d[500];
    int j = 0;

    for (int i = start; i <= end; i++) {
        d[j] = &s[i]; 
        j++;
    }
    d[j] = '\0';
    return d;
}

int main() {
    char s[500];
    int start, end;

    printf("Enter the main string: ");
    gets(s);

    printf("Enter the start index: ");
    scanf("%d", &start);

    printf("Enter the end index: ");
    scanf("%d", &end);

    char **e = copySubstring(s, start, end);

    printf("Copied characters:\n");
    for (int i = 0; e[i] != NULL; i++) {
        printf("%c", *e[i]);
    }

    return 0;
}

