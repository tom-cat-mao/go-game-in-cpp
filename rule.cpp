#include "rule.h"
#include "ui_rule.h"

rule::rule(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::rule)
{
    ui->setupUi(this);
}

rule::~rule()
{
    delete ui;
}
