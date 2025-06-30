1.1 support, refactor to use SML3.11 hooking system. New Overlay handler for Spore Flowers.




This update brought to you by Robb.
If you enjoy my work, please consider donating to my [completely optional tip jar](https://ko-fi.com/robb4).

## New Stuff

- Added an Overlay handler for Spore Flowers

## Removed Stuff

- Removed the "Rename Recipe Listings" config option since the base game does this now

## Changed Stuff

- The Overlay debug handler now ignores AkAcousticPortal and AkSpatialAudioVolume actors, making it easier to inspect things inside the HUB
- The Overlay debug hit marker now uses the Stun Rebar mesh since the beacon mesh has been removed from the game

## Fixed Stuff

- Fixed situations where non-Item tooltips (like the Round Trip Time in the Drone Port) could show the "Added by Mod" Tooltip handler with an unknown mod warning
- Beetle no longer shows its classname in the Overlay
- Drones with no Home or Destination now show "(Unset)" instead of blank text in the Overlay

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
