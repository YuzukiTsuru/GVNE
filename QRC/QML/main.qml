import QtQuick 2.9
import QtQuick.Controls 2.2
import com.GVNE.ApplicationInfo 1.0

ApplicationWindow {
    visible: true
    width: 1280
    height: 720
    title: applicationInfo.appName

	// define the id of cpp class
    ApplicationInfo {
        id: applicationInfo
    }

	// Main Text Display
    Text {
        text: applicationInfo.appVer
        anchors.centerIn: parent
    }
}
