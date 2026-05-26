#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");
    for(char i='a'; i<='z'; i++){
        int num=0;
        char ch;
        rewind(fp);
        while((ch=fgetc(fp))!=EOF){
            if(ch==i)
                num++;
        }
        printf("%c: %d\n",i,num);
    }

    fclose(fp);
}

