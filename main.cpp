#include <iostream>
#include <vector>
#include <fstream>

using std::cout;
using std::vector;
using std::ifstream;
using std::string;

class Udacity {
public:
    void readFile() {
        ifstream my_file;
        my_file.open("");
        if (my_file) {
            string line;
            while (getline(my_file, line)) {
                cout << line << "\n";
            }
        }
    }
public:
    void prims() {
        // Declaring an int variable
        int a = 9;

        // Declaring a uninitialized string variable
        std::string b;

        b = "Here is a string";

        cout << a << "\n";
        cout << b << "\n";
    }

public:
    void vectors() {
        vector<int> v1 = {0, 1, 2};
        vector<int> v2{3, 4, 5};
        vector<int> v3;
        v3 = {6};
        cout << "Everything worked!" << "\n";
    }

public:
    void twoDVector() {
        vector<vector<int>> vector{
                {1, 2},
                {3, 4}
        };
        cout << "Great! A 2D vector has been created." << "\n";
    }

public:
    void autoInt() {
        auto i = 5;
        auto vector = {1, 2, 3};
        cout << "Variables declared and initialized without explicitly stating type!" << "\n";
    }

public:
    vector<vector<int>> initBoard() {
        vector<vector<int>> board = {
                {0, 1, 0, 0, 0, 0},
                {0, 1, 0, 0, 0, 0},
                {0, 1, 0, 0, 0, 0},
                {0, 1, 0, 0, 0, 0},
                {0, 0, 0, 0, 1, 0}
        };
        return board;
    }

public:
    void PrintBoard(const vector<vector<int>> board) {
        for (vector<int> b : board) {
            for (int i : b) {
                cout << i;
            }
            cout << "\n";
        }
    }


public:
    void loop() {
        for (int i = 0; i <= 5; i++) {
            cout << i << "\n";
        }
    }
};

int main() {
    Udacity u;
    vector<vector<int>> board = u.initBoard();
    u.PrintBoard(board);
}

