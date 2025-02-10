#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    populateCombBox();
    ui->txtJsonString->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::populateCombBox()
{
    getCountrylist();
    ui->cmbCountry->addItems(countryListWithCodes);
}

void MainWindow::getCountrylist()
{
    countryListWithCodes = QStringList({
        "AF - Afghanistan",
        "AL - Albania",
        "DZ - Algeria",
        "AS - American Samoa",
        "AD - Andorra",
        "AO - Angola",
        "AI - Anguilla",
        "AQ - Antarctica",
        "AR - Argentina",
        "AM - Armenia",
        "AW - Aruba",
        "AU - Australia",
        "AT - Austria",
        "AZ - Azerbaijan",
        "BS - Bahamas",
        "BH - Bahrain",
        "BD - Bangladesh",
        "BB - Barbados",
        "BY - Belarus",
        "BE - Belgium",
        "BZ - Belize",
        "BJ - Benin",
        "BM - Bermuda",
        "BT - Bhutan",
        "BO - Bolivia",
        "BQ - Bonaire, Sint Eustatius and Saba",
        "BA - Bosnia and Herzegovina",
        "BW - Botswana",
        "BV - Bouvet Island",
        "BR - Brazil",
        "IO - British Indian Ocean Territory",
        "BN - Brunei Darussalam",
        "BG - Bulgaria",
        "BF - Burkina Faso",
        "BI - Burundi",
        "CV - Cabo Verde",
        "KH - Cambodia",
        "CM - Cameroon",
        "CA - Canada",
        "KY - Cayman Islands",
        "CF - Central African Republic",
        "TD - Chad",
        "CL - Chile",
        "CN - China",
        "CX - Christmas Island",
        "CC - Cocos (Keeling) Islands",
        "CO - Colombia",
        "KM - Comoros",
        "CG - Congo",
        "CD - Congo (Democratic Republic of the)",
        "CK - Cook Islands",
        "CR - Costa Rica",
        "HR - Croatia",
        "CU - Cuba",
        "CW - Curaçao",
        "CY - Cyprus",
        "CZ - Czech Republic",
        "DK - Denmark",
        "DJ - Djibouti",
        "DM - Dominica",
        "DO - Dominican Republic",
        "EC - Ecuador",
        "EG - Egypt",
        "SV - El Salvador",
        "GQ - Equatorial Guinea",
        "ER - Eritrea",
        "EE - Estonia",
        "SZ - Eswatini",
        "ET - Ethiopia",
        "FK - Falkland Islands (Malvinas)",
        "FO - Faroe Islands",
        "FJ - Fiji",
        "FI - Finland",
        "FR - France",
        "GF - French Guiana",
        "PF - French Polynesia",
        "TF - French Southern Territories",
        "GA - Gabon",
        "GM - Gambia",
        "GE - Georgia",
        "DE - Germany",
        "GH - Ghana",
        "GI - Gibraltar",
        "GR - Greece",
        "GL - Greenland",
        "GD - Grenada",
        "GP - Guadeloupe",
        "GU - Guam",
        "GT - Guatemala",
        "GG - Guernsey",
        "GN - Guinea",
        "GW - Guinea-Bissau",
        "GY - Guyana",
        "HT - Haiti",
        "HM - Heard Island and McDonald Islands",
        "VA - Holy See (Vatican City State)",
        "HN - Honduras",
        "HK - Hong Kong",
        "HU - Hungary",
        "IS - Iceland",
        "IN - India",
        "ID - Indonesia",
        "IR - Iran (Islamic Republic of)",
        "IQ - Iraq",
        "IE - Ireland",
        "IM - Isle of Man",
        "IL - Israel",
        "IT - Italy",
        "JM - Jamaica",
        "JP - Japan",
        "JE - Jersey",
        "JO - Jordan",
        "KZ - Kazakhstan",
        "KE - Kenya",
        "KI - Kiribati",
        "KP - Korea (Democratic People's Republic of)",
        "KR - Korea (Republic of)",
        "KW - Kuwait",
        "KG - Kyrgyzstan",
        "LA - Lao People's Democratic Republic",
        "LV - Latvia",
        "LB - Lebanon",
        "LS - Lesotho",
        "LR - Liberia",
        "LY - Libya",
        "LI - Liechtenstein",
        "LT - Lithuania",
        "LU - Luxembourg",
        "MO - Macao",
        "MG - Madagascar",
        "MW - Malawi",
        "MY - Malaysia",
        "MV - Maldives",
        "ML - Mali",
        "MT - Malta",
        "MH - Marshall Islands",
        "MQ - Martinique",
        "MR - Mauritania",
        "MU - Mauritius",
        "YT - Mayotte",
        "MX - Mexico",
        "FM - Micronesia (Federated States of)",
        "MD - Moldova (Republic of)",
        "MC - Monaco",
        "MN - Mongolia",
        "ME - Montenegro",
        "MS - Montserrat",
        "MA - Morocco",
        "MZ - Mozambique",
        "MM - Myanmar",
        "NA - Namibia",
        "NR - Nauru",
        "NP - Nepal",
        "NL - Netherlands",
        "NC - New Caledonia",
        "NZ - New Zealand",
        "NI - Nicaragua",
        "NE - Niger",
        "NG - Nigeria",
        "NU - Niue",
        "NF - Norfolk Island",
        "MK - North Macedonia",
        "MP - Northern Mariana Islands",
        "NO - Norway",
        "OM - Oman",
        "PK - Pakistan",
        "PW - Palau",
        "PS - Palestine, State of",
        "PA - Panama",
        "PG - Papua New Guinea",
        "PY - Paraguay",
        "PE - Peru",
        "PH - Philippines",
        "PN - Pitcairn",
        "PL - Poland",
        "PT - Portugal",
        "PR - Puerto Rico",
        "QA - Qatar",
        "RE - Réunion",
        "RO - Romania",
        "RU - Russian Federation",
        "RW - Rwanda",
        "BL - Saint Barthélemy",
        "SH - Saint Helena, Ascension and Tristan da Cunha",
        "KN - Saint Kitts and Nevis",
        "LC - Saint Lucia",
        "MF - Saint Martin (French part)",
        "PM - Saint Pierre and Miquelon",
        "VC - Saint Vincent and the Grenadines",
        "WS - Samoa",
        "SM - San Marino",
        "ST - Sao Tome and Principe",
        "SA - Saudi Arabia",
        "SN - Senegal",
        "RS - Serbia",
        "SC - Seychelles",
        "SL - Sierra Leone",
        "SG - Singapore",
        "SX - Sint Maarten (Dutch part)",
        "SK - Slovakia",
        "SI - Slovenia",
        "SB - Solomon Islands",
        "SO - Somalia",
        "ZA - South Africa",
        "GS - South Georgia and the South Sandwich Islands",
        "SS - South Sudan",
        "ES - Spain",
        "LK - Sri Lanka",
        "SD - Sudan",
        "SR - Suriname",
        "SJ - Svalbard and Jan Mayen",
        "SE - Sweden",
        "CH - Switzerland",
        "SY - Syrian Arab Republic",
        "TW - Taiwan, Province of China",
        "TJ - Tajikistan",
        "TZ - Tanzania, United Republic of",
        "TH - Thailand",
        "TL - Timor-Leste",
        "TG - Togo",
        "TK - Tokelau",
        "TO - Tonga",
        "TT - Trinidad and Tobago",
        "TN - Tunisia",
        "TR - Turkey",
        "TM - Turkmenistan",
        "TC - Turks and Caicos Islands",
        "TV - Tuvalu",
        "UG - Uganda",
        "UA - Ukraine",
        "AE - United Arab Emirates",
        "GB - United Kingdom of Great Britain and Northern Ireland",
        "US - United States of America",
        "UY - Uruguay",
        "UZ - Uzbekistan",
        "VU - Vanuatu",
        "VE - Venezuela (Bolivarian Republic of)",
        "VN - Viet Nam",
        "WF - Wallis and Futuna",
        "EH - Western Sahara",
        "YE - Yemen",
        "ZM - Zambia",
        "ZW - Zimbabwe"
    });

    ui->cmbCountry->addItems(countryListWithCodes);
}


