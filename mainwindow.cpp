#include "unittest.h"
#include "parsetext.h"
#include "mainwindow.h"
UnitTest::UnitTest(QObject *parent) : QObject(parent)
{

}

void UnitTest::testCalc()
{
    ParseText ptxt;
    QCOMPARE(ptxt.calc("2+2="), "2+2=4"); // Вспоминаем,
// что
// отправлялось
// в классе
QCOMPARE(ptxt.calc("8/2="), "8/2=4");
}

void UnitTest::testGUI()
{
MainWindow w;
w.show();
QTest::keyClicks(w.getPlainText(), "Test #@12+2="); // Ввводим текст
QCOMPARE(w.getPlainText()->toPlainText(), "Test 12+2=14"); // Проверяем
}
