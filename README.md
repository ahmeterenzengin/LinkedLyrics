# LinkedLyrics

**LinkedLyrics** is a console-based music library management application built using the Linked List data structure. It allows users to dynamically create, modify, and navigate a playlist through efficient pointer manipulation.

---

## Research Problem

When creating a program, usually we use arrays to store the data. But in this program, such as a playlist management system, when you want to add elements between the current elements, you have to shift every element and in big datasets, it costs too much. But when you use a linked list, the data are not together; we know the next data’s place with a pointer. With that, you can easily add a new song in a linked list.

---

## Motivation

The motivation behind LinkedLyrics is to leverage dynamic memory allocation to create a more liquid data structure. By using nodes and pointers, the application can grow or shrink in real-time without the overhead of shifting data. The goal is to provide a smooth user experience where songs can be reordered or removed with minimal computational effort.

---

## Control Flow

1.  **Song Instantiation:** Every song is instantiated from the `Song` class, and every song contains the song’s name and the next song’s pointer.
2.  **User Input:** The program asks the user for a choice:
    *   **1. Insert at the front:** The new song becomes the new head, and its next points to the previous start of the list.
    *   **2. Insert at the end:** The program traverses until it finds `NULL` and attaches the new song there.
    *   **3. Insert after a specific song:** The program traverses every song and compares the previous name we give with the other names in the linked list. If it matches, we make the previous value’s next become the new value’s next, and the new value's next becomes the previous value’s next.
    *   **4. Search for a song:** The system loops through the nodes starting from the head, comparing the input string with the name variable of each node.
    *   **5. Delete a song:** The system loops through until it finds the song name we want to delete. If it couldn’t be found, it prints out: *"Value not found in the list."* If it is on the list, `previous’s next = song we want to delete’s next`.
    *   **6. Exit.**

**Visual Feedback:** After every action, the `printPlayList` function iterates through the list to display the current sequence (e.g., `Song A -> Song B -> NULL`).

---

## Deployment

This project is directly uploaded from the GitHub repo: [https://github.com/ahmeterenzengin/LinkedLyrics](https://github.com/ahmeterenzengin/LinkedLyrics)
