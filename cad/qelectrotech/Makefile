# New ports collection makefile for:	qelectrotech
# Date created:		2010-03-24
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/cad/qelectrotech/Makefile,v 1.5 2012/11/17 05:54:54 svnexp Exp $
#

PORTNAME=	qelectrotech
PORTVERSION=	0.22
PORTREVISION=	1
CATEGORIES=	cad
MASTER_SITES=	http://download.tuxfamily.org/qet/tags/20100313/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	QElectroTech is application to design electric diagrams

USE_QT4=	gui network svg xml \
		moc_build qmake_build rcc_build uic_build
INSTALLS_ICONS=	yes

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

MAN1=		qelectrotech.1
MANLANG=	"" es fr.ISO8859-1 fr.UTF-8 fr pt_PT
MANCOMPRESSED=	yes

do-configure:
	${MV} ${WRKSRC}/man/files/pt ${WRKSRC}/man/files/pt_PT
	${REINPLACE_CMD} -e 's,/usr/local/,${PREFIX}/,g' \
		${WRKSRC}/${PORTNAME}.pro
	${REINPLACE_CMD} -e 's,doc/,share/doc/,g' \
		${WRKSRC}/${PORTNAME}.pro
	${REINPLACE_CMD} -e 's,../share,share,g' \
		${WRKSRC}/${PORTNAME}.pro
	cd ${WRKSRC} && ${QMAKE} ${PORTNAME}.pro

.include <bsd.port.mk>
