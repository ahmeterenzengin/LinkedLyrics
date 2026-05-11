##LinkedLyrics##
**LinkedLyrics** is a console-based music library
management application built using the Linked List
data structure. It allows users to dynamically create,
modify, and navigate a playlist through eƯicient
pointer manipulation. 

##Research Problem##
When creating a program ,
usually we use arrays for store the data. But in this
program such like playlist management system
when you want adding elements between the
current elements you have to shift every element
and in big datasets it costs too much . But when you
use linked list , the datas are not together we know
the next data’s place with pointer. With that,you can
easily add new song in linked list. 

##Motivation##
The motivation behind LinkedLyrics is
to leverage dynamic memory allocation to create a
more liquid data structure. By using nodes and
pointers, the application can grow or shrink in realtime without the overhead of shifting data. The goal
is to provide a smooth user experience where songs
can be reordered or removed with minimal
computational effort. 

##Control Flow##
1)Every song instantiating from Song class and every
song contains song’s name and next song’s pointer
2)User input: Program asks about the choice to user.
1) 1. Insert at the front 2) Insert at the end 3) Insert
after a specific song 4. Search for a song 5. Delete a
song 6. Exit.
If user choose 1 , The new song becomes the new
head, and its next points to the previous start of the
list.
If User choose 2, The program traverses until it finds
NULL and attaches the new song there.
If User choose 3 , The Program traverses every song
and its compares the previous name we give with the
other name in linked list. If its matched, we put the
previous value’s next become new value’s next
become previous value’s next.
If user choose 4 , The system loops through the
nodes starting from the head, comparing the input
string with the name variable of each node.
If user choose 5, The system loops through the until
find the song name we want to delete.If it couldn’t
find printed out("Value not found Ĝn the list.") .If it was on the list,
previous’s next =song we want to delete’s next .
Visual Feedback: After every action, the printPlayList
function iterates through the list to display the
current sequence (e.g., Song A -> Song B -> NULL). 
 
##Deployment##
This project is directly uploaded from github repo(https://github.com/ahmeterenzengin/LinkedLyrics).
