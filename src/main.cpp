#include <QCoreApplication>
#include <QFile>
#include <QTextStream>

int main(int argc, char* argv[]) {
    QCoreApplication app(argc, argv);
    QFile output(QStringLiteral("test.csv"));

    if (!output.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        QTextStream(stderr) << "Cannot open test.csv: " << output.errorString() << '\n';
        return 1;
    }

    QTextStream stream(&output);
    stream << "test,3333\n";
    stream.flush();

    if (stream.status() != QTextStream::Ok) {
        QTextStream(stderr) << "Cannot write test.csv.\n";
        return 1;
    }

    output.close();
    QTextStream(stdout) << "Wrote test,3333 to test.csv.\n";
    return 0;
}
