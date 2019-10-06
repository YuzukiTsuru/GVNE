import QtQuick 2.9
import QtQuick.Controls 2.2

ApplicationWindow {
    visible: true
    width: 1280
    height: 720
    title: qsTr("Gal Visual Novel Engine")

    Text {
        text: qsTr("Hello World\nGal Visual Novel Engine")
        anchors.centerIn: parent
    }
}
