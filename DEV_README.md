# TFIT

If you have any questions, please contact Robb#6731 on the main modding discord.

In most cases, you don't need to add TFIT as a dependency to your mod's `uplugin` file.
However, you will need to have TFIT loaded in your editor for the interfaces and components to be available.

## Preface

To summarize, TFIT can be extended via a Game Instance Module supplying a list classes that implement a relevant interface. Although any UObject can implement the compatibility interfaces TFIT offers, even plain UObjects, beware of operations that require world context (such as creating widgets or accessing subsystems). In this situation, your handler could be a Mod Subsystem for example.

If the object you provide in your Root Instance module is a subclass of Actor, TFIT will treat it as a singleton and get the (presumably only) existing instance of it for use. If it's not a subclass of Actor, or the actor it found was not valid, it will fall back to using the class's default object.

For code examples, look at TFIT's own handlers.

HandleCreature and HandlePickup are examples of cases where a subsystem actor was used as the handler instead of a plain UObject because world context was required.

**Remember - If you use a Subsystem as a handler, set its replication policy accordingly (ex. "Spawn on Client and Server, Never Replicate) or else client behavior will differ from servers!"**

## Overlay Handlers

- Mod developers can create their own handlers to display additional custom information. Two possible approaches:
  - Adding a `TFIT Overlay Provider` Component to actors
  - Adding the `BPI_TFIT_OffersHandlers` interface to the mod's Root Instance module, then listing anything that implements `BPI_TFIT_OverlayHandler` in return of the `Get Overlay Handlers` function.
  - Neither of these approaches make your mod dependent on having TFIT loaded to function

## Tooltip Handlers

- Capable of handling tooltips even without existing item state (unlike SML tooltip handlers)
- TFIT will try to automatically handle any tooltip widgets that other mods insert
- Mod developers can create their own handlers to display additional custom information. Three possible approaches:
  - Adding their widget to the tooltip normally. TFIT will keep it around.
  - Adding the `BPI_TFIT_OffersHandlers` interface to the mod's Root Instance module, then listing anything that implements `BPI_TFIT_TooltipHandler` in return of the `Get Tooltip Handlers` function
    - If the thing you list is a User Widget subclass, TFIT will spawn it for you and add it to the tooltip before calling Handle Inventory Stack, otherwise it will just call the method.
  - Adding their widget to the tooltip normally, and having it implement `BPI_TFIT_TooltipHandler`, which allows it to specify a TFIT section that it wants to be moved into

You can find out what tooltip sections are offered by cloning the TFIT plugin into your modding project and looking at the `TFIT_Tooltip_Section` enum and the `Widget_TFIT_TooltipInject` widget.

## Blueprint and C++ Libaries

TFIT offers a few useful functions, such as:

- Look up ownership of content that isn't in the Mod Content registry, or content that has innaccurate Mod Content Registry entries.
- Obtain foliage drop data from an instanced actor or a static mesh component
- Suggest an AWESOME Sink points value for a recipe's products based on its ingredients, even if the ingredients are fluids

If you use these, you will need to list TFIT as a dependency in your mod's `uplugin` file.

## FAQ

If you have any other questions, please contact Robb#6731 on the main modding discord.

### Does my mod need to depend on TFIT?

Your main mod doesn't need to depend on TFIT.

### What happend if the user uninstalls TFIT, will my main mod stop working?

No, See above question.
