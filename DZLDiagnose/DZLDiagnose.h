#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DZLDiagnose.h"

class DZLDiagnose : public QMainWindow
{
    Q_OBJECT

public:
    DZLDiagnose(QWidget *parent = Q_NULLPTR);

private:
    Ui::DZLDiagnoseClass ui;
};
