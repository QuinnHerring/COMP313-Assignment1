Course Code: **COMP313**\
Name: **Quinn Herring**\
Assignment: **Assignment 1**

Game title: **PICK UP BRICKS**

Game Demo Link: **https://youtu.be/9awLCEepGsQ**

**Game Description**

*What is the main action in the game\
The main object of Pick Up Bricks is to successfully collect all 30 bricks within a specified timeframe. Bricks are scattered randomly throughout the level so each time you play, the gameplay will be slightly different. To make things harder, a scary ghost will chase and will kill you on contact, so be careful! The central platform is safe from the ghost, so use it wisely. Don’t wait around though, time is ticking!

*What was the hardest part of the game to get working in Unreal\
I found that setting up the AI for the ghost enemy was the hardest part to get working. Starting off, I didn’t fully understand how the Nav Mesh worked in conjunction with the enemy pathing. However, as I played around with it I managed to figure out how it worked and got it functional. It was also tricky to remove the central platform from the AI pathing. I had to do this as it caused a glitch that made the ghost kill you at the edge of the platform. After some research and learning a found an option in the details section that prevented the AI pathing onto the platform.

*What is the most interesting part of the game\
The most interesting part of the game is the bricks randomised spawning. I knew I wanted to get some basic replayability out of my game and I found that this was an effective way of doing so. I started by creating a large spawning space that spawned all bricks on the level at once. This created a problem where the bricks would spawn inside objects, making the game unplayable. I solved this by creating smaller spawning spaces and scattering multiple the map, each spawning a smaller amount of bricks. This created a similar effect of ‘randomised spawning’. This made the game fun to replay as each time you had a different experience running around collecting them. 
