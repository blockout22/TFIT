Fixed Item Pickup overlay displays crashing multiplayer clients.




This update brought to you by Robb.
If you enjoy my work, please consider my [completely optional tip jar](https://ko-fi.com/robb4).

## Bugfixes

- Fixed item pickup overlays crashing multiplayer clients
- Fixed that multiplayer clients could crash upon connecting to a server with the Generate Sink Points command enabled
- Fixed some log messages being suppressed, making troubleshooting more difficult

## Changes for Mod Devs

- If a handler is an actor but an instance of the actor is not found, TFIT will no longer fall back to registering its CDO as handler

## Known Bugs

- Some plants don't show up on the foliage overlay
- Gates have an unusually large hitbox (for their player/vehicle detector trigger) so the "what am I looking at" overlay will sometimes say you're looking at a gate when you're actually looking at something else
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.
