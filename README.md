# TFIT - The Ficsit Information Tool

Your ultimate source for more information about whatever it is you're looking at. Highly configurable and easily extensible by other mods.

![logo](https://raw.githubusercontent.com/deantendo/community/master/com_mp_yes.png)
Multiplayer Compatible!

## Feature Highlights

- Find out what mod added whatever you're looking at to the game, be it a building, item, recipe, or more.
  - Looking for information about HUB milestones and MAM trees? Check out [MAM Enhancer](https://ficsit.app/mod/MAMTips)!
- Get useful contextual information about what you're looking at in the world
- Easily find out what items stack to and how many AWESOME Sink points they're worth
- Additional information provided by other mods you have installed

If you have any ideas or feature request join our Discord:
<https://discord.gg/ds696q4>

## Full Feature List

### "What am I Looking At?" Overlay

- **You can enable/disable the overlay from the mod configs.**
- Names of **Buildings**
  - Don't want this info? Turn it off in the configs.
  - ![Manufacturer](https://i.imgur.com/WcLnRWZ.jpeg)
- Name, health, AI task status, and drops of **Creatures**
  - ![Creature](https://i.imgur.com/qEkkIuv.png)
- Potential drops from **Foliage**
  - Don't want this info? Turn it off in the configs.
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
    <source src="https://i.imgur.com/vxe5c52.mp4" autoplay="" controls="" type="video/mp4">
    </video>
  <!-- - https://streamable.com/mre83a -->
- Fuel, home port, destination port, docking status, and speed of **Drones**
  - ![Drone screenshot](https://i.imgur.com/oXIlUC9.jpeg)
- Flow rate and contents information of **Pipelines** and **Fluid Storages**
  - ![FluidBuffer](https://i.imgur.com/LlxbwN3.png)
  - ![Pipe](https://i.imgur.com/1bTs3mQ.png)
- Color information about **Painted Structures**
  - Visualize the swatch and see the color hexes used
  - Ignores buildings with the default swatch by default (can modify this in the configs)
  - Don't want this info? Turn it off in the configs.
  - ![DemoImage](https://i.imgur.com/zcr9Svm.png)
- Resource and mining progress of **Portable Miners**
  - ![Portable Miner](https://i.imgur.com/mXSY1L6.jpeg)
- Opening status, requirements, and power consumption of **Drop Pods**
  - ![PowerCost](https://i.imgur.com/AXTKQbt.jpeg)

### Item Tooltips

- **You can enable/disable all of these from the mod configs.**
- **Collapse Recipes Section** - By default, you must hold your Sprint key to see the recipes section of the tooltip. This can be reversed in the mod configs.
  - ![Collapsed recipes screenshot](https://i.imgur.com/nguAWD0.png)
- **Mod Name** - Wondering what mod added this item? Now you can see it in the tooltip!
  - Optionally disable for content added by Satisfactory itself
  - ![Mod Name screenshot](https://i.imgur.com/4jTfN4d.png)
- **Dimensional Depot Stockpile** - Upload it or trash it? How much of this item is in your Dimensional Depot right now? No need to search it to find out!
  - Optionally also show this for Liquids and Gasses
  - ![Depot Stockpile screenshot](https://i.imgur.com/sn372K6.png)
- **Resource Sink Points** - Find out how many AWESOME Points you'll get from shredding this item, or a whole stack of it. If you can't sink it, it will say so as well.
  - Optionally disable for items that can't be sunk
  - Optionally also show for exactly how many items are in the stack, ex. "points for 4 assembly director systems"
  - Tells you how many points Liquids and Gasses would be worth if they could be sunk
  - ![Sink Points screenshot](https://i.imgur.com/b3Wa33z.png)
  - ![Sink Points unsinkable screenshot](https://i.imgur.com/8v32fCG.png)
- **Radioactive Items** - Items that are radioactive will now have a radioactive symbol in their tooltip and have the header bar turn lime green.
  - ![Radioactive Item screenshot](https://i.imgur.com/mQOnaUZ.png)
- **Stack Size** and Form - See what the max stack size of the item you're looking at is, and if it's a liquid or solid.
  - ![Solid screenshot](https://i.imgur.com/KQyjnML.png)
  - ![Liquid screenshot](https://i.imgur.com/rijtuKf.png)
  - ![Gas screenshot](https://i.imgur.com/YnSoIiq.png)
- **Fuel Energy Value** - Find out how much juice is stored this item, or a whole stack of it.
  - Disabled by default for items with no energy value
  - Optionally also show for exactly how many items are in the stack, ex. "energy for 28.3 L of fuel"
  - ![Fuel screenshot](https://i.imgur.com/HcXSDnj.png)
  - ![Fuel fluid screenshot](https://i.imgur.com/2c7vJHh.png)

### Recipe Information

- Additional information is now added to the recipe section of tooltips, which also appears in the in-game Codex. **You can enable/disable all of these from the mod configs.**
- Recipes are renamed to their display name, if they have one.
  - ![Renamed recipes screenshot](https://i.imgur.com/51JIskP.png)
- **Mod Name** - Wondering what mod added this recipe? Now you can see it in the tooltip!
  - Optionally disable for recipes added by Satisfactory itself
  - ![Recipe Mod Name screenshot](https://i.imgur.com/95LDarx.png)
- **Sink Points Profit** - Find out how many AWESOME Points using the recipe nets you.
  - Format: `Sum of Recipe Ingredients Points` → `Sum of Recipe Product Points` (±`Percentage difference`)
  - It will attempt to estimate when unsinkable items are involved in the recipe, displaying a warning symbol when estimates are made. Hover over the warning symbol (in the codex) to see an explanation.
  - Optionally enable displaying a points per minute calculation
  - ![Sink Points Profit screenshot](https://i.imgur.com/yO7ijMk.png)
    ![Sink Points Profit codex screenshot](https://i.imgur.com/u2v3Vb7.png)

### Build Gun Menu

- Makes the Info Sidebar in the Build Gun scrollable. A scrollbar will appear if information displayed by this mod (or any other mod) would make it longer than the normal window.
- **What Mod Added This Category?**
  - Tooltip will say what mod added the build category to the left sidebar
  - Disabled by default for categories added by Satisfactory itself
  - ![Build Gun category screenshot](https://i.imgur.com/Iek58Ih.png)
- **What Mod Added This Building?**
  - Info Sidebar will tell you what mod added the building
  - Also works for the Customizer tab
  - If the mod that added the *recipe* for the building is different from the one that added the building, it will also be displayed
  - Disabled by default for buildings added by Satisfactory itself (except if a mod provides an alternate building recipe for the building)
  - ![Build Gun building mod name screenshot](https://i.imgur.com/LB0Z5JF.png)

### Additional Configuration

- Configure the position, scale, color, and transparency of the overlay
- Configure if you must hold the Sprint key to expand/collapse recipe display in item tooltips

## Support The Developers

### Robb

If you enjoy Robb's work, please consider donating to his [completely optional tip jar](https://ko-fi.com/robb4).

### blockout22

[![Paypal](https://raw.githubusercontent.com/blockout22/TFIT/main/Images/Modpage/PaypalButton.png)](https://paypal.me/blockout22)
[![Patreon](https://c5.patreon.com/external/logo/become_a_patron_button.png)](https://www.patreon.com/blockout22)

## For Mod Developers

### Developer Utilities

TFIT also includes a number of helpful tools for mod development and troubleshooting.

A quick summary:

- **Overlay**
  - Debugging info (off by default)
    - Hit actor blueprint path and hit component name, exact position in world
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
  - ![Example of the command output](https://raw.githubusercontent.com/blockout22/TFIT/main/Images/Modpage/PointsCalcChat.png)
  - ![Example of the data table](https://raw.githubusercontent.com/blockout22/TFIT/main/Images/Modpage/PointsCalcDataTable.png)

### Using TFIT in your Mod

Your mod doesn't need to dependency-require TFIT to still benefit from and extend its feature set!

You can find information on how to extend TFIT's features with your own here: <https://github.com/blockout22/TFIT/blob/main/DEV_README.md>

## Credits

- Original mod by blockout22#1880
- 2.0.0 update by Robb#6731
- Icon design by Deantendo#4265
