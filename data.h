/*
 * This file defines all data structures used by i3
 *
 */

/*
 * Defines a position in the table
 *
 */
typedef struct Cell {
	int row;
	int column;
} Cell;

/*
 * We need to save the height of a font because it is required for each drawing of
 * text but relatively hard to get. As soon as a new font needs to be loaded, a
 * Font-entry will be filled for later use.
 *
 */
typedef struct Font {
	char *name;
	int height;
} Font;

/*
 * A client is X11-speak for a window.
 *
 */
typedef struct Client {
	/* TODO: this is NOT final */
	Cell old_position; /* if you set a client to floating and set it back to managed,
			      it does remember its old position and *tries* to get back there */
} Client;
