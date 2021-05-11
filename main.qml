import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.0

ApplicationWindow {
    id: window
    visible: true
    visibility: "FullScreen"
    width: 960
    height: 720
    title: qsTr("Stack")

    ColumnLayout {
        x: 380
        y: 258

        Button {
            id: button
            text: qsTr("gpio 15 ON")
            Layout.preferredHeight: 100
            Layout.preferredWidth: 200
            onClicked: {
                a.executeGPIO15ON()
            }
        }

        Button {
            id: button1
            text: qsTr("GPIO 15 OFF")
            Layout.preferredHeight: 100
            Layout.preferredWidth: 200
            onClicked: {
                a.executeGPIO15off()
            }
        }
    }





}

/*##^##
Designer {
    D{i:1;anchors_x:91;anchors_y:122}
}
##^##*/
