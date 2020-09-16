#include <stdio.h>
#include <string.h>

int main() {
char st[10];
char en[10];
char ch[100];
char add[10];
char result[100];
char esc[] = "esc";
int k = 0;
printf("Enter the characters :");
scanf("%s", ch);
printf("Enter a charcter that represents starting delimiter:");
scanf("%s", st);
printf("Enter a character that represents ending delimiter:");
scanf("%s", en);
printf("Enter a character that is to be stuffed:");
scanf("%s", add);

for (int i = 0; i <strlen(st); i++) {
result[k] = st[i];
k++;
}

for (int i = 0; i < strlen(ch); i++) {
int count = 0;
for (int j = i, l = 0; j < (i + strlen(st)); j++,l++) {
if (ch[j] == st[l]) {
count++;
} else {
break;
}
}
if (count == strlen(st)) {
for (int m = 0; m < strlen(add); m++) {
result[k] = add[m];
k++;
}
}
count = 0;
for (int j = i, l = 0; j < (i + strlen(en)); j++,l++) {
                        if (ch[j] == en[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(en)) {
                        for (int m = 0; m < strlen(add); m++) {
                                result[k] = add[m];
                                k++;
                        }
                }
count = 0;
for (int j = i, l = 0; j < (i + strlen(esc)); j++,l++) {
                        if (ch[j] == esc[l]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(esc)) {
                        for (int m = 0; m < strlen(add); m++) {
                                result[k] = add[m];
                                k++;
                        }
                }

result[k] = ch[i];
k++;
}

for (int i = 0; i <strlen(en); i++) {
                result[k] =en[i];
                k++;
        }

result[k] = '\0';

printf("\nAfter Stuffing: %s\n", result);
return 0;
}
