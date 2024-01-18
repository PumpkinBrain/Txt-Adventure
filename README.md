# Text Adventure Engine


## Description

This application is an attempt to create a text-adventure (or interactive fiction) game engine, which will allow users to create and add their own objects, scenarios and commands as they wish.

For now, due to my lack with familiarity with C++, I will not be using any libraries, but that might change in the future.

## Installation

I have created the complie.sh script to facilitate the building process, as I had trouble making a Makefile work the way I wanted and didn't want to spend too much time into that at the moment

In the future, I will study makefiles a bit more in-depth and include one in the project as to make the building process as platform-agnostic as possible.


## Current development status

I have noticed a big flaw in the design of my code. By using a object-oriented design, creating and adding entities in the game became a logistical
and logical nightmare, with excessive and inflexible uses of inheritance.
Gladly, during my studies I came across Dave Churchill's game programming course, which is [available on youtube](https://www.youtube.com/watch?v=S7lXSihz0ac&list=PL_xRyXins848nDj2v-TJYahzvs-XW9sVV). In which he presents the ECS (Entity, Component, Systems) design, which proves to be far easier, flexible, and reliable
than whatever I was doing. I shall drop this project for the time being while studying the course (it has a focus on graphic games, so I'll have to postpone my text game
for the time being).
