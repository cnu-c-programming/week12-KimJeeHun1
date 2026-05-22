#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");
    char alphabet= 'a';
    int count;
    while(alphabet<='z'){
        count=0;
        while(feof(fp)!=0){
            if(fgets(fp)==alphabet)
                count++;
        }
        printf("%c: %d\n",alphabet, count);
    }

    fclose(fp);
}

