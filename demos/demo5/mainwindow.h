#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class QSettings;
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initSettings(const QString orgName, const QString appName);

private slots:
    void closeSlot();
    void sendMailSlot();
    void agregarAdjuntoSlot();
    void quitarAdjuntoSlot();
private:
    void createConnections();
    void loadSettings();
    void saveSettings();
private:
    Ui::MainWindow *ui;

    QSettings *m_settings;
};
#endif // MAINWINDOW_H
