<h1 align="center">🌸 pokitweaks</h1>

![Program "GUI"](https://files.catbox.moe/i5zrn0.png)

# About
This abuses a [bug](https://bugs.mojang.com/browse/MC-74984) in Minecraft that allows you to send packets to your client from one server (in this case your own) to another.
This program uses Lunar Client's support for Deep Links ``lunarclient://play`` which interacts directly with the Launcher and the user's game. 
You need a Minecraft server in order for this to work and it isn't provided in this repository.

**This exploit isnt a 100% success rate, so if it fails try again.**

* Lunar Client **ONLY**
* This only works in 1.20 and below.

# Usage
* Launch a Minecraft server on localhost:25565
* Run the .exe and input the server IP you wish to connect to.
* Enjoy

# Showcase
https://files.catbox.moe/f9xyhj.mp4

# Help
* **"java.net.ConnectionException"** > Is your server running?
* **"It doesn't connect me to the server"** > Make sure the server version is on or supports the game version you are on.
* **"Why am I in the void / I can't move"** > You need to change world's or servers. *ex. /hub*
* **"You logged in from another location"** > You were already logged onto the localhost server.
* **"I lost connection / disconnected after logging in"** > Run the program again, this may also depend on ping which makes it not a 100% success rate.
