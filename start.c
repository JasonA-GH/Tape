#include <stdio.h>

#define STT_NONE 0
#define STT_IF 1

int state = STT_NONE;

//if statements
//loops
//memory

unsigned long long idx = 0;
void parse(char* string)
{
    switch(string[idx])
    {
        case '0'://START IF
        {
            state = STT_IF;
        }
        break;
        case '1':
        {
            state = STT_NONE;
        }
        break;
    }
}

int main(int argc, char* argv[])
{
    
    
    return 0;
}
