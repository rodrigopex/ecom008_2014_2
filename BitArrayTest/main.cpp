#include <QCoreApplication>
#include <QBitArray>
#include <QByteArray>
#include <QDebug>
#include <QFile>

char QByteArrayToChar(QByteArray data, int begin = 0) {
    char ret = 0;
    qDebug() << data.size() - begin;
    for(int i = begin; i < (begin + 8) && i < data.size(); ++i) {
        char tmp = data.at(i);
        qDebug() << QByteArray().append(tmp).toHex();
        if(tmp > 0) {
//            ret = ret | (tmp << (7-((i - begin)%8)));
            ret = ret | tmp << (i - begin);
        }
    }
    return ret;
}

void test1() {
    QByteArray a;
    a.append((char) 0);

    QByteArray b;
    b.append(1).append(1).append((char) 0);

    QByteArray c;
    c.append(1).append(1).append(1);

    QByteArray d;
    d.append(1).append((char) 0);

    QByteArray codification;
    codification.append(d).append(d).append(a).append(a).append(a).append(a).append(b).append(c);

    qDebug() << "Lixo:" << 8 - codification.size() % 8;
    for(int j = 0; j < codification.size(); j += 8) {
        qDebug() << "R[" << j/8 << "]:" << QByteArray().append(QByteArrayToChar(codification, j)).toHex();
    }
}

void test2() {
    QByteArray a;
    a.append((char) 0).append(1);

    QByteArray b;
    b.append(1);

    QByteArray c;
    c.append((char) 0).append((char) 0).append((char) 0);

    QByteArray d;
    d.append((char) 0).append((char) 0).append(1);

    QByteArray codification;
    codification
            .append(a)
            .append(a)
            .append(c)
            .append(d)
            .append(b)
            .append(b);

    qDebug() << "Lixo:" << 8 - codification.size() % 8;
    QByteArray decodedData;
    for(int j = 0; j < codification.size(); j += 8) {
        decodedData.append(QByteArrayToChar(codification, j));
    }
    QFile file("/tmp/test.huff");
    file.open(QIODevice::WriteOnly);
    file.write(decodedData);
    file.close();
}


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    test2();
    return app.exec();
}
