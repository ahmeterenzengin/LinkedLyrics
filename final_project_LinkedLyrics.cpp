#include <iostream>
#include <string>
using namespace std;
class Song
{
public:
  string name;
  Song *next;
};
void insertAtTheFront(Song **head, string newName)
{
  Song *newSong = new Song();
  newSong->name = newName;
  newSong->next = *head;
  *head = newSong;
}
void insertAtTheEnd(Song **head, string newName)
{
  Song *newSong = new Song();
  newSong->name = newName;
  newSong->next = NULL;
  if (*head == NULL)
  {
    *head = newSong;
    return;
  }
  Song *last = *head;
  while (last->next != NULL)
  {
    last = last->next;
  }
  last->next = newSong;
}
void printPlayList(Song *n)
{
  while (n != NULL)
  {
    cout << n->name << "->";
    n = n->next;
  }
  cout << "NULL" << endl;
}
void insertAfter(Song *previous, string newName)
{
  if (previous == NULL)
  {
    cout << "Previous can't be empty";
    return;
  }
  Song *newSong = new Song();
  newSong->name = newName;
  newSong->next = previous->next;
  previous->next = newSong;
}

void search(Song *head, string name)
{
  Song *current = head;
  while (current != NULL)
  {
    if (current->name == name)
    {
      cout << "Value found in the list." << endl;
      return;
    }
    current = current->next;
  }
  cout << "Value not found in the list." << endl;
}

void deleteSong(Song **head, string name)
{
  Song *current = *head;
  Song *previous = nullptr;
  while (current != nullptr && current->name != name)
  {
    previous = current;
    current = current->next;
  }
  if (current == nullptr)
  {
    cout << "Value not found in the list." << endl;
  }
  else
  {
    if (previous == nullptr)
    {
      *head = current->next;
    }
    else
    {
      previous->next = current->next;
    }
    delete current;
  }
}
int main()
{
  int choice = 0;
  string newSong;
  Song *head = nullptr;
  while (true)
  {
    cout << "\nWelcome\n ";
    cout << "That's the current list\n";
    printPlayList(head);
    cout << "========================MENU========================\n";
    cout << "1. Insert at the front\n";
    cout << "2. Insert at the end\n";
    cout << "3. Insert after a specific song\n";
    cout << "4. Search for a song\n";
    cout << "5. Delete a song\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1)
    {
      cout << "Please enter the song name you want to add" << endl;
      getline(cin >> ws, newSong);
      insertAtTheFront(&head, newSong);
      cout << "New Value added into list" << endl;
      cout << "Current List\n";
      printPlayList(head);
    }
    else if (choice == 2)
    {
      cout << "Please enter the song name you want to add" << endl;
      getline(cin >> ws, newSong);
      insertAtTheEnd(&head, newSong);
      cout << "New Value added into list" << endl;
      cout << "Current List\n";
      printPlayList(head);
    }
    else if (choice == 3)
    {
      string previousSong;
      cout << "Please enter the song name after which you want to add the new song" << endl;
      getline(cin >> ws, previousSong);
      cout << "Please enter the song name you want to add" << endl;
      getline(cin >> ws, newSong);
      Song *temp = head;
      while (temp != NULL && temp->name != previousSong)
      {
        temp = temp->next;
      }
      if (temp == NULL)
      {
        cout << "Previous value not found in the list." << endl;
        continue;
      }
      insertAfter(temp, newSong);
      cout << "New Value added into list" << endl;
      cout << "Current List\n";
      printPlayList(head);
    }
    else if (choice == 4)
    {
      cout << "Current List\n";
      printPlayList(head);
      string songToSearch;
      cout << "Please enter the song name you want to search for" << endl;
      getline(cin >> ws, songToSearch);
      search(head, songToSearch);
    }
    else if (choice == 5)
    {
      string songToDelete;
      cout << "Please enter the song name you want to delete" << endl;
      getline(cin >> ws, songToDelete);
      deleteSong(&head, songToDelete);
      cout << "Song deleted from list" << endl;
      cout << "Current list\n";
      printPlayList(head);
    }
    else if (choice == 6)
    {
      cout << "You are exiting the PlayList , Goodbye!" << endl;
      break;
    }
    else
    {
      cout << "Invalid choice. Please try again." << endl;
    }
  }
}