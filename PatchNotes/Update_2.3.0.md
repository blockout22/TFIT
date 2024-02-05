Update 8.2 support. Added paintable information visualizer. Configure which Overlay information is presented (ex. turn off plants). Added Fluid Resource Sink compatibility.




This update brought to you by Robb.
If you enjoy my work, please consider my [completely optional tip jar](https://ko-fi.com/robb4).

## New Stuff

- **What am I Looking At? Overlay**
  - New Handler: **Paintable Structures**
    - ![DemoImage](https://i.imgur.com/zcr9Svm.png)
    - Visualize the swatch and see the color hexes used
    - Ignores buildings with the default swatch by default (can modify this in the configs)
    - Don't want this info? Turn it off in the configs.
  - **Buildings**
    - You can now turn this handler off in the mod configs
  - **Foliage**
    - You can now turn this handler off in the mod configs
- **Item Tooltips**
  - If [Fluid Resource Sink Redux](https://ficsit.app/mod/FluidResourceSinkRedux) is installed, fluids with point values will not be considered unsinkable and will be given a special tooltip text instead.
  - (Untested as Fluid Resource Sink Redux is not working at the time of writing)

## Fixed Stuff

- Added a special case to the overlay system to ignore the (oversized) collision detector of Gates when checking for what you're looking at

## For Developers

The [Developer Readme](https://github.com/blockout22/TFIT/blob/main/DEV_README.md) has been updated with additional information on how to extend TFIT's functionality in your own mods.

## Known Bugs

- Some plants don't show up on the foliage overlay
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.
