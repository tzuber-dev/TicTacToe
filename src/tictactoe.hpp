#include <string>



class TTTMechanics {
public:

    TTTMechanics();

    void RestartGamePhase();

    char GetPlayerLive() const;

    bool MoveUnit(int cellrange);

    bool WinnerGotten() const;

    char EquipWinner() const;


    bool Draw() const;


    bool DoneGame() const;


    std::string BoardString() const;


private:

    char boardgrid[9];

    char presentplayer;

    char victoriousplayer;

    void WinnerStatusLive();

    bool CellGone(int indx) const;




};