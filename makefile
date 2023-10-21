hero_game:
	mkdir -p build/hero_game/{config,players}
	g++ -Wall -std=c++17 -static -obuild/hero_game/game -Iinclude/* source/*
	strip --strip-all build/hero_game/game
delete:
	rm build/hero_game/game
clean:
	rm -rf build/*
