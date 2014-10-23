It is QT based custom widget which allows you to have single line TextEdit. It is achieved by the following major steps.

1)- Inherit custom class from TextLineEdit and modify overlaoded method i.e. keyPressEvent to ignore enter key events.

2)- Disable horizontal and vertical scrolls.

3)- Set Fixed height i-e that of height of default fonts + padding if you want too.


<h3> License </h3>

Single-Line-Text-Edit is licensed under the <a href="http://www.gnu.org/licenses/gpl.html">GNU GPL</a>.
