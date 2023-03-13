#include "cookingrecipeapp.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CookingRecipeApp w;
    w.show();
    return a.exec();
}
