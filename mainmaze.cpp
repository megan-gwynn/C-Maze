// Name: Megan Gagliardi
// Date: 3/30/2022
// App: A maze in c++
// Desc: App that generates a maze

#include "iostream"
#include "maze.cpp"

using namespace std;

const string BANNER = R"(
=============
A Maze in C++
=============

Instructions: enter [w] for walls and [p] for path.

)";

int main()
{
    // title
    system("title A Maze in C++ - Megan Gagliardi");

    // variables
    // maze size
    int size_x, size_y;
    bool not_numeric;

    // print banner
    cout << BANNER;

    // ask for the size x and y
    do
    {
        cout << "Enter the maze x,y dimensions: ";
        cin >> size_x >> size_y;
        not_numeric = cin.fail();
        
        // error if not numeric
        if(not_numeric) cout << "Error - size must be numeric\n";
        cin.clear();
        cin.sync();
    } while(not_numeric);

    // instantiate a new object
    Maze new_maze = Maze(size_x, size_y);

    // call the method from the object
    new_maze.input();

    // call print method
    new_maze.print();

    // exit prompt
    cout << "Press [enter] to exit: ";
    cin.get();
}