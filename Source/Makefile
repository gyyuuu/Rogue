#コンパイラ
CC = clang++

#コンパイルオプション
CFLAGS = -g -MMD -MP -std=c++20 -Wall -Wextra -Winit-self -Wno-missing-field-initializers -lncurses

#実行ファイル名
TARGET = Sample

#コンパイル対象のソースコード
SRCS = main.cpp
SRCS += GameSystem.cpp
SRCS += Character.cpp

#オブジェクトファイル名
OBJS = $(SRCS:.cpp=.o)

#インクルードファイルのパス
INCDIR = -I./header/

#ライブラリのパス
LIBDIR =

#ライブラリパス
LIBS =

#ターゲットファイル
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBDIR) $(LIBS)

#オブジェクトファイル生成
$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) $(SRCS)

#make all(cleanして再ビルド)
all: clean $(OBJS) $(TARGET)

#make clean
clean:
	-rm -f $(OBJ:S) $(TARGET)
