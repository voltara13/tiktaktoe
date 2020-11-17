#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDialog>
#include <QRadioButton>
#include <QDialogButtonBox>
#include <QFormLayout>
#include <QLineEdit>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void choiceWindow();
    void loginWindow(bool bot);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_10_clicked();
    void reset();
    void update();
    void playerTurn(int player);
    bool winner(int player);

private:
    Ui::MainWindow *ui;
    bool gameOver = false, bot = true;
    QString player1 = "Игрок 1", player2 = "Бот";
    QPushButton *buttonsArray[9];
    int clickCounter = 0;
    int gameCounter = 0;
    int player1Res = 0;
    int player2Res = 0;
    int clickedButton[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int winCombinations[8][3] = {
        {0, 1, 2},
        {0, 3, 6},
        {6, 7, 8},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6},
        {1, 4, 7},
        {3, 4, 5}
    };
};
#endif // MAINWINDOW_H
