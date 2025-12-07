// @ts-check

/**
 * Implement the classes etc. that are needed to solve the
 * exercise in this file. Do not forget to export the entities
 * you defined so they are available for the tests.
 */

export function Size(width = 80, height = 60) {
  this.width = width;
  this.height = height;
}

Size.prototype.resize = function resize(newWidth, newHeight) {
  this.width = newWidth;
  this.height = newHeight;
};

export function Position(x = 0, y = 0) {
  this.x = x;
  this.y = y;
}

Position.prototype.move = function move(newX, newY) {
  this.x = newX;
  this.y = newY;
};

export class ProgramWindow {
  constructor() {
    this.screenSize = new Size(800, 600);
    this.size = new Size();
    this.position = new Position();
  }

  resize(requestedSize) {
    const minWidth = 1;
    const minHeight = 1;

    const maxWidth = this.screenSize.width - this.position.x;
    const maxHeight = this.screenSize.height - this.position.y;

    const width = Math.min(Math.max(requestedSize.width, minWidth), maxWidth);
    const height = Math.min(Math.max(requestedSize.height, minHeight), maxHeight);

    this.size = new Size(width, height);
  }

  move(newPosition) {
    const x = Math.min(
      Math.max(newPosition.x, 0),
      this.screenSize.width - this.size.width
    );

    const y = Math.min(
      Math.max(newPosition.y, 0),
      this.screenSize.height - this.size.height
    );

    this.position = new Position(x, y);
  }
}

export function changeWindow(win) {
  win.resize(new Size(400, 300));
  win.move(new Position(100, 150));
  return win;
}
