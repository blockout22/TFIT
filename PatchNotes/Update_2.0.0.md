Overhaul of the Overlay, brand new Item Tooltip, Recipe, and Buildgun features. Highly customizable and easy for other mods to extend! Brought to you by Robb#6731




## New Stuff

- **Overlay Overhaul**
  - You can now configure the following in the mod configs:
    - If the overlay is enabled at all
    - X/Y offset and scale of the overlay
    - How far in centimeters to check for what you're looking at
    - If the overlay should be updated when what you're looking at hasn't changed (performance)
    - How frequently to update the overlay (in seconds)
    - Mod name blacklist. For example, include `Satisfactory`, and the overlay won't show when looking at vanilla content
  - Expanded target support. See what mod added the following content, as well as some extra contextual info
    - Names of **Buildings**
      - ![Manufacturer](https://i.imgur.com/WcLnRWZ.jpeg)
    - Name, health, AI task status, and drops of **Creatures**
      - ![Creature](https://i.imgur.com/qEkkIuv.png)
    - Potential drops from **Foliage**
      - ![Foliage screenshot](https://i.imgur.com/67Hqup5.png)
    - Contents of **Item Pickups** (like dropped items and plants) and how long it is until they respawn
      - ![Dropped Item screenshot](https://i.imgur.com/6l11xMc.png)
      - ![Regrowing Plant screenshot](https://i.imgur.com/ZlvqEVk.png)
    - Ore type and purity of **Resource Nodes** and **Resource Wells**
      - ![Resource Node screenshot](https://i.imgur.com/bvpI90n.png)
        ![Resource Well screenshot](https://i.imgur.com/lkIrktI.png)
    - Ore type and contained quantity of **Resource Clusters** (the ones found on top of resource nodes)
      - ![Resource Cluster screenshot](https://i.imgur.com/pD88dCA.png)
    - Name, speed, and fuel status of **Vehicles**
      - ![Vehicle screenshot](https://i.imgur.com/pOMJ7Ca.png)
    - Name, power status, next destination, mass and cargo mass, and speed/docking/derailment of **Trains**
      - <video controls="" width="360" height="203">
        <source src="https://i.imgur.com/D1ZeJLt.mp4" autoplay="" controls="" type="video/mp4">
        </video>
      <!-- - https://streamable.com/mre83a -->
    - Docking info and speed of **Drones**
      - ![Drone screenshot](https://i.imgur.com/T95Z1Cx.png)
- **Item Tooltips**
  - Additional information is now added to item tooltips! **You can enable/disable all of these from the mod configs.**
  - **Collapse Recipes Section** - By default, you must hold your Sprint key to see the recipes section of the tooltip. This can be reversed in the mod configs.
    - ![Collapsed recipes screenshot](https://i.imgur.com/nguAWD0.png)
  - **Mod Name** - Wondering what mod added this item? Now you can see it in the tooltip!
    - Optionally disable for content added by Satisfactory itself
    - ![Mod Name screenshot](https://i.imgur.com/4jTfN4d.png)
  - **Resource Sink Points** - Find out how many AWESOME Points you'll get from shredding this item, or a whole stack of it. If you can't sink it, it will say so as well.
    - Optionally disable for items that can't be sunk
    - ![Sink Points screenshot](https://i.imgur.com/b3Wa33z.png)
    - ![Sink Points unsinkable screenshot](https://i.imgur.com/8v32fCG.png)
  - **Radioactive Items** - Items that are radioactive will now have a radioactive symbol in their tooltip and have the header bar turn lime green.
    - ![Radioactive Item screenshot](https://i.imgur.com/mQOnaUZ.png)
  - **Stack Size** and Form - See what the max stack size of the item you're looking at is, and if it's a liquid or solid.
    - ![Solid screenshot](https://i.imgur.com/KQyjnML.png)
    - ![Liquid screenshot](https://i.imgur.com/rijtuKf.png)
    - ![Gas screenshot](https://i.imgur.com/YnSoIiq.png)
- **Recipe Info**
  - Additional information is now added to the recipe section of tooltips, which also appears in the in-game Codex. **You can enable/disable all of these from the mod configs.**
  - Recipes are renamed to their display name, if they have one.
    - ![Renamed recipes screenshot](https://i.imgur.com/51JIskP.png)
  - **Mod Name** - Wondering what mod added this recipe? Now you can see it in the tooltip!
    - Optionally disable for recipes added by Satisfactory itself
    - ![Recipe Mod Name screenshot](https://i.imgur.com/95LDarx.png)
  - **Sink Points Profit** - Find out how many AWESOME Points the recipe gains you.
    - It will attempt to estimate (displaying a warning symbol) when unsinkable items are involved in the recipe.
    - Optionally enable displaying a points per minute calculation
    - ![Sink Points Profit screenshot](https://i.imgur.com/yO7ijMk.png)
      ![Sink Points Profit codex screenshot](https://i.imgur.com/u2v3Vb7.png)
- **Build Gun Menu**
  - Makes the Info Sidebar in the Build Gun scrollable. A scrollbar will appear if information displayed by this mod (or any other mod) would make it longer than the normal window.
  - **What Mod Added This Category?**
    - Tooltip will say what mod added the build category to the left sidebar
    - Disabled by default for categories added by Satisfactory itself
    - ![Build Gun category screenshot](https://i.imgur.com/Iek58Ih.png)
  - **What Mod Added This Building?**
    - Info Sidebar will tell you what mod added the building
    - If the mod that added the *recipe* for the building is different from the one that added the building, it will also be displayed
    - Disabled by default for buildings added by Satisfactory itself (except if a mod provides an alternate building recipe for the building)
    - ![Build Gun building mod name screenshot](https://i.imgur.com/LB0Z5JF.png)

## Changed Stuff

- The mod has basically been rewritten, so in a sense everything has changed.
- You can now turn off the "what am I looking at" widget in the mod configs
- The overlay font has been re-styled to match the base game's UI
- Changed the layout of the "what am I looking at" widget to scale each section (target name, mod that added, additional info) separately in the case that one of them is very long

## Bugfixes

- Fixed that Foundations, Walls, Splitters, etc. were not being picked up in Update 7 experimental (caused by switch the the lightweight instances system)

## Known Bugs

- Some plants don't show up on the foliage overlay
- Gates have an unusually large hitbox (for their player/vehicle detector trigger) so the "what am I looking at" overlay will sometimes say you're looking at a gate when you're actually looking at something else
- If a mod modifies content via a Content Default Object modification, it does not leave any trace that is detectable by TFIT. This means that TFIT will not be able to detect what mod modified the modified content, and could still credit it as being from Satisfactory.
- Fluids will occasionally display their stack size as -0 m^3 the first time their tooltip is displayed. Opening the tooltip again will fix this.

## Cool Tools for Developers

- **Recipe Path Display**
  - View the blueprint path of a recipe for troubleshooting and research
  - Click it (from the codex) to copy the path to clipboard
  - ![Recipe Path Display](https://i.imgur.com/Xx6MWQW.png)
- **Descriptor Path Display**
  - View the blueprint path of a descriptor for troubleshooting and research
  - ![Descriptor Path Display](https://i.imgur.com/6ZI5cbt.png)
- **Buildgun Recipe Path Display**
  - View the blueprint path of a building's recipe for troubleshooting and research
  - Click it to copy the path to clipboard
  - ![Buildgun Recipe Path Display](https://i.imgur.com/a3bU2yb.png)
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
