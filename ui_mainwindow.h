/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QPushButton *pushButton_9;
    QFrame *line_7;
    QPushButton *pushButton_5;
    QFrame *line_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QFrame *line_9;
    QPushButton *pushButton;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_8;
    QFrame *line_12;
    QPushButton *pushButton_2;
    QFrame *line_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QFrame *line_11;
    QFrame *line_5;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelCount;
    QLabel *labelCountRes;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPlayer1;
    QLabel *labelPlayer1Res;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPlayer2;
    QLabel *labelPlayer2Res;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(755, 350);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(720, 340));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 741, 336));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(50);
        pushButton_9->setFont(font);
        pushButton_9->setFlat(true);

        gridLayout->addWidget(pushButton_9, 4, 4, 1, 1);

        line_7 = new QFrame(layoutWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setMinimumSize(QSize(10, 10));
        line_7->setLineWidth(10);
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 4, 1, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setFont(font);
        pushButton_5->setFlat(true);

        gridLayout->addWidget(pushButton_5, 2, 2, 1, 1);

        line_6 = new QFrame(layoutWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setMinimumSize(QSize(10, 10));
        line_6->setLineWidth(10);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setFont(font);
        pushButton_4->setFlat(true);

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setFont(font);
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 4, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setFont(font);
        pushButton_7->setFlat(true);

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        line_9 = new QFrame(layoutWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setMinimumSize(QSize(10, 10));
        line_9->setLineWidth(10);
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 0, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setFont(font);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMinimumSize(QSize(10, 10));
        line_2->setLineWidth(10);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_2, 5, 2, 1, 1);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMinimumSize(QSize(10, 10));
        line_3->setLineWidth(10);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 3, 4, 1, 1);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setMinimumSize(QSize(10, 10));
        line_4->setLineWidth(10);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 1, 4, 1, 1);

        line_8 = new QFrame(layoutWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setMinimumSize(QSize(10, 10));
        line_8->setLineWidth(10);
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 2, 1, 1, 1);

        line_12 = new QFrame(layoutWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setMinimumSize(QSize(10, 10));
        line_12->setLineWidth(10);
        line_12->setFrameShape(QFrame::VLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 4, 3, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setFont(font);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        line_10 = new QFrame(layoutWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setMinimumSize(QSize(10, 10));
        line_10->setLineWidth(10);
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 0, 3, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setFont(font);
        pushButton_8->setFlat(true);

        gridLayout->addWidget(pushButton_8, 4, 2, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setFont(font);
        pushButton_6->setFlat(true);

        gridLayout->addWidget(pushButton_6, 2, 4, 1, 1);

        line_11 = new QFrame(layoutWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setMinimumSize(QSize(10, 10));
        line_11->setLineWidth(10);
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 2, 3, 1, 1);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setMinimumSize(QSize(10, 10));
        line_5->setLineWidth(10);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 1, 2, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(10, 10));
        line->setLineWidth(10);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        verticalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        verticalLayout->addWidget(pushButton_12);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelCount = new QLabel(layoutWidget);
        labelCount->setObjectName(QString::fromUtf8("labelCount"));

        horizontalLayout_4->addWidget(labelCount);

        labelCountRes = new QLabel(layoutWidget);
        labelCountRes->setObjectName(QString::fromUtf8("labelCountRes"));

        horizontalLayout_4->addWidget(labelCountRes);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelPlayer1 = new QLabel(layoutWidget);
        labelPlayer1->setObjectName(QString::fromUtf8("labelPlayer1"));

        horizontalLayout->addWidget(labelPlayer1);

        labelPlayer1Res = new QLabel(layoutWidget);
        labelPlayer1Res->setObjectName(QString::fromUtf8("labelPlayer1Res"));

        horizontalLayout->addWidget(labelPlayer1Res);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelPlayer2 = new QLabel(layoutWidget);
        labelPlayer2->setObjectName(QString::fromUtf8("labelPlayer2"));

        horizontalLayout_3->addWidget(labelPlayer2);

        labelPlayer2Res = new QLabel(layoutWidget);
        labelPlayer2Res->setObjectName(QString::fromUtf8("labelPlayer2Res"));

        horizontalLayout_3->addWidget(labelPlayer2Res);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_7);
        QWidget::setTabOrder(pushButton_7, pushButton_8);
        QWidget::setTabOrder(pushButton_8, pushButton_9);
        QWidget::setTabOrder(pushButton_9, pushButton_10);
        QWidget::setTabOrder(pushButton_10, pushButton_11);
        QWidget::setTabOrder(pushButton_11, pushButton_12);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_9->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_7->setText(QString());
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\245\320\276\320\264\320\270\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\270\320\263\321\200\320\276\320\272 1", nullptr));
        pushButton_2->setText(QString());
        pushButton_8->setText(QString());
        pushButton_6->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201 \320\270\320\263\321\200\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        labelCount->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\320\263\321\200:", nullptr));
        labelCountRes->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelPlayer1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelPlayer1Res->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelPlayer2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelPlayer2Res->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
