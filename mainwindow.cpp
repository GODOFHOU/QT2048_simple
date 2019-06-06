#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QKeyEvent>
#include<QDebug>
#include<QDialog>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    setFocusPolicy(Qt::StrongFocus);
    //on_pushButton_clicked();

    //shuchu();
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

void MainWindow::keyPressEvent(QKeyEvent *et)
{


                switch(et->key())
                {
                case Qt::Key_Up:
                    qDebug()<<"按了上键";
                    up();
                    //shuchu();
                   // suiji();
                  //  shuchu();
                    break;
                case Qt::Key_Down:
                    qDebug()<<"按了下键";
                    down();
                    //shuchu();
                    //suiji();
                    //shuchu();
                    break;
                case Qt::Key_Left:
                    qDebug()<<"按了左键";
                    left();
                   // shuchu();
                   // suiji();
                   // shuchu();
                    break;
                case Qt::Key_Right:
                    qDebug()<<"按下右键";
                    right();
                    //shuchu();
                    //suiji();
                   // shuchu();
                    break;
                default:
                    qDebug()<<"error：只允许按下‘上下左右键’！！";
                    break;

                }
                shuchu();
                suiji();
                shuchu();
                if(ifwin())
                {

                    QMessageBox msg(this);
                    msg.setText("Congralutions!  you are win!");
                    msg.exec();
                };
                if(ifover())
                {

                    QMessageBox msg(this);
                    msg.setText("You are Loser");
                    msg.exec();
                } ;
  }




void MainWindow::shuchu()
{
    for(int i=0;i<4;++i)
    {for(int j=0;j<4;++j)
    qDebug()<<a[i][j];
    ui->t00->setText(QString("%1").arg(a[0][0]));
    ui->t01->setText(QString("%1").arg(a[0][1]));
    ui->t02->setText(QString("%1").arg(a[0][2]));
    ui->t03->setText(QString("%1").arg(a[0][3]));
    ui->t10->setText(QString("%1").arg(a[1][0]));
    ui->t11->setText(QString("%1").arg(a[1][1]));
    ui->t12->setText(QString("%1").arg(a[1][2]));
    ui->t13->setText(QString("%1").arg(a[1][3]));
    ui->t20->setText(QString("%1").arg(a[2][0]));
    ui->t21->setText(QString("%1").arg(a[2][1]));
    ui->t22->setText(QString("%1").arg(a[2][2]));
    ui->t23->setText(QString("%1").arg(a[2][3]));
    ui->t30->setText(QString("%1").arg(a[3][0]));
    ui->t31->setText(QString("%1").arg(a[3][1]));
    ui->t32->setText(QString("%1").arg(a[3][2]));
    ui->t33->setText(QString("%1").arg(a[3][3]));
    }

}
void MainWindow::start()
{
    for(int i=0;i<4;++i)
        for(int j=0;j<4;++j)
          a[i][j]=0;
}

void MainWindow::on_pushButton_clicked()
{
    start();
    suiji();
    suiji();
    shuchu();
}
void MainWindow::suiji()
{
    int i=rand()%4;
    int j=rand()%4;
    if(a[i][j]==0)
        a[i][j]=2;
}
void MainWindow::up()
{
    int i,j,temp,num=1;
    for(i=3;i>=1;i--)
        for(j=0;j<4;j++)
            if(a[i-1][j]==0)
                {
                temp=a[i][j];
                a[i-1][j]=temp;
                a[i][j]=0;

                }
            else if(a[i-1][j]==a[i][j]&&num==1)
                {
                temp=a[i][j];
                a[i-1][j]=temp+a[i][j];
                a[i][j]=0;
                num--;
                }
            else
                {
                a[i-1][j]=a[i-1][j];
                a[i][j]=a[i][j];

            }
}

void MainWindow::down()
{
    int i,j,temp,num=1;
    for(i=0;i<=2;++i)
        for(j=0;j<4;++j)
            if(a[i+1][j]==0)
                {
                temp=a[i][j];
                a[i+1][j]=temp;
                a[i][j]=0;

                }
            else if(a[i+1][j]==a[i][j]&&num==1)
                {
                temp=a[i][j];
                a[i+1][j]=temp+a[i][j];
                a[i][j]=0;
                 num--;
                }
            else
                {
                a[i+1][j]=a[i+1][j];
                a[i][j]=a[i][j];

            }
}

void MainWindow::left()
{
    int i,j,temp,num=1;
    for(i=0;i<4;++i)
        for(j=3;j>=1;--j)
            if(a[i][j-1]==0)
                {
                temp=a[i][j];
                a[i][j-1]=temp;
                a[i][j]=0;

                }
            else if(a[i][j-1]==a[i][j] && num==1)
                {
                temp=a[i][j];
                a[i][j-1]=temp+a[i][j];
                a[i][j]=0;
                 num--;
                }
            else
                {
                a[i][j-1]=a[i][j-1];
                a[i][j]=a[i][j];

            }
}


void MainWindow::right()
{
    int i,j,temp,num=1;
    for(i=0;i<4;++i)
        for(j=0;j<=2;j++)
            if(a[i][j+1]==0)
                {
                temp=a[i][j];
                a[i][j+1]=temp;
                a[i][j]=0;

                }
            else if(a[i][j+1]==a[i][j]&&num==1)
                {
                temp=a[i][j];
                a[i][j+1]=temp+a[i][j];
                a[i][j]=0;
             num--;
                }
            else
                {
                a[i][j+1]=a[i][j+1];
                a[i][j]=a[i][j];

            }
}

bool MainWindow::ifwin()
{
    int win=0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        if(a[i][j]==64)
            win=1;

    return win;

}

bool MainWindow::ifover()
{
    int over=1;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        if(a[i][j]!=0)
            over=0;

    return over;

}

/*for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
        if(a[i][j]==0)
           {
            else if(a[i][j]==16)
            {

                QMessageBox msg(this);
                msg.setText("Congralutions!  you are win!");
                msg.exec();
            }

*/
