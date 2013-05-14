#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPointF>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect( ui->startpushButton,SIGNAL(clicked()),this,SLOT( Draw_LS() ) );
    connect( ui->drawIFSpushButton,SIGNAL(clicked()),this,SLOT( Draw_IFS() ) );
    connect( ui->actionSave_Parama,SIGNAL(triggered()),this,SLOT(save_param() ) );

    ui->initFlineEdit->setText("F++F++F");
    ui->unitlineEdit_1->setText("F");
    ui->vallineEdit_1->setText("F-F++F-F");
    ui->angledoubleSpinBox->setValue(60);
    ui->iniangledoubleSpinBox->setValue(0);
    ui->startxspinBox->setValue(100);
    ui->startyspinBox->setValue(100);
    ui->iterspinBox->setValue(3);
    ui->lenspinBox->setValue(9);

    ui->startxIFSlineEdit->setText("1.00");
    ui->startyIFSlineEdit->setText("1.00");
    ui->cxIFSlineEdit->setText("-0.77");
    ui->cyIFSlineEdit->setText("0.08");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Draw_LS()
{
    vector<G> Gs;
    QString unit_tmp[4] = {ui->unitlineEdit_1->text(),
                           ui->unitlineEdit_2->text(),
                           ui->unitlineEdit_3->text(),
                           ui->unitlineEdit_4->text()};
    QString val_tmp[4] = {ui->vallineEdit_1->text(),
                          ui->vallineEdit_2->text(),
                          ui->vallineEdit_3->text(),
                          ui->vallineEdit_4->text()};
    for(int i = 0;i < 4;i++)
    {
        if( unit_tmp[i] != "" && val_tmp[i] != "")
            Gs.push_back(G(unit_tmp[i].toAscii()[0],val_tmp[i].toStdString() ) );
    }
    ui->label->setPixmap(
                df.Draw_LS(800,
                           600,
                           df.GetFS(Gs,
                                    ui->initFlineEdit->text().toStdString(),
                                    ui->iterspinBox->value()
                                    ),
                           QPointF(ui->startxspinBox->value(),
                                   ui->startyspinBox->value()
                                   ),
                           ui->lenspinBox->value(),
                           ui->iniangledoubleSpinBox->value() / 180.0 * 3.1415936,
                           ui->angledoubleSpinBox->value() / 180.0 * 3.1415936
                           )
                );
}

void MainWindow::save_param()
{
    QFileDialog fd;
    QString filename = fd.getSaveFileName(this,"Save filename",QDir::homePath());

    FILE* file = freopen(filename.toStdString().c_str(),"a+",stdout);
    if(!file)
        qDebug() << "Error while open file " << filename;
    printf("%s %s %d %d %d %d %f %f\n",
           ui->vallineEdit_1->text().toStdString().c_str(),
           ui->initFlineEdit->text().toStdString().c_str(),
           ui->iterspinBox->value(),
           ui->startxspinBox->value(),
           ui->startyspinBox->value(),
           ui->lenspinBox->value(),
           ui->iniangledoubleSpinBox->value(),
           ui->angledoubleSpinBox->value()
           );
    fclose(file);

    //    File fd = freopen(filename.toStdString().c_str(),"r+",stdin);
    //    int type;
    //    while(scanf("%d",&type) == 1)
    //    {

    //    }
}


void MainWindow::Draw_IFS()
{
    ui->label->setPixmap(
                df.Draw_IFS(800,
                            600,
                            ui->startxIFSlineEdit->text().toFloat(),
                            ui->startyIFSlineEdit->text().toFloat(),
                            ui->cxIFSlineEdit->text().toFloat(),
                            ui->cyIFSlineEdit->text().toFloat())
                );
}



















