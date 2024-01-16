# Text Adventure Engine


## Description

This application is an attempt to create a text-adventure (or interactive fiction) game engine, which will allow users to create and add their own objects, scenarios and commands as they wish.

For now, due to my lack with familiarity with C++, I will not be using any libraries, but that might change in the future.

## Installation

I have created the complie.sh script to facilitate the building process, as I had trouble making a Makefile work the way I wanted and didn't want to spend too much time into that at the moment

In the future, I will study makefiles a bit more in-depth and include one in the project as to make the building process as platform-agnostic as possible.


## Current development status

Dev is going through a imposter syndrome and looking for something else to do.

The commands now work close to as intended, however, in order to make further progress I'll need to refactor the classes to make everything retrieve its description from the Json file, as to avoid hard-coding game texts. Then the next step will be to redesign the linking between Player, Rooms and Items.
