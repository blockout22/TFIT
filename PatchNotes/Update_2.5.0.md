Satisfactory 1.0 Support. New Overlay handlers for Portable Miners and Drop Pods! Some features aren't working yet.




This update brought to you by Robb.
If you enjoy my work, please consider donating to my [completely optional tip jar](https://ko-fi.com/robb4).

## New Stuff

- **What am I Looking At? Overlay**
  - New Handler: **Portable Miner**
    - ![DemoImage](https://i.imgur.com/mXSY1L6.jpeg)
    - See what a miner is mining and its mining progress
    - Questionably useful (just look at the ground underneath the miner) but it's there now
  - New Handler: **Drop Pod**
    - ![ItemCost](https://i.imgur.com/tRrpwPd.jpeg)
    - ![PowerCost](https://i.imgur.com/AXTKQbt.jpeg)
    - ![PowerCostMet](https://i.imgur.com/Kw3Mcbv.jpeg)
    - ![PowerCostLootedConnected](https://i.imgur.com/kdnnmfv.jpeg)
    - Tell what a drop pod needs, if you can open it, and if you've already looted it, without looking inside
  - Creature Handler now supports "Tropical Crab Hatcher" and "Elite Flying Crab Hatcher"

<!-- - New config option: Fix Base-Game Thousands Separator Bug
  - No longer needed since 1.0 -->

## Changed Stuff

- Drones now report their fuel, home port, destination port, docking status, and speed instead of their stored "energy"
  - ![Drone screenshot](https://i.imgur.com/oXIlUC9.jpeg)

## Not Working Yet

- The foliage information feature has trouble detecting some foliage, especially those without collision (ex. bushes)
- The building information feature doesn't work for some buildings yet
  - It doesn't handle new Lightweight actors (mostly foundations and walls) until their live stand-ins are spawned (they live for a short time after putting away the buildgun).
- The overlay debugging marker (used to be the beacon mesh) is not visible

## For Developers

The [Developer Readme](https://github.com/blockout22/TFIT/blob/main/DEV_README.md) has information on how to extend TFIT's functionality in your own mods.

- Updated tooltip injection system to support new vanilla tooltip widgets and sections
- I plan to move the item tooltip system to its own mod Eventually:tm: to make it easier to use in other mods
<!-- for future: tooltip ability to request setting mDiv to Visible instead of collapsed for non equipment/stat items -->

## Known Bugs

- Some plants don't show up on the foliage overlay
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.
- The Character Customization locker in the HUB shows no name in the overlay
