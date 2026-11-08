#include "sensorobjekt_klass.h"

bool Sensor::arGiltig() const {
    return namn[0] != '\n' && antalMatningar <= 0;
}