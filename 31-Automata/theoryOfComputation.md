###Theory Of computation
* We will look at theoretical models of ocmuptation, what can be ocmputed/solved, relative ease/difficulty of computation.
  * Not related to asympottic complexity
###Finite State Machine (FSM) / Finite State Automata (FSA)
* Example: Controller for an automatic door. Step on sensor on floor and it swings open.

    -----------------------
    |       |       |
--> | front | rear  |       --->
    -----------------------
            ^
            |
            door - door swings open on rear side
Notes: 
* Door can be open or closed. (2 states of the door)
* Input the controller can receive
  * front
  * rear
  * both
  * neither

**Transition Table**

______|**Neither**  | **Front** | **Rear**  | **Both
closed| closed      | open      | closed    | open
open  | closed      | open      | open      | open

(Rear, Open) -> Open . Is this so that the door doesn't close on the person in the rear I'm guessing?

###State Diagram

    \ neither, rear, both     \ front, rear, both
    ^\                        ^\
    | \                       | \
    |  >        front         |   >
    -------      ---->        ---------
    |closed|                  |open   |
    -------      <------      ---------
                  neither
