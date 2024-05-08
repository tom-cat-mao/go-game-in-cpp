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
each of them will lose an arrow int the direction oppposite two stones. Then it will create a new block which include the map of two previous blocks and the number of the pointer is the sum of each directions of two previous stones.
#### CAPTURED
as long as the sum of all the directors' pointers is 0, the block has been captured and the block will be free and the map will be clean. All the maps based on the stones on the mapscoordinate axis will be cleaned, too. 
#### PASS
the thenory of passing stones is skip current round and let your opponent to make a dicision. Either skip or continue.(stll need to be disscussed.)
### SCORES
count the number of the black stones and the white stone on the broad. Find the bigger one.
## FINISH
press finish button on the screem (or each of them pass two rounds consistently?)