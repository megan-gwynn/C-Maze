#include "vector"
#include "iostream"

using namespace std;

class Maze
{
    private:
    // 2d vector of char
    vector <vector<char>> maze;
    int size_x, size_y;

    public:
    // constructor
    Maze(int size_x, int size_y)
    {
        this -> size_x = size_x;
        this -> size_y = size_y;

        // resize the 2d maze
        maze.resize(size_x, vector<char>(size_y, ' '));
    }

    void input()
    {
        // for each line
        for (int count_y = 0; count_y < size_y; count_y++)
        {
            // ask for w or p
            cout << "Enter " << size_x << " letters for line " << size_y << " : ";
            // ask for each char
            for (int count_x = 0; count_x < size_y; count_x++)
            {
                cin >> maze[count_x][count_y];
            }
            cin.sync();
        }
    }

    void print()
    {
        // go through each line
        for(int count_y = 0; count_y < size_y; count_y++)
        {
            // go through each letter
            for(int count_x = 0; count_x < size_x; count_x++)
            {
                // if p, print space
                if(maze[count_x][count_y] == 'p') cout << ' ';
                // if w, print wall
                else if(maze[count_x][count_y] == 'w') cout << (char)219;
            }
            cout << "\n";
        }
    }
};