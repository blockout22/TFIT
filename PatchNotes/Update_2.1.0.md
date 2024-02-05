Update 8 support. Improved Pipeline overlay support. Buildgun customizer tab support.




This update brought to you by Robb.
If you enjoy my work, please consider my [completely optional tip jar](https://ko-fi.com/robb4).

## New Stuff

- **What am I Looking At? Overlay**
  - **Pipelines and Fluid Storages** - Get flow rate and contents information
    <!-- - ![Pipeline](TODO)
    - ![Pipeline Indicator](TODO)
    - ![Fluid Storage](TODO) -->
- **Build Gun Menu**
  - **What Mod Added This Building?**
    - Now functions on the Customizer build gun tab as well
- **Item Tooltips**
  - "Show/Hide Item Tooltip Extended Details" is now an editable keybind instead of reusing your Sprint key
    - Multi-key bindings supported

## Bugfixes

- Fixed that Pipeline Flow Indicators would display an empty overlay.
  - Thanks AcidXDrop for bringing this up!
- Fixed a missing space in the overlay text when a plant dropped an exact number of items

## Known Bugs

- Some plants don't show up on the foliage overlay
- Gates have an unusually large hitbox (for their player/vehicle detector trigger) so the "what am I looking at" overlay will sometimes say you're looking at a gate when you're actually looking at something else
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.
