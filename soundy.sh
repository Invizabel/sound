ffmpeg -f lavfi -i "sine=frequency=20000:sample_rate=48000:duration=60" -c:a pcm_s16le -ac 2 20k.wav
