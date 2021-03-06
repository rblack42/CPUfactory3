// Copyright 2019 Roie R. Black
#pragma once
#include "LEDbar.h"


class LEDmatrix {
 public:
    LEDmatrix();
    void set_pos(int x, int y);
    void update(void);
    void draw(void);
 private:
    int x, y;
    ColorName bg_color;
    ColorName led_on_color;
    ColorName led_off_color;
    LEDbar bar1, bar2, bar3, bar4, bar5, bar6, bar7, bar8;
};
