# GO GMAE
## BASIC
white and black stones with a go broad.
### STONES 
-1 for black
0 for blank
1 for white
### ALGORITHM
We used Deep First method. As a stone is placed, it will examine the 4 orientation. If at least one orientation is free, it will be a lively stone. There are two situations that the orientation is free. 
First, if theere isn't any stone on that place, then the orientation is free (this is the easiest situation). Another situation is that there is your stone on the place, then it will go to that stone and then make the same examination on it.
Then the process become a recussion (actually we made a loop instead of a recussion to achiece it), if onw of the recussion return true, then the stone could occupied the place.
As for the capture, as I mentioned before. As soon as the stone is placed, it will examine the stones around it. If the stone around it is its ally, the ally stone will get to the same recussion, and if the recussion return false without doubt all the ally stones which had included in the whole process is dead.
Then all the terrtories will be signed with nothing. 
### BROAD
Each move will triggered the function to repaint the whole broad and the stones on it so that the broad could be updated in time.
The broad is consisted with a rectangular coordinate. The x,y place is calcualted in time.
### STORAGE(STL)
All the data are storaged in a repository by STLite. The name and passwords own one table, each name has a table with their history from each game.
Each move in the game will be written into the table as log.
### REPLAY
With the logs in specialize table, the moves could be retrived both in forward and backward mode.
### MUSIC
Add some music in the mainwindow and dashbroad. And we also add the sound to make the whole game more relistic.
