**Representative Democracy**
<br>
<br>
[ Memory: 64 MB, CPU: 1 sec ]

The N cows (1 <= N <= 100,000) on Farmer John’s field are attempting to form a representative democracy. The cows are currently standing in a line and each cow belongs to one of two political parties: Guernseys and Holsteins. The cows need to establish voting stations along their line so that each party can elect their representative. 

Each cow is willing to walk at most K (0 <= K <= N-1) units to the nearest voting station. Further, only Guernseys can vote at Guernsey voting stations and only Holsteins can vote at Holstein voting stations.  
Given a string of G’s and H’s representing the party of each cow in line, determine the minimum number of voting stations required so that each cow can vote. Also, print one valid arrangement of voting stations.

INPUT FORMAT

Line 1: One integer: T, the number of independent subtasks.

For each subtask, there are two lines of input.

The first line contains N (the number of cows) and K (the distance they can walk)

The second line contains a length N string of G’s and H’s denoting the party of the cows in line.

OUTPUT FORMAT

For each test case, output two lines:

The first line should contain an integer representing the minimum number of patches needed to feed all the cows.

The second line should contain a string of length N, representing a configuration of voting stations that achieves the minimum number of stations required. Each character corresponds to a position in the field: '.' denotes no station, ‘G’ denotes a station for Guernseys, and 'H' denotes a station for Holsteins.
<br>
<br>
SAMPLE INPUT

    3
    5 0
    GGGHH
    6 2
    HHGHGH
    7 1
    GGGHHGG
    8 3
    GGGHHHGH
<br>    
SAMPLE OUTPUT

    5
    GGGHH
    3
    ..H..GH
    3
    .G..H.G
    2
    ...G.H..
<br>    
Note that the configurations of patches provided above may not be the only possible valid configurations.

<br>
<br>
MODE: normal <br>
Language: cpp<br>
