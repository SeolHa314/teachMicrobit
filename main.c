#include <stdio.h>


int main() {

    int value = 0;
    
    printf("input button value : ");
    scanf("%d", &value);            // 버튼 값을 읽어서 변수 value에 저장

    if(value < 256) {               // 256 이하가 아니면 넘어감
        printf("go front");
    } else if (value < 512) {       // 512 이하가 아니면 넘어감
        printf("go left");
    } else if (value < 768) {       // 768 이하가 아니면 넘어감
        printf("go right");
    } else if (value < 1024) {      // 1024 이하가 아니면 넘어가지만, 그런 값은 나오지 않기 때문에 상관 없음
        printf("go back");
    }
    return 0;
}