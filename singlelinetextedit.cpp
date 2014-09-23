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
    #include "singlelinetextedit.h"

    SingleLineTextEdit::SingleLineTextEdit()
{
    setTabChangesFocus(true);
    setWordWrapMode(QTextOption::NoWrap);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    setFixedHeight(getFontHieght());
}

/**
  * <p>Ignore Enter key. </p>
  * @brief SingleLineTextEdit::keyPressEvent
  */
void SingleLineTextEdit::keyPressEvent(QKeyEvent *keyEvent){
    if (keyEvent->key() == Qt::Key_Return || keyEvent->key() == Qt::Key_Enter)
        keyEvent->ignore();
    else

        QTextEdit::keyPressEvent(keyEvent);
}

int SingleLineTextEdit::getFontHieght(){
    QFontMetrics fm(font());
    int height = fm.height() + padding;
    return height;
}
