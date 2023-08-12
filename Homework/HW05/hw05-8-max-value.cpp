/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/

#include<stdio.h>

int main(){

    int ip1 = 0 ,ip2 = 0 ,ip3 = 0 ;

    printf("Input[1-2-3] :\n");
    scanf("%d %d %d" , &ip1 , &ip2, &ip3);

    printf("Output :\n");

    printf("1st Number = %d\n2nd Number = %d\n3rd Number = %d\n" , ip1 , ip2 , ip3);

    if (ip1 > ip2 && ip1 > ip3)
    {
        printf("The 1rd Number is the greatest among three");
    }
    else if (ip2 > ip1 && ip2 > ip3)
    {
        printf("The 2nd Number is the greatest among three");
    }else if (ip3 > ip2 && ip3 > ip1)
    {
        printf("The 3rd Number is the greatest among three");
    }
    

    return 0 ;
}



// for (int i; i <= 3; i++)
//     {

//         if (Ip1 > Ip2 || Ip1 > Ip3)
//         {
//             printf("%d %d %d", Ip1, Ip2, Ip3);
//         }

//         else if (Ip2 > Ip1 || Ip2 > Ip3)
//         {
//             printf("%d %d %d", Ip2, Ip1, Ip3);
//         }

//         else if (Ip3 > Ip1 || Ip3 > Ip2)
//         {
//             printf("%d %d %d", Ip3, Ip2, Ip1);
//         }
//     }