int MainWindow::on_btnGo_clicked()
{
    QString countryCode, zipCode, apiKey;

    apiKey = "2895dd8848b8e925014128d91b3d41fc";
    countryCode = ui->cmbCountry->currentText().split("-")[0].trimmed();
    zipCode = ui->txtZipCode->text();

    qInfo() << QSslSocket::sslLibraryBuildVersionString();
    qInfo() << QSslSocket::sslLibraryVersionString();
    qDebug() << "SSL Supported:" << QSslSocket::supportsSsl();
    qDebug() << "SSL Library Version:" << QSslSocket::sslLibraryVersionString();
    QString url = QString("https://api.openweathermap.org/data/2.5/weather?zip=%1,%2&appid=%3").arg(zipCode).arg(countryCode).arg(apiKey);
    qDebug() << url;


    manager = new QNetworkAccessManager(this);
    QNetworkRequest request((QUrl(url)));

    reply = manager->get(request);

    connect(reply, &QNetworkReply::finished, this, &MainWindow::onWeatherDataReceived);


    if(reply->error()!= QNetworkReply::NoError)
    {
        qDebug() << "Network Error: " << reply->errorString();
        return -1;
    }

}

void MainWindow::onWeatherDataReceived()
{

    QNetworkReply *reply = qobject_cast<QNetworkReply*>(sender());

    if(reply->error() == QNetworkReply::NoError)
    {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObj = jsonDoc.object();
        QString jsonString = jsonDoc.toJson(QJsonDocument::Indented);
        qDebug() << jsonString;
        ui->txtJsonString->setText(jsonString);

        QString weatherDescription = jsonObj["weather"].toArray()[0].toObject()["description"].toString();
        qDebug() << "Weather Condition : " << weatherDescription;
        int weatherConditionCode = jsonObj["weather"].toArray()[0].toObject()["id"].toInt();
        qDebug() << "weatherConditionCode : " << weatherConditionCode;
        double windSpeed = jsonObj["wind"].toArray()[0].toObject()["speed"].toDouble();
        qDebug() << "windSpeed : " << windSpeed;
        QString city = jsonObj["name"].toString();
        qDebug() << "city : " << city;
        QString country = jsonObj["sys"].toObject()["country"].toString();
        qDebug() << "country : " << country;
        double temp = jsonObj["main"].toObject()["temp"].toDouble() -273.15;
        double temp_max = jsonObj["main"].toObject()["temp_max"].toDouble() -273.15;
        double temp_min = jsonObj["main"].toObject()["temp_min"].toDouble() -273.15;
        double feels_like = jsonObj["main"].toObject()["feels_like"].toDouble() -273.15;
        double humidity = jsonObj["main"].toObject()["humidity"].toDouble();

        ui->lbltemperature->setText(QString::number(temp));
        ui->lblWind->setText(QString::number(windSpeed));
        ui->lblFeelslike->setText(QString::number(feels_like));
        ui->lblDescription->setText(weatherDescription);
        ui->lblHumidity->setText(QString::number(humidity));
        ui->lblMax->setText(QString::number(temp_max));
        ui->lblMin->setText(QString::number(temp_min));

        showWeatherLogo(weatherConditionCode);
    }
    else
    {
        qDebug() << "Error : " << reply->error();
    }

    reply->deleteLater();
}

void MainWindow::on_btnShowDetails_clicked()
{
    if(ui->txtJsonString->isVisible())
        ui->txtJsonString->hide();
    else
        ui->txtJsonString->show();
}

void MainWindow::showWeatherLogo(int weatherConditionCode)
{
    qDebug() << "in showWeatherLogo()";
    QString imgName;

    switch (weatherConditionCode)
    {
    case 803: imgName = "803.png"; break;
    default: imgName = "803.png"; break;
    }

    ui->lblDescriptionImg->setPixmap(":/images/images/" + imgName);
}
