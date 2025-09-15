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
1 Arduino
2 channel DAC 
16 pots
20 leds
18 switches
2 momentary switches
1 display
