#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QVector>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<Process> get_data_from_table();
    QVector<Process> fcfs(QVector<Process>v,float &avg_waiting);
    QVector<Process> SJF_preemitive(QVector<Process>processes,float &avg_waiting);
    QVector<Process> Priority_nonPreemptive(QVector<Process>processes,float &avg_waiting);
    QVector<Process> Priority_preemitive(QVector<Process> processes, float &avg_waiting);
    void draw(QVector<Process>v,float a);
    void set_process_time_line(QVector<Process>v);
private slots:

    void on_algorithm_comboBox_currentTextChanged(const QString &arg1);

    void on_no_of_process_value_valueChanged(int arg1);

    void on_simulate_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
