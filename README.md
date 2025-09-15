# **Eurorack Step Sequencer - 2x8 or 1x16**

This is currently a concept for an Arduino-based step sequencer, configurable as either 2x8 or 1x16. The shift buttons next to the display grant access to a variety of per-sequence settings.

For example, by holding **Shift 1** and turning the **SEQ1 STEP1** potentiometer, you can adjust the gate length for **all steps** within **SEQ1**. The available values will be shown on the display within the shift menu.

A potential drawback, though not a dealbreaker, is that after releasing the shift button, you must return the potentiometer to its original position to maintain the sequence's intended state.

Here are some ideas for the shift functions:

* Gate length
* Sequence length
* Glide
* Step select
* Play direction (including chain instances)
* Voltage range (0-1V, 0-2V, 0-3V)
* Quantizer
* Auto-reset (jumps to step 1 when the incoming clock pauses)
* Clock division
* Chain instances
* Octave shift
* Inactive step skip
* Step repeat
* Ratcheting
* Sequence start
* Probability
* Vibrato
    * Speed
    * Amplitude
    * Waveform
* Reset all (activated by a simultaneous 3-second press)
    


## Planned panel layout
```
┌───────────────────────────────────────────────┐
│ ○                                           ○ │
│                                               │
│╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮│   SEQUENCE1
││ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● │ │ ● ││   8 Potentiometer
│╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯ ╰───╯│
│  ○     ○     ○     ○     ○     ●     ○     ○  │   8 indicator LEDS (playhead)
│  ┬     ┬     ┬     ┬     ┬     ┬     ┬     ┬  │
│  ┴     ┴     ┴     ┴     ┴     ┴     ┴     ┴  │   8 Switches step ON/OFF
│                                               │
│╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮ ╭───╮│   SEQUENCE2
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
     RST IN   GATE OUT           All 4 jacks should have indicator LEDS
```

## Parts
### Arduino
Arduino MEGA has all required digital and analog pins onboard. it also should fit below the frontpanel.  
In case we use a Nano or similar we would need to extend the existing pins with
 - MCP23017 (16 additional digital pins)
 - CD4051 (8 additional analog pins)
 
### 2-channel DAC 
MCP4822 seems to be suitable

### 4 channel op amp
LM324N

### 8 jacks
https://www.3u-shop.de/p/3-5mm-monobuchse-50-stueck  
https://www.uk-electronic.de/onlineshop/product_info.php?products_id=4868  

### 16 Potentiometer
https://www.digikey.at/en/products/detail/bourns-inc/PTV09A-4025U-B103/3781137

### Display
SSD1306 https://www.az-delivery.de/en/products/0-96zolldisplay

### Leds
24 x https://www.reichelt.at/at/de/shop/produkt/flat-led_5mm_rot_350_mcd_120_-363941

### Switches
18 x https://www.reichelt.at/at/de/shop/produkt/miniatur-kippschalter_ein-ein_3_a_250_v-285987

### 2 Buttons / momentary switches

