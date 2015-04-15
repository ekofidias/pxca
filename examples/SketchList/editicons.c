#include <avr/io.h>
#include <avr/pgmspace.h> 
 
#ifndef EDITICONS_H
#define EDITICONS_H

static unsigned char edit_icon_reset[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x1F, 0xFC, 0x00, 0x03, 0xC0, 0x40, 
  0x7F, 0xFF, 0x00, 0x03, 0xC0, 0x60, 0xFF, 0xFF, 
  0xC0, 0x03, 0xC0, 0x71, 0xFF, 0xFF, 0xE0, 0x03, 
  0xC0, 0x7B, 0xFF, 0x1F, 0xF0, 0x03, 0xC0, 0x7F, 
  0xFC, 0x03, 0xF8, 0x03, 0xC0, 0x7F, 0xF8, 0x01, 
  0xFC, 0x03, 0xC0, 0x7F, 0xF0, 0x00, 0xFC, 0x03, 
  0xC0, 0x7F, 0xE0, 0x00, 0x7E, 0x03, 0xC0, 0x7F, 
  0xC0, 0x00, 0x3E, 0x03, 0xC0, 0x7F, 0xE0, 0x00, 
  0x3E, 0x03, 0xC0, 0x7F, 0xF0, 0x00, 0x1F, 0x03, 
  0xC0, 0x7F, 0xF8, 0x00, 0x1F, 0x03, 0xC0, 0x7F, 
  0xFC, 0x00, 0x0F, 0x83, 0xC0, 0x00, 0x00, 0x00, 
  0x0F, 0x83, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0x83, 
  0xC0, 0x00, 0x00, 0x00, 0x0F, 0x83, 0xC0, 0x00, 
  0x00, 0x00, 0x0F, 0x83, 0xC0, 0x00, 0x00, 0x00, 
  0x1F, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x3F, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x3E, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x7E, 0x03, 0xC0, 0x07, 0x00, 0x00, 0x7E, 0x03, 
  0xC0, 0x0F, 0x80, 0x00, 0xFC, 0x03, 0xC0, 0x0F, 
  0xC0, 0x03, 0xF8, 0x03, 0xC0, 0x0F, 0xF8, 0x0F, 
  0xF0, 0x03, 0xC0, 0x07, 0xFF, 0xFF, 0xF0, 0x03, 
  0xC0, 0x03, 0xFF, 0xFF, 0xC0, 0x03, 0xC0, 0x01, 
  0xFF, 0xFF, 0x80, 0x03, 0xC0, 0x00, 0x3F, 0xFE, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xF0, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char edit_icon_restore[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x3F, 0xF8, 0x00, 0x03, 0xC0, 0x00, 
  0xFF, 0xFE, 0x02, 0x03, 0xC0, 0x03, 0xFF, 0xFF, 
  0x06, 0x03, 0xC0, 0x07, 0xFF, 0xFF, 0x8E, 0x03, 
  0xC0, 0x0F, 0xF8, 0xFF, 0xDE, 0x03, 0xC0, 0x1F, 
  0xC0, 0x3F, 0xFE, 0x03, 0xC0, 0x3F, 0x80, 0x1F, 
  0xFE, 0x03, 0xC0, 0x3F, 0x00, 0x0F, 0xFE, 0x03, 
  0xC0, 0x7E, 0x00, 0x07, 0xFE, 0x03, 0xC0, 0x7C, 
  0x00, 0x03, 0xFE, 0x03, 0xC0, 0x7C, 0x00, 0x07, 
  0xFE, 0x03, 0xC0, 0xF8, 0x00, 0x0F, 0xFE, 0x03, 
  0xC0, 0xF8, 0x00, 0x1F, 0xFE, 0x03, 0xC1, 0xF0, 
  0x00, 0x3F, 0xFE, 0x03, 0xC1, 0xF0, 0x00, 0x00, 
  0x00, 0x03, 0xC1, 0xF0, 0x00, 0x00, 0x00, 0x03, 
  0xC1, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xC1, 0xF0, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0xF8, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0xF8, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x7C, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x7E, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x7E, 0x00, 0x00, 0xE0, 0x03, 
  0xC0, 0x3F, 0x00, 0x01, 0xF0, 0x03, 0xC0, 0x1F, 
  0xC0, 0x03, 0xF0, 0x03, 0xC0, 0x0F, 0xF0, 0x1F, 
  0xF0, 0x03, 0xC0, 0x0F, 0xFF, 0xFF, 0xE0, 0x03, 
  0xC0, 0x03, 0xFF, 0xFF, 0xC0, 0x03, 0xC0, 0x01, 
  0xFF, 0xFF, 0x80, 0x03, 0xC0, 0x00, 0x7F, 0xFC, 
  0x00, 0x03, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char edit_icon_delete[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 
  0x00, 0x03, 0xC0, 0x00, 0x1F, 0xF8, 0x00, 0x03, 
  0xC0, 0x00, 0x3F, 0xFC, 0x00, 0x03, 0xC0, 0x00, 
  0x38, 0x1C, 0x00, 0x03, 0xC0, 0x00, 0x70, 0x0E, 
  0x00, 0x03, 0xC0, 0x00, 0x70, 0x0E, 0x00, 0x03, 
  0xC0, 0x00, 0x70, 0x0E, 0x00, 0x03, 0xC0, 0x1F, 
  0xFF, 0xFF, 0xF8, 0x03, 0xC0, 0x1F, 0xFF, 0xFF, 
  0xF8, 0x03, 0xC0, 0x3F, 0xFF, 0xFF, 0xFC, 0x03, 
  0xC0, 0x3F, 0xFF, 0xFF, 0xFC, 0x03, 0xC0, 0x0E, 
  0x03, 0xC0, 0x70, 0x03, 0xC0, 0x0E, 0x00, 0x00, 
  0x70, 0x03, 0xC0, 0x0E, 0x00, 0x00, 0x70, 0x03, 
  0xC0, 0x0E, 0x31, 0x8C, 0x70, 0x03, 0xC0, 0x0E, 
  0x31, 0x8C, 0x70, 0x03, 0xC0, 0x0E, 0x31, 0x8C, 
  0x70, 0x03, 0xC0, 0x0E, 0x31, 0x8C, 0x70, 0x03, 
  0xC0, 0x0E, 0x31, 0x8C, 0x70, 0x03, 0xC0, 0x0E, 
  0x31, 0x8C, 0x70, 0x03, 0xC0, 0x0E, 0x31, 0x8C, 
  0x70, 0x03, 0xC0, 0x0E, 0x31, 0x8C, 0x70, 0x03, 
  0xC0, 0x0E, 0x31, 0x8C, 0x70, 0x03, 0xC0, 0x0E, 
  0x31, 0x8C, 0x70, 0x03, 0xC0, 0x0E, 0x31, 0x8C, 
  0x70, 0x03, 0xC0, 0x0E, 0x31, 0x8C, 0x70, 0x03, 
  0xC0, 0x0E, 0x31, 0x8C, 0x70, 0x03, 0xC0, 0x0E, 
  0x31, 0x8C, 0x70, 0x03, 0xC0, 0x0E, 0x31, 0x8C, 
  0x70, 0x03, 0xC0, 0x0E, 0x31, 0x8C, 0x70, 0x03, 
  0xC0, 0x0E, 0x00, 0x00, 0x70, 0x03, 0xC0, 0x0E, 
  0x00, 0x00, 0x70, 0x03, 0xC0, 0x0F, 0x00, 0x00, 
  0xF0, 0x03, 0xC0, 0x07, 0xFF, 0xFF, 0xE0, 0x03, 
  0xC0, 0x03, 0xFF, 0xFF, 0xC0, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char edit_icon_charup[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0xF8, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0xC4, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0xC4, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0xC4, 0x00, 0x00, 0x00, 0x03, 0xC0, 0xF8, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0xC4, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0xC2, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0xC2, 0x00, 0x00, 0x00, 0x03, 0xC0, 0xC6, 
  0x01, 0x80, 0x00, 0x03, 0xC0, 0xFC, 0x03, 0xC0, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x0F, 0xF0, 0x00, 0x03, 0xC0, 0x00, 
  0x1F, 0xF8, 0x00, 0x03, 0xC0, 0x00, 0x3F, 0xFC, 
  0x00, 0x03, 0xC0, 0x00, 0x77, 0xEE, 0x00, 0x03, 
  0xC0, 0x00, 0xE7, 0xE7, 0x00, 0x03, 0xC0, 0x00, 
  0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 
  0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 
  0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 
  0x07, 0xE0, 0x00, 0x03, 0xC0, 0x10, 0x07, 0xE0, 
  0x00, 0x03, 0xC0, 0x28, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x28, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x2C, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x44, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x44, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x82, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x82, 0x00, 0x00, 
  0x00, 0x03, 0xC1, 0x83, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char edit_icon_chardown[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x7C, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x62, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x62, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x62, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x7C, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x62, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x61, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x61, 0x03, 0xC0, 0x00, 
  0x07, 0xE0, 0x63, 0x03, 0xC0, 0x00, 0x07, 0xE0, 
  0x7E, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 
  0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 
  0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 
  0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 
  0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 0x07, 0xE0, 
  0x00, 0x03, 0xC0, 0x00, 0xE7, 0xE7, 0x00, 0x03, 
  0xC0, 0x00, 0x77, 0xEE, 0x00, 0x03, 0xC0, 0x00, 
  0x3F, 0xFC, 0x00, 0x03, 0xC0, 0x00, 0x1F, 0xF8, 
  0x00, 0x03, 0xC0, 0x00, 0x0F, 0xF0, 0x00, 0x03, 
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 
  0x03, 0xC0, 0x00, 0x03, 0xC0, 0x00, 0x01, 0x80, 
  0x08, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x14, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x14, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x16, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x22, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x22, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x7F, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x41, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x41, 0x03, 0xC0, 0x00, 0x00, 0x00, 0xC1, 0x83, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char edit_icon_changecolor_1[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x0F, 0xF0, 0x00, 0x03, 
  0xC0, 0x00, 0x38, 0x1C, 0x00, 0x03, 0xC0, 0x00, 
  0x63, 0xC6, 0x00, 0x03, 0xC0, 0x00, 0xCF, 0xF3, 
  0x00, 0x03, 0xC0, 0x00, 0x9F, 0xF9, 0x00, 0x03, 
  0xC0, 0x01, 0xBF, 0xFD, 0x80, 0x03, 0xC0, 0x01, 
  0x3F, 0xFC, 0x80, 0x03, 0xC0, 0x01, 0x7F, 0xFE, 
  0x80, 0x03, 0xC0, 0x01, 0x7F, 0xFE, 0x80, 0x03, 
  0xC0, 0x01, 0x7F, 0xFE, 0x80, 0x03, 0xC0, 0x01, 
  0x7F, 0xFE, 0x80, 0x03, 0xC0, 0x01, 0x3F, 0xFC, 
  0x80, 0x03, 0xC0, 0x01, 0xBF, 0xFD, 0x80, 0x03, 
  0xC0, 0x00, 0x9F, 0xF9, 0x00, 0x03, 0xC0, 0x00, 
  0xCF, 0xF3, 0x00, 0x03, 0xC0, 0x00, 0x63, 0xC6, 
  0x00, 0x03, 0xC0, 0x00, 0x38, 0x1C, 0x00, 0x03, 
  0xC0, 0x00, 0x0F, 0xF0, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char edit_icon_changecolor_0[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x0F, 0xF0, 0x00, 0x03, 
  0xC0, 0x00, 0x38, 0x1C, 0x00, 0x03, 0xC0, 0x00, 
  0x60, 0x06, 0x00, 0x03, 0xC0, 0x00, 0xC0, 0x03, 
  0x00, 0x03, 0xC0, 0x00, 0x80, 0x01, 0x00, 0x03, 
  0xC0, 0x01, 0x80, 0x01, 0x80, 0x03, 0xC0, 0x01, 
  0x00, 0x00, 0x80, 0x03, 0xC0, 0x01, 0x00, 0x00, 
  0x80, 0x03, 0xC0, 0x01, 0x00, 0x00, 0x80, 0x03, 
  0xC0, 0x01, 0x00, 0x00, 0x80, 0x03, 0xC0, 0x01, 
  0x00, 0x00, 0x80, 0x03, 0xC0, 0x01, 0x00, 0x00, 
  0x80, 0x03, 0xC0, 0x01, 0x80, 0x01, 0x80, 0x03, 
  0xC0, 0x00, 0x80, 0x01, 0x00, 0x03, 0xC0, 0x00, 
  0xC0, 0x03, 0x00, 0x03, 0xC0, 0x00, 0x60, 0x06, 
  0x00, 0x03, 0xC0, 0x00, 0x38, 0x1C, 0x00, 0x03, 
  0xC0, 0x00, 0x0F, 0xF0, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char edit_icon_cancel[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x01, 0x80, 0x00, 
  0x18, 0x03, 0xC0, 0x01, 0xC0, 0x00, 0x3C, 0x03, 
  0xC0, 0x01, 0xE0, 0x00, 0x78, 0x03, 0xC0, 0x01, 
  0xE0, 0x00, 0xF0, 0x03, 0xC0, 0x00, 0xF0, 0x01, 
  0xE0, 0x03, 0xC0, 0x00, 0x78, 0x03, 0xC0, 0x03, 
  0xC0, 0x00, 0x38, 0x07, 0x80, 0x03, 0xC0, 0x00, 
  0x3C, 0x0F, 0x00, 0x03, 0xC0, 0x00, 0x1E, 0x1E, 
  0x00, 0x03, 0xC0, 0x00, 0x0E, 0x3C, 0x00, 0x03, 
  0xC0, 0x00, 0x0F, 0x78, 0x00, 0x03, 0xC0, 0x00, 
  0x07, 0xF0, 0x00, 0x03, 0xC0, 0x00, 0x03, 0xE0, 
  0x00, 0x03, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x07, 0xE0, 0x00, 0x03, 0xC0, 0x00, 
  0x0F, 0xF0, 0x00, 0x03, 0xC0, 0x00, 0x1E, 0x78, 
  0x00, 0x03, 0xC0, 0x00, 0x1C, 0x38, 0x00, 0x03, 
  0xC0, 0x00, 0x38, 0x1C, 0x00, 0x03, 0xC0, 0x00, 
  0x78, 0x1E, 0x00, 0x03, 0xC0, 0x00, 0xF0, 0x0F, 
  0x00, 0x03, 0xC0, 0x01, 0xE0, 0x07, 0x80, 0x03, 
  0xC0, 0x03, 0xC0, 0x03, 0xE0, 0x03, 0xC0, 0x07, 
  0x80, 0x01, 0xF0, 0x03, 0xC0, 0x07, 0x00, 0x00, 
  0xF8, 0x03, 0xC0, 0x0F, 0x00, 0x00, 0x70, 0x03, 
  0xC0, 0x1E, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x1E, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x1C, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char edit_icon_accept[] = {
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFE, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x01, 0x80, 0x00, 0x0E, 0x03, 0xC0, 0x03, 
  0xC0, 0x00, 0x1F, 0x03, 0xC0, 0x03, 0xC0, 0x00, 
  0x3F, 0x03, 0xC0, 0x03, 0xC0, 0x00, 0x7E, 0x03, 
  0xC0, 0x03, 0xC0, 0x00, 0xFC, 0x03, 0xC0, 0x03, 
  0xC0, 0x00, 0xF8, 0x03, 0xC0, 0x03, 0xC0, 0x01, 
  0xF0, 0x03, 0xC0, 0x03, 0xC0, 0x03, 0xE0, 0x03, 
  0xC0, 0x01, 0xE0, 0x03, 0xC0, 0x03, 0xC0, 0x01, 
  0xE0, 0x07, 0x80, 0x03, 0xC0, 0x01, 0xE0, 0x0F, 
  0x80, 0x03, 0xC0, 0x01, 0xE0, 0x0F, 0x00, 0x03, 
  0xC0, 0x00, 0xF0, 0x1E, 0x00, 0x03, 0xC0, 0x00, 
  0xF0, 0x1E, 0x00, 0x03, 0xC0, 0x00, 0xF0, 0x3C, 
  0x00, 0x03, 0xC0, 0x00, 0x78, 0x78, 0x00, 0x03, 
  0xC0, 0x00, 0x78, 0x78, 0x00, 0x03, 0xC0, 0x00, 
  0x78, 0xF0, 0x00, 0x03, 0xC0, 0x00, 0x3C, 0xF0, 
  0x00, 0x03, 0xC0, 0x00, 0x3D, 0xE0, 0x00, 0x03, 
  0xC0, 0x00, 0x3F, 0xC0, 0x00, 0x03, 0xC0, 0x00, 
  0x1F, 0xC0, 0x00, 0x03, 0xC0, 0x00, 0x1F, 0x80, 
  0x00, 0x03, 0xC0, 0x00, 0x1F, 0x80, 0x00, 0x03, 
  0xC0, 0x00, 0x0F, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x0F, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x06, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC
};

static unsigned char icon_up[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xF0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x80, 0x00, 
  0xC0, 0x01, 0xC0, 0x00, 0xC0, 0x03, 0xE0, 0x00, 
  0xC0, 0x07, 0xF0, 0x00, 0xC0, 0x0F, 0xF8, 0x00, 
  0xC0, 0x1F, 0x7C, 0x00, 0xC0, 0x3E, 0x3E, 0x00, 
  0xC0, 0x7C, 0x1F, 0x00, 0xC0, 0xF8, 0x0F, 0x80, 
  0xC1, 0xF0, 0x07, 0xC0, 0xC3, 0xE0, 0x83, 0xE0, 
  0xC7, 0xC1, 0xC1, 0xF0, 0xC3, 0x83, 0xE0, 0xE0, 
  0xC1, 0x07, 0xF0, 0x40, 0xC0, 0x0F, 0xF8, 0x00, 
  0xC0, 0x1F, 0x7C, 0x00, 0xC0, 0x3E, 0x3E, 0x00, 
  0xC0, 0x7C, 0x1F, 0x00, 0xC0, 0xF8, 0x0F, 0x80, 
  0xC1, 0xF0, 0x07, 0xC0, 0xC3, 0xE0, 0x83, 0xE0, 
  0xC7, 0xC1, 0xC1, 0xF0, 0xC3, 0x83, 0xE0, 0xE0, 
  0xC1, 0x07, 0xF0, 0x40, 0xC0, 0x0F, 0xF8, 0x00, 
  0xC0, 0x1F, 0x7C, 0x00, 0xC0, 0x3E, 0x3E, 0x00, 
  0xC0, 0x7C, 0x1F, 0x00, 0xC0, 0xF8, 0x0F, 0x80, 
  0xC1, 0xF0, 0x07, 0xC0, 0xC3, 0xE0, 0x83, 0xE0, 
  0xC7, 0xC1, 0xC1, 0xF0, 0xC3, 0x83, 0xE0, 0xE0, 
  0xC1, 0x07, 0xF0, 0x40, 0xC0, 0x0F, 0xF8, 0x00, 
  0xC0, 0x1F, 0x7C, 0x00, 0xC0, 0x3E, 0x3E, 0x00, 
  0xC0, 0x7C, 0x1F, 0x00, 0xC0, 0xF8, 0x0F, 0x80, 
  0xC1, 0xF0, 0x07, 0xC0, 0xC3, 0xE0, 0x83, 0xE0, 
  0xC7, 0xC1, 0xC1, 0xF0, 0xC3, 0x83, 0xE0, 0xE0, 
  0xC1, 0x07, 0xF0, 0x40, 0xC0, 0x0F, 0xF8, 0x00, 
  0xC0, 0x1F, 0x7C, 0x00, 0xC0, 0x3E, 0x3E, 0x00, 
  0xC0, 0x7C, 0x1F, 0x00, 0xC0, 0xF8, 0x0F, 0x80, 
  0xC1, 0xF0, 0x07, 0xC0, 0xC3, 0xE0, 0x03, 0xE0, 
  0xC7, 0xC0, 0x01, 0xF0, 0xC3, 0x80, 0x00, 0xE0, 
  0xC1, 0x00, 0x00, 0x40, 0xC0, 0x00, 0x00, 0x00, 
  0xE0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

static unsigned char icon_down[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xF0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC1, 0x00, 0x00, 0x40, 
  0xC3, 0x80, 0x00, 0xE0, 0xC7, 0xC0, 0x01, 0xF0, 
  0xC3, 0xE0, 0x03, 0xE0, 0xC1, 0xF0, 0x07, 0xC0, 
  0xC0, 0xF8, 0x0F, 0x80, 0xC0, 0x7C, 0x1F, 0x00, 
  0xC0, 0x3E, 0x3E, 0x00, 0xC0, 0x1F, 0x7C, 0x00, 
  0xC0, 0x0F, 0xF8, 0x00, 0xC1, 0x07, 0xF0, 0x40, 
  0xC3, 0x83, 0xE0, 0xE0, 0xC7, 0xC1, 0xC1, 0xF0, 
  0xC3, 0xE0, 0x83, 0xE0, 0xC1, 0xF0, 0x07, 0xC0, 
  0xC0, 0xF8, 0x0F, 0x80, 0xC0, 0x7C, 0x1F, 0x00, 
  0xC0, 0x3E, 0x3E, 0x00, 0xC0, 0x1F, 0x7C, 0x00, 
  0xC0, 0x0F, 0xF8, 0x00, 0xC1, 0x07, 0xF0, 0x40, 
  0xC3, 0x83, 0xE0, 0xE0, 0xC7, 0xC1, 0xC1, 0xF0, 
  0xC3, 0xE0, 0x83, 0xE0, 0xC1, 0xF0, 0x07, 0xC0, 
  0xC0, 0xF8, 0x0F, 0x80, 0xC0, 0x7C, 0x1F, 0x00, 
  0xC0, 0x3E, 0x3E, 0x00, 0xC0, 0x1F, 0x7C, 0x00, 
  0xC0, 0x0F, 0xF8, 0x00, 0xC1, 0x07, 0xF0, 0x40, 
  0xC3, 0x83, 0xE0, 0xE0, 0xC7, 0xC1, 0xC1, 0xF0, 
  0xC3, 0xE0, 0x83, 0xE0, 0xC1, 0xF0, 0x07, 0xC0, 
  0xC0, 0xF8, 0x0F, 0x80, 0xC0, 0x7C, 0x1F, 0x00, 
  0xC0, 0x3E, 0x3E, 0x00, 0xC0, 0x1F, 0x7C, 0x00, 
  0xC0, 0x0F, 0xF8, 0x00, 0xC1, 0x07, 0xF0, 0x40, 
  0xC3, 0x83, 0xE0, 0xE0, 0xC7, 0xC1, 0xC1, 0xF0, 
  0xC3, 0xE0, 0x83, 0xE0, 0xC1, 0xF0, 0x07, 0xC0, 
  0xC0, 0xF8, 0x0F, 0x80, 0xC0, 0x7C, 0x1F, 0x00, 
  0xC0, 0x3E, 0x3E, 0x00, 0xC0, 0x1F, 0x7C, 0x00, 
  0xC0, 0x0F, 0xF8, 0x00, 0xC0, 0x07, 0xF0, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x01, 0xC0, 0x00, 
  0xC0, 0x00, 0x80, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xE0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

static unsigned char icon_add[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xF0, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x03, 0xE0, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x03, 0xE0, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x03, 0xE0, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x03, 0xE0, 0x00, 
  0xC3, 0xFF, 0xFF, 0xE0, 0xC3, 0xFF, 0xFF, 0xE0, 
  0xC3, 0xFF, 0xFF, 0xE0, 0xC3, 0xFF, 0xFF, 0xE0, 
  0xC3, 0xFF, 0xFF, 0xE0, 0xC0, 0x03, 0xE0, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x03, 0xE0, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x03, 0xE0, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x03, 0xE0, 0x00, 
  0xC0, 0x03, 0xE0, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0xE0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

static unsigned char icon_sketch_default[] = {
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8
};

#endif