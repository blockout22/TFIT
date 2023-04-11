Overhaul of the Overlay, brand new Item Tooltip features. Highly customizable and easy for other mods to extend! Brought to you by Robb#6731




## New Stuff

<!-- - TODO Support for looking at vehicles -->
- **Overlay Overhaul**
  - Expanded target support. See what mod added the following content, as well as some extra info
    - Names of **Buildings**
      - ![Manufacturer](https://i.imgur.com/WcLnRWZ.jpeg)
    - Name, health, AI task status, and drops of **Creatures**
      - ![Creature](TODO)
    - Potential drops from **Foliage**
      - ![Foliage screenshot](TODO)
    - Contents of **Item Pickups** (like dropped items and plants) and how long it is until they respawn
      - ![Dropped Item screenshot](TODO)
      - ![Regrowing Plant screenshot](TODO)
    - Ore type and purity of **Resource Nodes** and **Resource Wells**
      - ![Resource Node screenshot](TODO)
      - ![Resource Well screenshot](TODO)
    - Ore type and contained quantity of **Resource Clusters** (the ones found on top of resource nodes)
      - ![Resource Cluster screenshot](TODO)
    - Name and fuel status of **Vehicles**
      - TODO does it have speed?
      - https://streamable.com/gtygka
    - Name, power status, next destination, mass and cargo mass, and speed/docking/derailment of **Trains**
      - https://streamable.com/mre83a
  - You can now configure the following in the mod configs:
    - If the overlay is enabled at all
    - X/Y offset and scale of the overlay
    - If the overlay should be updated when what you're looking at hasn't changed
    - How far in centimeters to check for what you're looking at
    - How frequently to update the overlay (in seconds)
    - Mod name blacklist. For example, include `Satisfactory` to leave out all base-game content
- **Item Tooltip Support**
  - Additional information is now added to item tooltips! **You can enable/disable all of these from the mod configs.**
  - **Mod Name** - Wondering what mod added this item? Now you can see it in the tooltip!
    - Optionally disable for recipes added by Satisfactory itself
  - **Resource Sink Points** - Find out how many AWESOME Points you'll get from shredding this item, or a whole stack of it. If you can't sink it, it will say so as well.
    - If you don't want this to appear on items that can't be sunk, you can turn it off in the configs.
  - **Radioactive Items** - Items that are radioactive will now have a radioactive symbol in their tooltip and have the header bar turn lime green.
    - If you don't want this to appear on base-game items, you can turn it off in the configs.
  - **Stack Size** and Form - See what the max stack size of the item you're looking at is, and if it's a liquid or solid.
- **Recipe Info**
  - Additional information is now added to the recipe section of tooltips, which also appears in the in-game Codex. **You can enable/disable all of these from the mod configs.**
  - **Mod Name** - Wondering what mod added this recipe? Now you can see it in the tooltip!
    - Optionally disable for recipes added by Satisfactory itself
  - **Sink Points Profit** - Find out how many AWESOME Points the recipe gains you.
    - It will attempt to estimate (displaying a warning symbol) when unsinkable items are involved in the recipe.
    - Optionally enable displaying a points per minute calculation

## Changed Stuff

- You can now turn off the "what am I looking at" widget in the mod configs
- The overlay font has been re-styled to match the base game's UI
- Changed the layout of the "what am I looking at" widget to scale each section (target name, mod that added, additional info) separately in the case that one of them is very long

## Bugfixes

- Fixed that Foundations, Walls, Splitters, etc. were not being picked up in Update 7 experimental (caused by switch the the lightweight instances system)

## Known Bugs

- TODO Does not register vanilla ore nodes

## Cool Tools for Developers

- **Recipe Path Display**
  - View the blueprint path of a recipe for troubleshooting and research
  - ![Recipe Path Display](TODO)
- **Automatic Sink Point Calculation!**
  - You can use TFIT to semi-automatically calculate sink points for your own mods' items!
  - The tool will suggest a points value for the first output product of a recipe based on the input points of the recipe and an "improvement multiplier" that you determine. A good value is `2.0` for +100% points.
  - Once enabled in the mod config, use the chat command `/tfit_suggest_points <output mult of input ex. 2.0 for +100%> [mod reference filter]`
  - It will process every registered recipe in the game unless you filter it down by supplying a mod reference filter
  - The command generate two files in the `\FactoryGame\Mods\TFIT\Output` folder. One of them is a CSV file ready for import into the editor as a data table. The second is a CSV file that contains metadata such as items that could not be factored into the calculation (had no points or was a fluid)
  - The equation used is `output mult * (sum of ingredients input points) / output count`. It does not traverse any further than one level of recipe products, so you may need to selectively bring in pieces at a time to "build out" the points for the items involved in a processing chain.
  - ![Example of the command output](https://cdn.discordapp.com/attachments/623891487683510323/1095174826831917096/image.png)
  - ![Example of the data table](https://cdn.discordapp.com/attachments/623891487683510323/1095174955135680622/image.png)
- **Overlay**
  - Debugging info for mod developers (off by default)
    - Hit actor blueprint path and hit component name, exact position in world
  - Mod developers can create their own handlers to display additional custom information. Two possible approaches:
    - Adding a `TFIT Overlay Provider` Component to actors
    - Adding the `BPI_TFIT_OffersHandlers` interface to the mod's Root Instance module, then listing anything that implements `BPI_TFIT_OverlayHandler` in return of the `Get Overlay Handlers` function
    - Both of these approaches do not make your mod dependent on having TFIT loaded to function
- **Tooltip**
  - Highly extensible new system for adding widgets to item tooltips
  - Capable of handling tooltips even without existing item state (unlike SML tooltip handlers)
  - Will try to automatically handle any tooltip widgets that other mods insert
  - Mod developers can create their own handlers to display additional custom information. Three possible approaches:
    - Adding their widget to the tooltip normally. TFIT will keep it around.
    - Adding the `BPI_TFIT_OffersHandlers` interface to the mod's Root Instance module, then listing anything that implements `BPI_TFIT_TooltipHandler` in return of the `Get Tooltip Handlers` function
    - Adding their widget to the tooltip normally, and having it implement `BPI_TFIT_TooltipHandler`, which allows it to specify a TFIT section that it wants to be moved into
