#ifndef FREECELL_H
#define FREECELL_H
#include"game.h"
#include <QWidget>
class Pile;

class FreeCell: public Game
{
    Pile *freecell[4];
    Pile *foundation[4];
    Pile *tableau[8];
private:
   void CreatePile();
public:
    FreeCell(QWidget *par);
    ~FreeCell();
    void ReDeal(hardtype h=EASY);
    void OnFiledClick(Card *c);
    void OnDealtClick(Card *c);
    QString GameName(){return "FreeCell";}
};

#endif // FREECELL_H
