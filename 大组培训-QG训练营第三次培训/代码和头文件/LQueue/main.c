#include "LQueue.h"
#include <stdlib.h>
#include <stdio.h>
int main() {
    int a;
    LQueue* Q;
    void* e;
    void(*foo)(void* q);
    InitLQueue(Q);
    printf("*****请选择****\n");
    printf("*****1.初始化队列****\n");
    printf("*****2.销毁队列****\n");
    printf("*****3.检查队列是否为空****\n");
    printf("*****4.查看队头元素****\n");
    printf("*****5.确定队列长度****\n");
    printf("*****6.入队****\n");
    printf("*****7.出队****\n");
    printf("*****8.清空队列****\n");
    printf("*****9.遍历****\n");
    printf("*****0.退出****\n");
    scanf("%d", &a);
    switch (a) {
    case 1:
        InitLQueue(Q);
        break;
    case 2:
        DestoryLQueue(Q);
        break;
    case 3:
        IsEmptyLQueue(Q);
        break;
    case 4:
        GetHeadLQueue(Q, e);
        break;
    case 5:
        LengthLQueue(Q);
        break;
    case 6:
        printf("请输入入队元素data");
        scanf("%d", &data);
        EnLQueue(Q, data);
        break;
    case 7:
        DeLQueue(Q);
        break;
    case 8:
        ClearLQueue(Q);
        break;
    case 9:
        TraverseLQueue(Q, q);
        break;
    case 0:
        break;
    }
    return 0;
}
