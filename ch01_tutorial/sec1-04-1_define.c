//Symbolic Constants
#include <stdio.h>
// define is constants not variable
//define โค๊ดจะถูกเเทนที่ด้วยค่าที่กำหนดไว้ทันที ก่อน compiler ทำงาน --> ไม่มีการตรวจสอบชนิดข้อมูล, ไม่มีการจองพื้นที่ใน RAM
//var and const complier จะรู้ว่าเป็นตัวแปรหรือค่าคงที่ในระบบประมวลผลตามภาษานั้นๆ --> มีวคมาปลอดภัยถ้าข้อมูลไม่ตรง data type จะเเจ้ง error ทำที, 
#define LOWER 0 
#define UPPER 300
#define STEP 30
/* print Fahrenheit-Celsius table  */
int main(){
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("%3d,%6.1f\n",fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}