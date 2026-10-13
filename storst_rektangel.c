#include "verktyg.h"

void storst_rektangel(double bredder[], double hojder[], int antal,
                       double *storsta_area_ut, int *index_ut) {
  *storsta_area_ut = bredder[0] * hojder[0];
  *index_ut = 0;

  for (int i = 1; i < antal; i++) {
    double area = bredder[i] * hojder[i];

    if (area > *storsta_area_ut) {
        *storsta_area_ut = area;
        *index_ut = i;
    }
  }

}

