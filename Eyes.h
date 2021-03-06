#include "Camera.h"

class Eyes{
 private:
  Camera c;
  int diff(int x, int y);
  double findCentroids(int row, bitmap_image line, const int lineColour[3], const int colourError, const int COLUMNS);
 public:
  Eyes();
  Eyes(Camera c);
  void saveFrame();
  double getErrorLine(int r, int g, int b, int pres, int error);
  double getErrorCenter(int r, int g, int b, int pres, int error);
};
