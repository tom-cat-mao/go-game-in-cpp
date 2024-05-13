 go-game-in-cpp
# GO GMAE
## BASIC
white and black stones with a go broad.
### STONES 
-1 for black
0 for blank
1 for white
As we put a stone on the broad, it will has 4 arrows pointed to 4 orientations.
As soon as we put the stone on the broad, it has become a block with its color and 4 arrows.
when we talk about block, it is a container of the same colour stones. 
we don't have to think about how many stones they are, we only talk about how many arrows which haven't been blocked and which way each of them pointing to. And the most exciting thing is, we don't need to care about the orientations so that we can only need to write down the number of the arrows in the block.
## BLOCKS
every stones we place, will make a block. 
## GO BROAD
It is a big 2 dimention array(maybe vector) with -1, 0, 1 inside. 
### ELEMENTS
#### ACCOUNTS
the number of stones inside the block
#### ARROWS
each block has arrows which points to 4 orientations.
### ALGORITHM
#### CONSOLIDATED
as the other block is beside the block(this condition only happens when you place a ston so it can be active), if they are the same colour, they will consolidate.
each of them will lose an arrow int the direction oppposite two stones. Then it will create a new block which include the map of two previous blocks and the number of the pointer is the sum of each directions of two previous stones.
#### CAPTURED
as long as the number of arrows is 0, the block has been captured and the block will be free and the map will be clean. All the maps based on the stones on the mapscoordinate axis will be cleaned, too. 
As the captured blocks is marked as free, it will link to each stones it has and then each of the stones will checkout whether there is any ally in there 4 orientations and then give them an arrow.
#### PASS
the thenory of passing stones is skip current round and let your opponent to make a dicision. Either skip or continue.(stll need to be disscussed.)
### SCORES
focus on one line. as we point to a stone, we put the number in to a stack with its colour. as we point to a blank we put a number into previous stack(the colour was ordered by the last stone it pointed to). As we point to the same colour, we put it into the previous stack and add the number into a global number and then free the stack.
## FINISH
press finish button on the screem (or each of them pass two rounds consistently?i)
