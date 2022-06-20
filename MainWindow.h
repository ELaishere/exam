#ifndef h_MainWindow
#define h_MainWindow


#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE


// 请按题目要求, 自行对 MainWindow 类进行修改
class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow( QWidget* parent = nullptr );
	~MainWindow();

private:
	Ui::MainWindow* ui_;

}; // MainWindow class


#endif // h_MainWindow
