Custom colors for the What am I Looking At? Overlay




This update brought to you by Robb.
If you enjoy my work, please consider my [completely optional tip jar](https://ko-fi.com/robb4).

## New Stuff

- **What am I Looking At? Overlay**
  - Ability to configure the background color and transparency of the overlay and the mod name portions
  - Easy to use color picker widget in the mod config comes with a live preview
  - ![PreviewImage](https://cdn.discordapp.com/attachments/720649014554656769/1150149809806786600/image.png)

## Bugfixes

- Reduced log spam caused by tooltips of items with no unlocked recipes

## For Developers

The [Developer Readme](https://github.com/blockout22/TFIT/blob/main/DEV_README.md) has been updated with additional information on how to extend TFIT's functionality in your own mods.

## Known Bugs

- Some plants don't show up on the foliage overlay
- Gates have an unusually large hitbox (for their player/vehicle detector trigger) so the "what am I looking at" overlay will sometimes say you're looking at a gate when you're actually looking at something else
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.
