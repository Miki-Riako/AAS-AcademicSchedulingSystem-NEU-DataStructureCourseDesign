/*
12、教务排课表的二分图问题
【问题描述】
如果一个无向图的顶点集合可以分为两个互不相交的子集，并且图中每条边的两个顶点都属于两个不同的顶点集。则称该图为一个二分图。可以用一个二分图表示教师与课程的排课关系。假设每位教师可以胜任多门课程，但一个学期只能讲授一门课程，每学期的每门课程只需一位教师讲授。在二分图中，边数最多的匹配称为图的最大匹配。图的所有顶点都是某条匹配边的顶点，称这个匹配为完全匹配。
【设计要求】
设计基于二分图的匹配算法求解教务排课表程序。
（1）采用STL的邻接矩阵结构图等数据结构。
（2）应用基本运算，实现按照增广路径的算法求解教务排课表。
*/
// Academic Scheduling System
#include "aas.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AAS w;
    w.show();
    return a.exec();
}