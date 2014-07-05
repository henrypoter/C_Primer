/*************************************************************************
	> File Name: 11_3_p_and_s.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 17:20:43 2014
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char * msg = "Don't be a fool! ";
    char * copy;
    
    copy = msg;
    printf("%s\n", copy);
    printf("msg = %s; &msg = %p; value = %p\n", msg, &msg, msg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

    return 0;
}
