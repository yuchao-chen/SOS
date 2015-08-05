import QtQuick 2.0
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Rectangle {
    id: root
    RowLayout {
        anchors.fill: parent
        Item {
            Layout.fillWidth:  true
            Layout.fillHeight: true
            ComboBox {
                model: ["Apple", "Orange", "Nut"]
                id: comboColors
                anchors.centerIn: parent
            }
        }
    }
}
