# eurorack-step-sequencer-2x8
Currently only a concept of a step sequencer 2x8 or 1x16.  



## Planned panel layout
```
┌───────────────────────────────────────────────┐
│ ○                                           ○ │
│                                               │
│╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮│   SEQ1
││ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● ││   8 Potentiometer
│╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯│
│  ○     ○     ○     ○     ○     ●     ○     ○  │   8 indicator LEDS (playhead)
│  ┬     ┬     ┬     ┬     ┬     ┬     ┬     ┬  │
│  ┴     ┴     ┴     ┴     ┴     ┴     ┴     ┴  │   8 Switches step ON/OFF
│                                               │
│╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮│   SEQ2
││ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● ││   8 Potentiometer
│╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯│
│  ○     ○     ○     ○     ○     ●     ○     ○  │   8 indicator LEDS (playhead)
│  ┬     ┬     ┬     ┬     ┬     ┬     ┬     ┬  │
│  ┴     ┴     ┴     ┴     ┴     ┴     ┴     ┴  │   8 Switches step ON/OFF
│┌─────────┐        SEQUENCE1      SEQUENCE2    │
││ DISPLAY │ ●     ○   ○  ├──┤    ○   ○  ├──┤   │   2 momentary switches next to the display
││ 128x64  │                                    │   (shift functions for each sequence)
│└─────────┘ ●     ○   ○          ○   ○         │   
│ ○                                           ○ │
└───────────────────────────────────────────────┘


  both sequence I/O
  
     CLK IN    CV OUT    BOOST  (switch to 10V CV output)
       ○         ○       ├──┤  
    

       ○         ○
     RST IN   GATE OUT           All 4 jacks shoulkd have indicator LEDS
```

## Parts
### Arduino
Arduino MEGA has all required digital and analog pins onboard. it also should fit below the frontpanel.  
In case we use a Nano or similar we would need to extend the existing pins with
 - MCP23017 (16 additional digital pins)
 - CD4051 (8 additional analog pins)
 
### 2-channel DAC 
MCP4822 seems to be suitable

### 16 Potentiometer
https://www.digikey.at/en/products/detail/bourns-inc/PTV09A-4025U-B103/3781137

### Display
SSD1306 https://www.az-delivery.de/en/products/0-96zolldisplay

### Leds
20 x https://www.reichelt.at/at/de/shop/produkt/flat-led_5mm_rot_350_mcd_120_-363941

### Switches
18 x https://www.reichelt.at/at/de/shop/produkt/miniatur-kippschalter_ein-ein_3_a_250_v-285987

### Buttons / momentary switches

