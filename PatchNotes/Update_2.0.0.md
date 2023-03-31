Overhaul of the Overlay, brand new Item Tooltip features. Highly customizable and easy for other mods to extend! Brought to you by Robb#6731




## New Stuff

<!-- - TODO Support for looking at vehicles -->
- **Overlay Overhaul**
  - Expanded target support. See what mod added the following content, as well as some extra info
    - Names of **Buildings**
    - Health of **Creatures**
    - TODO Potential drops from **Foliage**
    - Contents of **Item Pickups** (like dropped items and plants) and how long it is until they respawn
    - Ore type and purity of **Resource Nodes** and **Resource Wells**
    - Ore type and contained quantity of **Resource Clusters** (the ones found on top of resource nodes)
    - TODO Name and fuel status of **Vehicles**
    - Debugging info for mod developers (off by default)
  - You can now configure the following in the mod configs:
    - If the overlay is enabled at all
    - X/Y offset and scale of the overlay
    - If the overlay should be updated when what you're looking at hasn't changed
    - How far in centimeters to check for what you're looking at
    - How frequently to update the overlay (in seconds)
    - Mod name blacklist. For example, include `Satisfactory` to leave out all base-game content
  - Mod developers can create their own handlers to display additional custom information. Two possible approaches:
    - Adding a `TFIT Overlay Provider` Component to actors
    - Adding the `BPI_TFIT_OffersHandlers` interface to the mod's Root Instance module, then listing anything that implements `BPI_TFIT_OverlayHandler` in return of the `Get Overlay Handlers` function
    - Both of these approaches do not make your mod dependent on having TFIT loaded to function
- **Item Tooltip Support**
  - Additional information is now added to item tooltips! **You can enable/disable all of these from the mod configs.**
  - **Mod Name** - Wondering what mod added this item? Now you can see it in the tooltip!
  - **Resource Sink Points** - Find out how many AWESOME Points you'll get from shredding this item, or a whole stack of it. If you can't sink it, it will say so as well.
    - If you don't want this to appear on items that can't be sunk, you can turn it off in the configs.
  - **Radioactive Items** - Items that are radioactive will now have a radioactive symbol in their tooltip and have the header bar turn lime green.
    - If you don't want this to appear on base-game items, you can turn it off in the configs.
  - **Stack Size** and Form - See what the max stack size of the item you're looking at is, and if it's a liquid or solid.
  - 
  - Highly extensible new system for adding widgets to item tooltips
  - Capable of handling tooltips even without existing item state (unlike SML tooltip handlers)
  - Will try to automatically handle any tooltip widgets that other mods insert

## Changed Stuff

- You can now turn off the "what am I looking at" widget in the mod configs
- The overlay font has been re-styled to match the base game's UI
- Changed the layout of the "what am I looking at" widget to scale each section (target name, mod that added, additional info) separately in the case that one of them is very long

## Bugfixes

- Fixed that Foundations, Walls, Splitters, etc. were not being picked up in Update 7 experimental (caused by switch the the lightweight instances system)
