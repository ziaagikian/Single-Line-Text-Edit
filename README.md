It is QT based custom widget which allows you to have single line TextEdit. It is achieved by the following major steps.

1)- Inhert custom class from TextLineEdit and modify overlaoded method i.e. keyPressEvent to ignore enter key events.

2)- Disable horizontal and vertical scrolls.

3)- Set Fixed height i-e that of height of default fonts + padding if you want too.
