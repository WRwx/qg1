#include "AQueue.h"
#include <stdlib.h>
#include <stdio.h>
int main() {
    int a;
    AQueue* Q;
    void* e;
    void(*foo)(void* q);
    InitAQueue(Q);
    printf("*****请选择****\n");
    printf("*****1.初始化队列****\n");
    printf("*****2.销毁队列****\n");
    printf("*****3.检测队列是否满****\n");
    printf("*****4.检查队列是否为空****\n");
    printf("*****5.查看队头元素****\n");
    printf("*****6.确定队列长度****\n");
    printf("*****7.入队****\n");
    printf("*****8.出队****\n");
    printf("*****9.清空队列****\n");
    printf("*****10.遍历****\n");
    printf("*****0.退出****\n");
    scanf("%d", &a);
    switch (a) {
    case 1:
        InitAQueue(Q);
        break;
    case 2:
        DestoryAQueue(Q);
        break;
    case 3:
        IsFullAQueue(Q);
        break;
    case 4:
        IsEmptyAQueue(Q);
        break;
    case 5:
        GetHeadAQueue(Q, e);
        break;
    case 6:
        LengthAQueue(Q);
        break;
    case 7:
        printf("请输入入队元素data");
        scanf("%d", &data);
        EnAQueue(Q, data);
        break;
    case 8:
        DeAQueue(Q);
        break;
    case 9:
        ClearAQueue(Q);
        break;
    case 10:
        TraverseAQueue(Q,q);
        break;
    case 0:
        break;
    }
    return 0;
}