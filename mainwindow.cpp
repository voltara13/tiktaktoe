#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	  , ui(new Ui::MainWindow)
{    
	ui->setupUi(this);
    setWindowTitle("Крестики-нолики");
	choiceWindow();
	update();
	buttonsArray[0] = ui->pushButton;
	buttonsArray[1] = ui->pushButton_2;
	buttonsArray[2] = ui->pushButton_3;
	buttonsArray[3] = ui->pushButton_4;
	buttonsArray[4] = ui->pushButton_5;
	buttonsArray[5] = ui->pushButton_6;
	buttonsArray[6] = ui->pushButton_7;
	buttonsArray[7] = ui->pushButton_8;
	buttonsArray[8] = ui->pushButton_9;
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::choiceWindow()
{
	QDialog* d = new QDialog();
	QVBoxLayout* vbox = new QVBoxLayout;
	QRadioButton* radioButton = new QRadioButton("С ботом", d);
	QRadioButton* radioButton2 = new QRadioButton("С игроком", d);
	QDialogButtonBox* buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok, d);
	connect(buttonBox, SIGNAL(accepted()), d, SLOT(accept()));
	d->setWindowTitle("Выберите с кем играть");
	d->setWindowFlags(Qt::Drawer);
	vbox->addWidget(radioButton);
	vbox->addWidget(radioButton2);
	vbox->addWidget(buttonBox);
	d->setLayout(vbox);
	bool result = d->exec();
	if (result == QDialog::Accepted)
	{
		if (radioButton->isChecked()) bot = true, loginWindow(true);
		if (radioButton2->isChecked()) bot = false, loginWindow(false);
	}
}

void MainWindow::loginWindow(bool bot)
{
	QDialog* d = new QDialog(this);
	QFormLayout* box = new QFormLayout;
	QLineEdit* lineEditName1 = new QLineEdit(d);
	QLineEdit* lineEditName2 = new QLineEdit();
	QDialogButtonBox* buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok);
	connect(buttonBox, SIGNAL(accepted()), d, SLOT(accept()));
	d->setWindowTitle(tr("Представьтесь:"));
	d->setWindowFlags(Qt::Drawer);
	box->addRow(tr("Первый игрок:"), lineEditName1);
	if (!bot) box->addRow(tr("Второй игрок:"), lineEditName2);
	box->addRow(buttonBox);
	d->setLayout(box);
	int result = d->exec();
	if (result == QDialog::Accepted)
	{
		player1 = lineEditName1->text();
		if (!bot) player2 = lineEditName2->text();
	}
}

void MainWindow::on_pushButton_clicked()
{
	playerTurn(0);
}

void MainWindow::on_pushButton_2_clicked()
{
	playerTurn(1);
}

void MainWindow::on_pushButton_3_clicked()
{
	playerTurn(2);
}

void MainWindow::on_pushButton_4_clicked()
{
	playerTurn(3);
}

void MainWindow::on_pushButton_5_clicked()
{
	playerTurn(4);
}

void MainWindow::on_pushButton_6_clicked()
{
	playerTurn(5);
}

void MainWindow::on_pushButton_7_clicked()
{
	playerTurn(6);
}

void MainWindow::on_pushButton_8_clicked()
{
	playerTurn(7);
}

void MainWindow::on_pushButton_9_clicked()
{
	playerTurn(8);
}

void MainWindow::on_pushButton_10_clicked()
{
	QFile file("file.dat");
	file.open(QIODevice::WriteOnly);
	QDataStream out(&file);
	for (int i = 0; i < 9; i++)
		out << clickedButton[i];
	out << player1
		<< player1Res
		<< player2
		<< player2Res
		<< clickCounter
		<< bot
		<< gameOver
		<< gameCounter;
}

void MainWindow::on_pushButton_11_clicked()
{
	QFile file("file.dat");
	file.open(QIODevice::ReadOnly);
	QDataStream in(&file);
	for (int i = 0; i < 9; i++)
	{
		in >> clickedButton[i];
		switch (clickedButton[i])
		{
		case 1:
			buttonsArray[i]->setText("X");
			break;
		case 2:
			buttonsArray[i]->setText("O");
			break;
		}
	}
	in	>> player1
		>> player1Res
		>> player2
		>> player2Res
		>> clickCounter
		>> bot
		>> gameOver
		>> gameCounter;
	update();
}

void MainWindow::on_pushButton_12_clicked()
{
	choiceWindow();
	gameCounter = 0;
	player1Res = 0;
	player2Res = 0;
	reset();
}

void MainWindow::update()
{
	ui->label->setText("Ходит");
	ui->label_2->setText(player1);
	ui->labelCountRes->setText(QString::number(gameCounter));
	ui->labelPlayer1Res->setText(QString::number(player1Res));
	ui->labelPlayer2Res->setText(QString::number(player2Res));
	ui->labelPlayer1->setText(player1 + QString(":"));
	if (!bot) ui->labelPlayer2->setText(player2 + QString(":"));
	else ui->labelPlayer2->setText("Бот:");
}

void MainWindow::reset()
{
	gameOver = false;
	clickCounter = 0;
	for (int i = 0; i < 9; i++)
	{
		clickedButton[i] = 0;
		buttonsArray[i]->setText("");
	}
	update();
}

void MainWindow::playerTurn(int turn)
{
	if (gameOver) reset();
	if (!clickedButton[turn])
	{
		clickCounter++;
		switch (clickCounter % 2)
		{
		case 1:
			if (!bot) ui->label_2->setText(player2);
			clickedButton[turn] = 1;
			buttonsArray[turn]->setText("X");
			gameOver = winner(1);
			if (!gameOver && bot)
			{
				srand(time(nullptr));
				int turn;
				while (true)
				{
					turn = rand() % 8;
					if (!clickedButton[turn]) break;
				}
				playerTurn(turn);
			}
			break;
		case 0:
			if (!bot) ui->label_2->setText(player1);
			clickedButton[turn] = 2;
			buttonsArray[turn]->setText("O");
			gameOver = winner(2);
			break;
		}
	}
}

bool MainWindow::winner(int player)
{
	bool flag = true;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (clickedButton[winCombinations[i][j]] != player)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			ui->label->setText("Победил");
            if (player == 1) ui->label_2->setText(player1), player1Res++;
			else
			{
				if (bot) ui->label_2->setText("бот");
				else ui->label_2->setText(player2);
                player2Res++;
			}
            gameCounter++;
			return true;
		}
		flag = true;
	}
	if (clickCounter == 9)
	{
		ui->label->setText("Победила");
		ui->label_2->setText("ничья");
        gameCounter++;
		return true;
	}
	return false;
}
