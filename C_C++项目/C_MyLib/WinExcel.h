/*
XXXX_XXX <==> 宏定义
Xxxx_Xxxx <==> 全局变量，对象名
_Xxxx_Xxx <==> 类名
XxxxXxxxx <==> 局部变量
xxxxXxxx() <==> 函数
xxxxx_xxxx <==> typedef(数据类型)
*/
#ifndef WINEXCEL_H  // 如果 MY_HEADER_FILE_H 未定义
#define WINEXCEL_H  // 定义 MY_HEADER_FILE_H
/*-----------------------------------标准库------------------------------------*/
#include <stdio.h>
#include <stdbool.h>

/*-----------------------------------基础定义----------------------------------*/
#define EXCEL_MAX_LEN 300 //excel 每行最大长度
// 声明一个返回值为bool，参数为FILE *的函数指针类型
typedef bool (* funNamePtr1)(FILE *Fp);
typedef bool (* funNamePtr2)(char ReadExcel[][EXCEL_MAX_LEN]);
char Read_Excel[1000][EXCEL_MAX_LEN];

/*-----------------------------------函数说明----------------------------------*/
//取绝对值
extern int resAbsoluteVar(int Input);
//写入表格
extern bool excelWriteCsv(char FileName[],bool funNamePtr1(FILE *fp));
//读取表格
extern bool excelReadCsv(char FileName[],bool funNamePtr2(char ReadExcel[][EXCEL_MAX_LEN]));


#endif