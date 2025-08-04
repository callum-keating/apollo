struct Cursor
{
    int x;
    int y;
};

namespace cursor
{
    Cursor cursor = {0, 0};
    int changePos(int x, int y)
    {
        cursor.x = x;
        cursor.y = y;
    }

}