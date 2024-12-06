Fixed sink points calculation crash when displaying info on the recipe of some items.




This update brought to you by Robb.
If you enjoy my work, please consider donating to my [completely optional tip jar](https://ko-fi.com/robb4).

## Fixed Stuff

- Fixed sink points calculation crash when displaying info on the recipe of some items.
  - I have heard of this happening on some FICSMAS items (can't reproduce) and have seen it happen on some modded items with zero-ingredient recipes
- Fixed that buildings could show empty text as their name in the overlay
  - Affected Character Customization locker and FICSMAS calendar in the HUB
  - Now falls back to using the building's class name if the building's display name is empty
  - Has a map of FGBuildable classes to FText names to fall back to before the class name
    - Currently, the only entries here are the HUB calendar and locker

## Not Working Yet

- The foliage information feature has trouble detecting some foliage, especially those without collision (ex. bushes)
- The building information feature doesn't work for some buildings yet
  - It doesn't handle new Lightweight actors (mostly foundations and walls) until their live stand-ins are spawned (they live for a short time after putting away the buildgun).
- The overlay debugging marker (used to be the beacon mesh) is not visible

## For Developers

The [Developer Readme](https://github.com/blockout22/TFIT/blob/main/DEV_README.md) has information on how to extend TFIT's functionality in your own mods.

- I plan to move the item tooltip system to its own mod Eventually:tm: to make it easier to use in other mods
<!-- for future: tooltip ability to request setting mDiv to Visible instead of collapsed for non equipment/stat items -->

## Known Bugs

- Some plants don't show up on the foliage overlay
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.
