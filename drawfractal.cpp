#include "drawfractal.h"

DrawFractal::DrawFractal()
{
}

string DrawFractal::GetFS(vector<G> Gs,string iniF, int ITER_TIMES)
{
    int gsize = Gs.size();
    string F = iniF;

    for(int i = 0;i < ITER_TIMES;i++)
    {
        string tmp = "";
        int size = F.size();
        for(int j = 0;j < size;j++)
            for(int g = 0;g < gsize;g++)
                if(Gs[g].w == F[j])
                    tmp += Gs[g].val;
                else
                    tmp += F[j];
        F = tmp;
    }
    return F;
}

QPixmap DrawFractal::Draw_LS(int w,int h,string F,QPointF start,int len,float ini_angle,float angle)
{
    QPixmap pixmap(w,h);
    pixmap.fill();
    QPainter painter(&pixmap);
    QPen pen; //»­±Ê
    pen.setColor(QColor(255,0,0));
    painter.setPen(pen); //Ìí¼Ó»­±Ê

    Node cur;
    cur.angle = ini_angle;
    cur.p = start;
    Node next;
    stack<Node> S;

    int size = F.size();

    for(int i = 0;i < size;i++)
    {
        switch(F[i])
        {
        case 'F':
        {
            next.p.setX( cur.p.x() + len * cos( cur.angle ) );
            next.p.setY( cur.p.y() + len * sin( cur.angle ) );
            next.angle = cur.angle;
            painter.drawLine(start,next.p);
            start = next.p;
            cur = next;
            //cvShowImage("Fractal",fractal);
            //cvWaitKey(10);
            break;
        }
        case '+':
        {
            cur.angle += angle;
            break;
        }
        case '-':
        {
            cur.angle -= angle;
            break;
        }
        case '[':
        {
            S.push(cur);
            break;
        }
        case ']':
        {
            cur = S.top();
            S.pop();
            start = cur.p;
            break;
        }
        }
    }

    QImage img = pixmap.toImage();
    img = img.mirrored();

    return QPixmap::fromImage(img);
}

QPixmap DrawFractal::Draw_IFS(int w, int h, float x, float y, float cx, float cy)
{
    QPixmap pixmap(w,h);
    pixmap.fill();
    QPainter painter(&pixmap);
    QPen pen; //»­±Ê
    pen.setColor(QColor(255,0,0));
    painter.setPen(pen); //Ìí¼Ó»­±Ê

    for(int i = 0;i < 1000;i++)
    {
        int m = (x + 2.0) * w / 4.0;
        int n = (y + 1.0) * h / 2.0;

        qDebug() << m << n;

        painter.drawPoint(m ,n);
        //painter.drawRect(m - 3,n - 3,m + 3,n + 3);

        float wx = x - cx;
        float wy = y - cy;

        float theta;

        if( wx > 0 )
            theta = atan( wy / wx );
        if( wx < 0 )
            theta = atan( wy / wx ) + PI;
        if( wx == 0 )
            theta = PI / 2;

        theta /= 2.0;

        float r = sqrt( wx * wx + wy * wy);
        float k = rand() % 100000 / 100000.0;
        if( k < 0.5 )
            r = sqrt( r );
        else
            r = -sqrt( r );

        x = r * cos( theta );
        y = r * sin( theta );
    }

    QImage img = pixmap.toImage();
    img = img.mirrored();

    return QPixmap::fromImage(img);//.scaled(w,h);
}




















