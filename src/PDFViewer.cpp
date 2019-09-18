#include "PDFViewer.h"

PDFViewer::PDFViewer(QWidget *parent): QMainWindow(parent), ui(new Ui::PDFViewer)
{
	ui->setupUi(this);
	
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


void PDFViewer::criarConects()
{
	connect(this->ui->actionAbrir_PDF, SIGNAL(triggered()), this, SLOT(slotAbrirPDF()));
}


void PDFViewer::slotAbrirPDF()
{
	/*
	//Pegando o arquivo que será aberto
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::homePath(), tr("Texto (*.txt)"));
	//this->ui->textEdit->clear();

	QPrinter printer;

	QPrintDialog *dialog = new QPrintDialog(&printer, this);
	dialog->setWindowTitle(tr("Print Document"));

	QPrinter printer(QPrinter::HighResolution);
	printer.setOutputFormat(QPrinter::PdfFormat);
	printer.setOutputFileName(fileName);
	QPainter painter;
	painter.begin(&printer);

	for (int page = 0; page < numberOfPages; ++page) {

		// Use the painter to draw on the page.

		if (page != lastPage)
			printer.newPage();
	}

	painter.end();*/
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::homePath(), tr("Texto (*.pdf)"));
	QPrinter printer(QPrinter::HighResolution);
	printer.setOutputFormat(QPrinter::PdfFormat);
	printer.setOutputFileName(fileName);



}
