#include <melody_player.h>
#include <melody_factory.h>

int buzzerPin = 14;

const char melodyString[] = "Bach - Toccata : d=4,o=5,b=125:a,16d6,16a,16e6,16a,16f6,16a,16d6,16a,16e6,16a,16f6,16a,16g6,16a,16e6,16a,16f6,16a,16g6,16a,16a6,16a,16f6,16a,16g6,16a,16a6,16a,16a#6,16a,16g6,16a,16a6,16a,16f6,16a,16g6,16a,16e6,16a,16f6,16a,16d6,16a,16e6,16a,16c#6,16a,2d6.";

MelodyPlayer player(buzzerPin);

void playSong() {

  //Melody melody = MelodyFactory.loadRtttlString(song);
  Melody melody = MelodyFactory.loadRtttlString(melodyString);
  if (melody) {
    player.play(melody);
  }
}

