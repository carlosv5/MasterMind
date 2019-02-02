#ifndef COLOR
#define COLOR

class Color
{
  private:
    Color();

  public:
    static const char black = 'B';
    static const char white = 'W';
    static const char red = 'R';
    static const char orange = 'O';
    static const char green = 'G';
    static const char yellow = 'Y';
    static const int numberOfColors = 6;

    static int randomNum();
    static void values(char *);
};

#endif