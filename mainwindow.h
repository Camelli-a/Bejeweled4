#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <game.h>
#include <QMouseEvent>
#include <QLabel>
#include <QPushButton>
#include <QSoundEffect>
#include <QCursor>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>  // 修正为正确的头文件
#include "hoverbutton.h"
#include "rankdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    QPropertyAnimation *ShowBackground();  // 显示背景动画
    QPropertyAnimation *ShowTitle();      // 显示标题动画
    void setBkImg(QString path, QLabel *label);  // 设置背景图
    void setAdaptedImg(QString path, QLabel *label);  // 设置自适应图像
    ~MainWindow();
    void onReturnMainwindow();    // 返回主界面
    void SetButton();

private:
    Ui::MainWindow *ui;
    Game* gameDlg;
    QSoundEffect* sound;  // 背景音乐
    HoverButton *nextLevelButton;


private slots:
    void on_pushButton_clicked();  // 开始游戏按钮
   /* void on_pushButton_3_clicked();  // 中等难度按钮
    void on_pushButton_2_clicked();  // 简单难度按钮
    void on_pushButton_5_clicked();  // 其他按钮
    void on_pushButton_4_clicked();  // 困难难度按钮
    void on_pushButton_7_clicked();  // 水果模式按钮
    void on_pushButton_6_clicked();  // 蔬菜模式按钮
    void on_pushButton_8_clicked();  // 很困难难度按钮*/
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_ranking_clicked();
};

#endif // MAINWINDOW_H
