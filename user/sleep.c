// Lab Xv6 and Unix utilities
// sleep.c
#include "kernel/types.h"
#include "user/user.h"
int
main(int argc, char *argv[])
{
    // 如果命令行参数不等于2个，则打印错误信息
    if (argc != 2)
    {
        write(2, "Usage: sleep time\n", strlen("Usage: sleep time\n"));
        exit(1);
    }
    // 把字符串型参数转换为整型
    int time = atoi(argv[1]);
    // 调用系统调用 sleep 函数，传入整型参数
    sleep(time);
    // 正常退出程序
    exit(0);
}

