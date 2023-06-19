/*B. A wooden log has to be cut into pieces of equal weight. Create a WOOD class with data members
TotalWeightKGS (double) and PieceWeightKGS (double). Include member functions getData() and putData() to set and
print the data members values. Create a PIECES class that has a data member NoOfPieces (int). Overload the
PIECES class inside WOOD class to find out the NoOfPieces value for the PIECES object. Include conversion
constructor in PIECES class to convert WOOD object to PIECES object. Create objects of WOOD and PIECES in main()
function and demonstrate this data conversion. */

#include <iostream>
using namespace std;

class Pieces;

class Wood {
private:
    double TotalWeightKGS;
    double PieceWeightKGS;

public:
    Wood(double totalWeight, double pieceWeight) {
        TotalWeightKGS = totalWeight;
        PieceWeightKGS = pieceWeight;
    }

    void getData() {
        cout << "Enter Total Weight (in KGS): ";
        cin >> TotalWeightKGS;
        cout << "Enter Piece Weight (in KGS): ";
        cin >> PieceWeightKGS;
    }

    void putData() {
        cout << "Total Weight (in KGS): " << TotalWeightKGS << endl;
        cout << "Piece Weight (in KGS): " << PieceWeightKGS << endl;
    }

    operator Pieces();
};

class Pieces {
private:
    int NoOfPieces;

public:
    Pieces() {
        NoOfPieces = 0;
    }

    class Wood;

    class Pieces {
    private:
        int NoOfPieces;

    public:
        Pieces() {
            NoOfPieces = 0;
        }

        Pieces(Wood& woodObj);
        
        void putData() {
            cout << "Number of Pieces: " << NoOfPieces << endl;
        }
    };

    class Wood {
    private:
        double TotalWeightKGS;
        double PieceWeightKGS;

    public:
        Wood(double totalWeight, double pieceWeight) {
            TotalWeightKGS = totalWeight;
            PieceWeightKGS = pieceWeight;
        }

        void getData() {
            cout << "Enter Total Weight (in KGS): ";
            cin >> TotalWeightKGS;
            cout << "Enter Piece Weight (in KGS): ";
            cin >> PieceWeightKGS;
        }

        void putData() {
            cout << "Total Weight (in KGS): " << TotalWeightKGS << endl;
            cout << "Piece Weight (in KGS): " << PieceWeightKGS << endl;
        }

        friend class Pieces;
        
        operator Pieces();
    };

    Wood::operator Pieces()  {
        return Pieces(*this);
    }

    Pieces::Pieces(Wood& woodObj) {
        NoOfPieces = (int)(woodObj.TotalWeightKGS / woodObj.PieceWeightKGS);
    }

    int main() {
        Wood woodObj(0.0, 0.0);
        Pieces piecesObj;

        cout << "Enter Wood Details:" << endl;
        woodObj.getData();

        piecesObj = woodObj;

        cout << endl << "Wood Details:" << endl;
        woodObj.putData();

        cout << endl << "Pieces Details:" << endl;
        piecesObj.putData();

        return 0;
    }

    void putData() {
        cout << "Number of Pieces: " << NoOfPieces << endl;
    }
};

Wood::operator Pieces()  {
    return Pieces(*this);
}

int main() {
    Wood woodObj(0.0, 0.0);
    Pieces piecesObj;

    cout << "Enter Wood Details:" << endl;
    woodObj.getData();

    piecesObj = woodObj;

    cout << endl << "Wood Details:" << endl;
    woodObj.putData();

    cout << endl << "Pieces Details:" << endl;
    piecesObj.putData();

    return 0;
}