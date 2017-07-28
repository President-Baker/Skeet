###############################################################
# Program:
#     Project 09, Skeet
#     Brother Falin, CS165
# Author:
#     Tim Baker
# Summary:
#      Can move and shoot the rifle. Will spawn each different 
#      type of bird depending on a randomly generated number.
#      Point getting, bird, and bullet deaths all work as they
#      would be expected to.
# Above and Beyond
#     Created a second gun that will mimick the commands that
#     work for the first gun. Also made it so that a lander will
#     appear than can be shot down. Lander works similarly to
#     the tough bird, but the only difference is 5 bonus points
#     for killing it. Lander also has flames drawn according to
#     its velocity. All birds will loop the screen if they have
#     not been killed, and will remain looping until shot down.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o flying.o bird.o bullet.o sacredbird.o toughbird.o lander.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o flying.o bird.o bullet.o sacredbird.o toughbird.o lander.o $(LFLAGS)
	tar -cf skeet.tar makefile *.cpp *.h

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h bullet.h bird.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp

#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#
# Then, don't forget to add them to the dependecy list for a.out above.
#######################################################################
flying.o : flying.h flying.cpp velocity.h point.h point.cpp
	g++ -c flying.cpp

bullet.o : bullet.h bullet.cpp flying.h flying.cpp
	g++ -c bullet.cpp

bird.o : bird.h bird.cpp flying.h flying.cpp
	g++ -c bird.cpp

sacredBird.o : sacredbird.h sacredbird.cpp bird.h bird.cpp
	g++ -c sacredbird.cpp

toughBird.o : toughbird.h toughbird.cpp bird.h bird.cpp
	g++ -c toughbird.cpp

lander.o : lander.h lander.cpp bird.h bird.cpp
	g++ -c lander.cpp

###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o *.tar
