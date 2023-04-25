New "Fuel Energy Value" item tooltip! Brought to you by Robb#6731




## New Stuff

- **Item Tooltips**
  - **Fuel Energy Value** - Find out how much juice is stored this item, or a whole stack of it.
    - Disabled by default for items with no energy value
    - Optionally also show for exactly how many items are in the stack, ex. "energy for 28.3 L of fuel"
    - ![Fuel screenshot](https://i.imgur.com/HcXSDnj.png)
    - ![Fuel fluid screenshot](https://i.imgur.com/2c7vJHh.png)

## Bugfixes

- Removed accidental dependency on ContentLib for file output when running the Generate Sink Points chat command

## Known Bugs

- Some plants don't show up on the foliage overlay
- Gates have an unusually large hitbox (for their player/vehicle detector trigger) so the "what am I looking at" overlay will sometimes say you're looking at a gate when you're actually looking at something else
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.

