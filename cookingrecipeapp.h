#ifndef COOKINGRECIPEAPP_H
#define COOKINGRECIPEAPP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CookingRecipeApp; }
QT_END_NAMESPACE

class CookingRecipeApp : public QMainWindow {
    Q_OBJECT

public:
    CookingRecipeApp(QWidget *parent = nullptr);
    ~CookingRecipeApp();

private:
    Ui::CookingRecipeApp *ui;
};
#endif
