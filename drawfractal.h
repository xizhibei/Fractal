#ifndef DRAWFRACTAL_H
#define DRAWFRACTAL_H

#include <QImage>
#include <QPainter>
#include <QPixmap>
#include <QDebug>

#include <vector>
#include <stack>
#include <math.h>

#define PI 3.1415926

using namespace std;

struct G
{
    char w;
    string val;
    G(char _w,string _val)
    {
        w = _w;
        val = _val;
    }
};

struct Node{
    QPointF p;
    float angle;
};

class DrawFractal
{
public:
    DrawFractal();
    string GetFS(vector<G> Gs,string iniF, int ITER_TIMES);
    QPixmap Draw_LS(int w,int h,string F,QPointF start,int len,float ini_angle,float angle);
    QPixmap Draw_IFS(int w,int h,float x,float y,float cx,float cy);
};

#endif // DRAWFRACTAL_H
