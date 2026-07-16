#include <iostream>

int main()
{
  std::string tone1{}, tone2{}, tone3{};
  std::cin >> tone1 >> tone2 >> tone3;

  std::string tones[] = {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};

  int t1{}, t2{}, t3{};
  for (int i{}; i < 12; i++)
  {
    if (tones[i] == tone1)
    {
      t1 = i;
      break;
    }
  }

  for (int i{}; i < 12; i++)
  {
    if (tones[i] == tone2)
    {
      t2 = i;
      break;
    }
  }

  for (int i{}; i < 12; i++)
  {
    if (tones[i] == tone3)
    {
      t3 = i;
      break;
    }
  }



  int notes[3] = {t1, t2, t3};

  int rotation{};
  std::string root{};
  std::string type{};
  std::string inversion{};

  for (int i{}; i < 3; ++i)
  {
    int a = notes[i];
    int b = notes[(i + 1) % 3];
    int c = notes[(i + 2) % 3];

    int interval1 = (b - a + 12) % 12;
    int interval2 = (c - b + 12) % 12;

    if (interval1 == 4 && interval2 == 3) {
      root = tones[a];
      type = "major";
      rotation = i;
      break;
    } else if (interval1 == 3 && interval2 == 4) {
      root = tones[a];
      type = "minor";
      rotation = i;
      break;
    } else if (interval1 == 4 && interval2 == 4) {
      root = tones[a];
      type = "augmented";
      rotation = i;
      break;
    } else if (interval1 == 3 && interval2 == 3) {
      root = tones[a];
      type = "diminished";
      rotation = i;
      break;
    }
  }

  if (rotation == 0)
    inversion = "root position";
  else if (rotation == 1)
    inversion = "second inversion";
  else
    inversion = "first inversion";

  std::cout << root << '\n' << type << '\n' << inversion << '\n';

  return 0;
}
