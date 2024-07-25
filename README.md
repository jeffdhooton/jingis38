# Jingis 38 Keyboard

![Jingis 38 keyboards](/graphics/jingi38cover.png)

This is an ergonomic, 38-key, VIAL compatible keyboard based off of the corne/crkbd but with a larger column stagger. I designed the board to be hotswap, and use cheap SMD components, and a 3D printed case.

## BOM

You will need all of the following to build one of these boards.

1. PCBs from a PCB manufacturer (JLCPCB cost me $18 for 5 of these boards)

2. Pro Micro ATMega32U4

3. 1N1418 SMD Diodes

4. Kailh Hotswap Sockets

5. MX Keyswitches

6. MX Keycaps

7. M2 Heatset Inserts

8. M2x10 standoff screws

9. CA Glue

## Build Process

Once you receive your PCBs in, and have all of your components - you're ready to build. Building this board should be pretty straight forward for anybody that's done so for other boards before. If you haven't, then the build process is as follows:

**Solder SMD components**

The first step is to tin one side of the pads for every diode spot on the board. Once you have tinned the pads, you're ready to solder the components on. Make sure that you're soldering diodes on with the correct polarity. Diodes should have a line on one side of them, so make sure this lines up with the point of the triangle on the PCB. If you solder them on backwards, you're going to have a bad time.

Kailh hotswap sockets should come second. My process for soldering these is similar to the diodes - tin one of the pads for every spot on the board, solder the component to the tinned pad and then when done with the whole board, come back and add solder to the other pad, completing the connection

**Solder Pro Micro**

The next step is to solder on the MCU headers. The MCU on this board goes on top of the board. Place the header pins through the top of the board and solder on the back. Tack one pin on for each side and then ensure that the headers are vertical in their slots and not leaning to one side or the other.

After you've got the headers attached to the board you can solder the MCU to the headers. The MCU for this board should be upside down, with the USB-C port facing the board instead of facing away from the board.

**Prepare Case for Install**

The case prints in 4 pieces. Two halves and then two switch plates. There are also butterfly mechanisms on the build plate for connecting the two halves of the case. Align the two halves of the case, put some super glue in the butterfly slots on the case and then put the joiners in those slots.

When the glue sets, install heatset inserts into every standoff hole in the case. These should be M2 standoffs so that you can get screws through the holes on the PCB.

**Install Switches & Assemble Board**

Place the switches into the plates that you've printed off, and then line the plates up against the board and press down. Make sure you don't bend any switch pins during this process.

When you have switches on each side attached to the board via the hotswap sockets place the completed PCB into the case. Use M2x10 standoff screws through the holes on the switch plates to attach the board to the case. When you've got them all added the board should feel secure.

**Flash Firmware**

Check out [the readme](/jingis/readme.md) in the `jingis` directory of this repository for instructions on how to flash the firmware.
