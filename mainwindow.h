#include <QtWidgets>

class QWebView;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(const QUrl& url);

protected slots:

    void adjustTitle();
    void setProgress(int p);
    void finishLoading(bool);

    void highlightAllLinks();

private:
    QString jQuery;
    QWebView *view;
    int progress;
};
