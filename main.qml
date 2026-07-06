import QtQuick 2.14
import QtQuick.Controls 2.14

ApplicationWindow {
    visible: true
    width: 400
    height: 250
    title: "Backend to QML Example"

    Column {
        anchors.centerIn: parent
        spacing: 15

        Text {
            text: "Name: " + personBackend.name
            font.pixelSize: 18
        }
        Text{
        text: "git revert check"
        }
        Button{
            text:"press to change name"
            onClicked: {
                   personBackend.changeName();
            }
        }

       }
}
