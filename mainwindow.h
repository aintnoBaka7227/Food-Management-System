#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ingredient.h"
#include "recipe.h"

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


    void on_ingredientButton_clicked();

    void on_recipeButton_clicked();

private:
    Ui::MainWindow *ui;
    Ingredient *ptrIngredient;
    Recipe *ptrRecipe;

    QSqlDatabase database;
};
#endif // MAINWINDOW_H