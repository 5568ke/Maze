#ifndef MAZENODE_H
#define MAZENODE_H

/**
 * @file MazeNode.h
 * @author Mes (mes900903@gmail.com)
 * @brief The node of the maze
 * @version 0.1
 * @date 2024-09-22
 */

#include <cstdint>

enum class MazeElement : int32_t {
  INVALID = -1,
  WALL = 0,
  GROUND = 1,
  EXPLORED = 2,
  BEGIN = 9,
  END = 10,
};

struct MazeNode {
  int32_t y, x;
  MazeElement element;
};

#endif
