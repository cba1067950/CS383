# CS383 Traffic Sim

- Feel free to edit this with your own notes/info. Could help for communication

## Some notes from dj (don't think we can put our names?)

- Milestone 1 (60%) due Wednesday, October 25th

- Just copy/paste from the website so we have visibility of 6 deliverables
1. Overall (Group mark)
    Directory structure as defined in class. 1%
    make Overall code compiles with all features included (even though they are empty) and make test gives a complete report of which test cases fail 1%
2. Class diagram for your feature (Individual Mark) 3%
3. Sequence diagram for your feature (Individual Mark) 3%
4. Public view (header files) for your feature. (Private view can just be message stubs) (Individual Mark) 2%
5. Complete test plan for all functions in your feature. Most test cases should fail since there is no code yet. (Individual Mark) 3%
6. Gantt time-line with time estimates for the remainder of your feature. 2%


### Notes about Traffic Light
- I'm only supposed to manage what state the light is in (if I understood that correctly). If so, I really only have to take the time and time multiplier (sim speed) into account and on a per-light basis return if its green, red, yellow, etc.
- I'll create a single `traffic light` object with constants like in the djconstants.h file and have them correspond to a lane
- There will have to be checking & testing to ensure there's no two green lights which could cause a collision
