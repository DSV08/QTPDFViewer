#include "PDFViewer.h"

PDFViewer::PDFViewer(QWidget *parent): QMainWindow(parent), ui(new Ui::PDFViewer)
{
	this->ui->setupUi(this);
	
	//chamada dos connects do QT
	this->criarConects();
}


PDFViewer::~PDFViewer()
{
	delete this->ui;
}


QString PDFViewer::getArquivoCorrente()
{
	return this->currentFileName;
}
