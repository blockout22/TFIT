Fixed recipe sink points display rounding error when recipes use a decimal quantity of a fluid.



This update brought to you by Robb.
If you enjoy my work, please consider donating to my [completely optional tip jar](https://ko-fi.com/robb4).

## Fixed Stuff

- Fixed recipe sink points display rounding error when recipes use a decimal quantity of a fluid (ex. 12.5 m³ -> 12500 units)
  - This affected the Codex recipe info and the recipe points calculation mod developer utility

## Not Working Yet (Known Bugs)

- Drones always display Unset as their Home and Destination, even if they have a valid one
  - The previous function I was using to get their names doesn't seem to return anything anymore?
- The foliage information feature has trouble detecting some foliage, especially those without collision (ex. bushes)
- The building information feature doesn't work for some buildings yet
  - It doesn't detect Lightweight Actors (mostly foundations and walls)
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as `-0 m³` the first time their tooltip is displayed. Opening the tooltip again will fix this.

## For Developers

The [Developer Readme](https://github.com/blockout22/TFIT/blob/main/DEV_README.md) has information on how to extend TFIT's functionality in your own mods.

- I plan to move the item tooltip system to its own mod Eventually™ to make it easier to use in other mods
<!-- for future: tooltip ability to request setting mDiv to Visible instead of collapsed for non equipment/stat items -->
