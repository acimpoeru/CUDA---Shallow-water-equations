#pragma once

#include "types.h"

void initWaterSurface(int width, int height, vertex* heightmapvertices, float *wave);

void computeNext(int width, int height, vertex* watersurfacevertices, rgb* watersurfacecolors, int steps);

void destroyWaterSurface();
