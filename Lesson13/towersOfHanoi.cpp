#include <iostream>
using namespace std;

// MARK: Recursive solution

/// Receives the number of disks and the label of each pillar.
void hanoiRecursive(int disk, char firstPillar, char secondPillar, char thirdPillar) {
  if(disk == 1) {
    cout << "Disk " << disk << " from pillar " << firstPillar << " to pillar " << thirdPillar << '\n';
    return;
  }

  hanoiRecursive(disk-1, firstPillar, thirdPillar, secondPillar);
  cout << "Disk " << disk << " from pillar " << firstPillar << " to pillar " << thirdPillar << '\n';
  hanoiRecursive(disk-1, secondPillar, firstPillar, thirdPillar);
}

// MARK: Iterative solution

/// Returns the index of the disk at the top of the pillar.
/// If there are no disks the function returns 0.
int topDiskIndex(int pillar[]) {
  int i;
  if(pillar[0] == 0) return 0;

  for(i = 0; pillar[i] != 0; i++);

  return i-1;
}

/// Prints the disks on a pillar.
/// If the pillar does not have disks, it prints 0.
void printPillar(int pillar[]) {
  int i = 0;
  for(i = 0; pillar[i] != 0; i++) {
    cout << pillar[i] << " ";
  }
  if(i == 0) cout << 0;

  cout << '\n';
}

/// This function receives two pillars and decides how to move a disc between them.
/// It prints the label of the two pillars as a char, received as a parameter.
void moveBetween(int firstPillarDisks[], int secondPillarDisks[], char firstPillar, char secondPillar) {
  int firstPillarTopIndex = topDiskIndex(firstPillarDisks);
  int secondPillarTopIndex = topDiskIndex(secondPillarDisks);

  if(firstPillarDisks[firstPillarTopIndex] < secondPillarDisks[secondPillarTopIndex]) {
    if(firstPillarDisks[firstPillarTopIndex] == 0) {
      cout << "Disk " << secondPillarDisks[secondPillarTopIndex] << " from pillar " << secondPillar << " to pillar " << firstPillar << "\n";

      firstPillarDisks[firstPillarTopIndex] = secondPillarDisks[secondPillarTopIndex];
      secondPillarDisks[secondPillarTopIndex] = 0;
    } else {
      cout << "Disk " << firstPillarDisks[firstPillarTopIndex] << " from pillar " << firstPillar << " to pillar " << secondPillar << "\n";

      secondPillarDisks[secondPillarTopIndex+1] = firstPillarDisks[firstPillarTopIndex];
      firstPillarDisks[firstPillarTopIndex] = 0;
    }
  } else {
    if(secondPillarDisks[secondPillarTopIndex] == 0) {
      cout << "Disk " << firstPillarDisks[firstPillarTopIndex] << " from pillar " << firstPillar << " to pillar " << secondPillar << "\n";

      secondPillarDisks[secondPillarTopIndex] = firstPillarDisks[firstPillarTopIndex];
      firstPillarDisks[firstPillarTopIndex] = 0;
    } else {
      cout << "Disk " << secondPillarDisks[secondPillarTopIndex] << " from pillar " << secondPillar << " to pillar " << firstPillar << "\n";

      firstPillarDisks[firstPillarTopIndex+1] = secondPillarDisks[secondPillarTopIndex];
      secondPillarDisks[secondPillarTopIndex] = 0;
    }
  }
}

const int MAX_DISKS = 256;

void hanoiLinear(int disks) {
  int firstPillarDisks[MAX_DISKS] = {0};
  int secondPillarDisks[MAX_DISKS] = {0};
  int thirdPillarDisks[MAX_DISKS] = {0};

  // Put disks on first pillar
  for (int i = 0; i < disks; i++) {
    firstPillarDisks[disks - i - 1] = i+1;
  }

  if(disks % 2 == 0) {
    for(int i = 0; i < (1<<(disks)) - 1;) {
      moveBetween(firstPillarDisks, secondPillarDisks, 'A', 'B');
      i++;
      if(i == (1<<(disks)) - 1) break;
      moveBetween(firstPillarDisks, thirdPillarDisks, 'A', 'C');
      i++;
      if(i == (1<<(disks)) - 1) break;
      moveBetween(secondPillarDisks, thirdPillarDisks, 'B', 'C');
      i++;
      if(i == (1<<(disks)) - 1) break;
    }
  } else {
    for(int i = 0; i < (1<<(disks)) - 1;) {
      moveBetween(firstPillarDisks, thirdPillarDisks, 'A', 'C');
      i++;
      if(i == (1<<(disks)) - 1) break;
      moveBetween(firstPillarDisks, secondPillarDisks, 'A', 'B');
      i++;
      if(i == (1<<(disks)) - 1) break;
      moveBetween(secondPillarDisks, thirdPillarDisks, 'B', 'C');
      i++;
      if(i == (1<<(disks)) - 1) break;
    }
  }
}

int main() {
  int disks = 4;
  cout << "---------- Iterative: ----------\n";
  hanoiLinear(disks);
  cout << "---------- Recursive: ----------\n";
  hanoiRecursive(disks, 'A', 'B', 'C');
}
