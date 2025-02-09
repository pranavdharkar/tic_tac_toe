``` mermaid

graph TD;

1{{Tic Tac Toe}} --> 

2{{Welcome to Tic Tac Toe}} --> 

3{{"Display sample board with spot numbers"}} --> 

4{{Remember spot numbers}} --> 

5{{Enter Player 1 Name}} --> 

6{{Enter Player 2 Name}} --> 

7{{"Player 1 - Choose symbol (X or O) & validate input"}} --> 

8{{For loop - 4 iterations}};

8 -- Start --> 9{{"Display board"}} --> 

10{{"Player 1 - Enter spot number (1-9)", validate input & assign symbol}} --> 

11{{Check if Player 1 is the winner?}};

11 -- Yes --> 12{{Player 1 Wins! Exit game}};

11 -- No --> 13{{"Display board"}} --> 

14{{"Player 2 - Enter spot number (1-9)", validate input & assign symbol}} --> 

15{{Check if Player 2 is the winner?}};

15 -- Yes --> 16{{Player 2 Wins! Exit game}}

15 -- No --> 8;

8 -- End --> 17{{"Display board"}}  --> 

18{{"Player 1 - Enter spot number (1-9)", validate input & assign symbol}} --> 

19{{Check if Player 1 is the winner?}};

19 -- Yes --> 20{{Player 1 Wins! Exit game}}

19 -- No --> 21{{"Display board"}} --> 

22{{Display Draw}} --> 

23{{Exit game}};

classDef gameNode fill:#352F44,stroke:#5C5470,stroke-width:5px,color:#FAF0E6
class 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23 gameNode

linkStyle 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22 stroke:#352F44,stroke-width:5px; 


```