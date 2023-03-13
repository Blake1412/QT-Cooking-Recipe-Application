#include "cookingrecipeapp.h"
#include "./ui_cookingrecipeapp.h"

CookingRecipeApp::CookingRecipeApp(QWidget *parent) : QMainWindow(parent), ui(new Ui::CookingRecipeApp) {
    ui->setupUi(this);
}

CookingRecipeApp::~CookingRecipeApp() {
    delete ui;
}
