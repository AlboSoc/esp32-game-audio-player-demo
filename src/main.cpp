#include "ESP32GameAudioPlayer.h"

enum class AudioID {
    BackgroundMusic,
    Explosion,
    VictoryFanfare
};

int main() {
    ESP32GameAudioPlayer<AudioID> gap;
    gap.addSound(AudioID::BackgroundMusic, "music/background.mp3", 44100, "MP3");
    gap.addSound(AudioID::Explosion, "effects/explosion.wav", 48000, "WAV");
    gap.addSound(AudioID::VictoryFanfare, "music/victory.ogg", 44100, "OGG");

    gap.play(AudioID::BackgroundMusic);
    gap.play(AudioID::Explosion);

    return 0;
}
