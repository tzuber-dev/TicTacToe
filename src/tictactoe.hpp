#include <string>



class TTTMechanics {
private:
    char board[9];
    char currentplayerid;


public:
    TTTMechanics();

    void resetgamefunction();
    void showboard() const;

    char getplayer() const;
    char retrievecell(int ind) const;

    bool move(int pos);
    bool checkifcelltaken(int pos) const;

    bool winnerofgame() const;

    bool draw1() const;

    void switchcurrentplayer();





};