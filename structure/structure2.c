#include <stdio.h>

int main()
{
    int hr, min, sec;

    printf("Enter hr min and sec : ");
    scanf("%d%d%d", &hr, &min, &sec);

    printf("Before format : %d:%d:%d\n", hr, min, sec);

    // Convert into total seconds
    int tsec = hr * 3600 + min * 60 + sec;

    // Convert back into proper format
    hr = tsec / 3600;
    min = tsec % 3600;
    sec = min % 60;
    min = min / 60;

    printf("After format : %02d:%02d:%02d\n", hr, min, sec);

    return 0;
}