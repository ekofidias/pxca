/*
The MIT License (MIT)

This file is part of the Phoenard Arduino library
Copyright (c) 2014 Phoenard

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#include "PHNLabel.h"

PHN_Label::PHN_Label() {
  setColor(CONTENT, color(FOREGROUND));
  drawFrame = false;
}

void PHN_Label::setTextRaw(const char* text, int textLen) {
  bool lenChange = textLen != this->textLength();
  this->textBuff.set(text, textLen + 1);
  if (lenChange) {
    invalidate();
  } else {
    quickDraw = true;
  }
}

void PHN_Label::update() {
  // If text was changed without impacting length, quickly redraw it
  if (!invalidated && quickDraw) {
    quickDraw = false;
    display.setTextColor(color(CONTENT), color(BACKGROUND));
    display.drawStringMiddle(x+1, y+1, width-2, height-2, (char*) textBuff.data);
  }
}

void PHN_Label::draw() {
  // Draw the background shape
  display.fillRect(x, y, width, height, color(BACKGROUND));
  if (drawFrame) {
    display.drawRect(x, y, width, height, color(FRAME));
  }
  
  // Draw the text
  display.setTextColor(color(CONTENT));
  display.drawStringMiddle(x+1, y+1, width-2, height-2, (char*) textBuff.data);
  quickDraw = false;
}