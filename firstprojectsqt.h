#pragma once

#include <QtWidgets/QWidget>
#include "ui_firstprojectsqt.h"

class FirstProjectsQt : public QWidget
{
    Q_OBJECT

public:
    FirstProjectsQt(QWidget *parent = nullptr);
    ~FirstProjectsQt();

private:
    Ui::FirstProjectsQtClass ui;
};
