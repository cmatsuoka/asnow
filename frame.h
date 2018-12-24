#ifndef FRAME_H_
#define FRAME_H_

/*
 * (ASCII) Snowflakes in terminal (inspired by xsnow)
 *
 * The asnow Authors
 * December, 2018. Public Domain
 *
 */

#include <unistd.h>

#define BLANK		' '
#define MIN(x,y)	((x)<(y)?(x):(y))
#define MAX(x,y)	((x)>(y)?(x):(y))

typedef struct {
	char	*buffer;
	int	columns;
	int	rows;
	int	size;
} Frame;

Frame*     new_frame(int columns, int rows);
void       put_on_frame(Frame *frm, int col, int row, char ch);
int        get_from_frame(Frame *frm, int col, int row);
void       fill_frame(Frame *frm, char ch);
void       text_on_frame(Frame *frm, int col, int row, char *s);
void       stamp_on_frame(Frame *frm, int col, int row, char *stamp[], int cols, int rows);
void       copy_frame(Frame *dst, Frame *src);
void       merge_frame(Frame *dst, Frame *src);
void       draw_frame(Frame *frm);

#endif  /* FRAME_H_ */
