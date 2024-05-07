 go-game-in-cpp
# GO GMAE
## BASIC
whtie and black stones with a go broad.
### STONES AND BLOCKS
as we put a stone on the broad, it will has 4 arrows pointed to 4 or orientations.
it could also be a block.
when we talk about block, it is a container of the same colour stones. 
we don't have to think about how many stones they are, we only talk about how many arrows which haven't been blocked and which way each of them pointing to.
## BLOCKS
every stones we place, will make a block. 
### ELEMENTS
#### ACCOUNTS
the number of stones inside the block
#### ARROWS
each block has arrows which points to 4 orientations.
### ALGORITHM
#### CAPTURED
when the arrows in 4 orientations are 0, the block is captured (or occupied) and the block will be deleted.
#### CONSOLIDATED
as the other block is beside the block(this condition only happens when you place a ston so it can be active), if they are the same colour, they will consolidate.
each of them will lose an arrow which points to each other and then 