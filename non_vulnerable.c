#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int int30c(unsigned int a, unsigned int b){
        unsigned int c = a + b;
        if(c < a){
                return 0;
        }
        return c;
}


int int32c(signed int a, signed int b){
        signed int c;
        if((a > 0 && (a > (INT_MAX - b))) || (a < 0 && (a < (INT_MAX - b)))){
                return 0;
        }
        c = a + b;
        return c;
}

char arr[40];
void dlc30c(char **ret){
        *ret = arr;
}

int exp33cand34c(char *p){
        if(p == NULL)
                return -1;
        int size = strlen(p);
        char *newstr = (char *)malloc(size + 1);
        if(newstr == NULL)
                return -1;
        strcpy(newstr, p);
        /* ... */
        free(newstr);
        return 0;
}

void arr38c(void){
        int len = 8;
        long array[len];
        /* ... */
        memset(array, 0, sizeof(array));
}

int somefunction(void){
        return 5;
}
int len = 40;

void arr39c(void ){
        int arr[len];
        int *p = arr;

        while(p < (arr + len)){
                *p = somefunction();
                p++;
        }

}

void mem30c(char *str1){
        if(len != 0){
                char *str2 = (char *)realloc(str1, len);
                if (str2 == NULL){
                        free(str1);
                        return;
                }
                free(str2);
        }
        else
                free(str1);

        
}

void mem35c(void){
        long *arr;
        arr = (long *)malloc(len * sizeof(long));
        /* ... */
        free(arr);
}

int str32c(char *str){
        char str2[len];
        int ret;

        if(str){ 
                strncpy(str2, str, sizeof(str2) - 1);
                str2[sizeof(str2) - 1] = '\0';
                ret = strlen(str2);
        } else {
                /* Handle null pointer */
                ;
        }

        return ret;
}

int main(int argc, char *argv[]){
        int a;
        char str[50] = "abc";
        char str2[] = "defgh";
        char str3[] = "Hello world";
        char *str4 = (char *)malloc(sizeof(char) * 8);
        strncpy(str4, "SDLC", 5);

        a = int30c(300, 34534534);
        a = int32c(300, 34534534);
        dlc30c((char **)&str);
        exp33cand34c(str2);
        arr38c();
        arr39c();
        mem35c();
        mem30c(str4);
        str32c(str3);

        return 0;
}
