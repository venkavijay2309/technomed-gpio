import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    width: 600
    height: 400

    title: qsTr("Home")

    Label {
        text: qsTr("You are on the home page.")
        anchors.centerIn: parent
    }

    Button {
        id: button
        x: 69
        y: 80
        text: qsTr("led gpio 15 on")
    }

    Button {
        id: button1
        x: 69
        y: 135
        text: qsTr("led gpio 50 on")
    }

    Button {
        id: button2
        x: 196
        y: 80
        text: qsTr("led gpio 15 off")
    }

    Button {
        id: button3
        x: 196
        y: 135
        text: qsTr("led gpio 50 off")
    }
}
