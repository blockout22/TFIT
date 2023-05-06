Logging improvements




Brought to you by Robb#6731

## Bugfixes

- Improved logging and removed some unnecessary calls. These changes also led to this PR: <https://github.com/satisfactorymodding/SatisfactoryModLoader/pull/168>

## Known Bugs

- Some plants don't show up on the foliage overlay
- Gates have an unusually large hitbox (for their player/vehicle detector trigger) so the "what am I looking at" overlay will sometimes say you're looking at a gate when you're actually looking at something else
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.
