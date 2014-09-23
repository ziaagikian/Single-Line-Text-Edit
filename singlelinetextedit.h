/* Copyright 2014 ziaagikian <ziaagikian@gmail.com>
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.

*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SINGLELINETEXTEDIT_H
#define SINGLELINETEXTEDIT_H

#include <QtGui>
#include <QTextEdit>
#include <QApplication>
#include <QStyleOptionFrameV2>
class SingleLineTextEdit : public QTextEdit
{
public:
    SingleLineTextEdit();
     void keyPressEvent(QKeyEvent *event);

private:
     int getFontHieght();
     int padding = 5; //Constant height padding

};

#endif // SINGLELINETEXTEDIT_H
