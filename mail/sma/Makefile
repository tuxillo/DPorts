# $FreeBSD: ports/mail/sma/Makefile,v 1.14 2012/11/17 05:59:14 svnexp Exp $

PORTNAME=	sma
PORTVERSION=	1.4
CATEGORIES=	mail
MASTER_SITES=	http://www.klake.org/sma/dl/ \
		ftp://ftp.dinoex.de/pub/FreeBSD/distfiles/

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Program that analyses Sendmail log entries

MAN8=		sma.8
DOCSFILES=	BUGS COPYRIGHT HISTORY README TODO
SAMPLEFILES=	sma.conf
ALL_TARGET=	sma

do-configure:
	@${MV} ${WRKSRC}/Makefile ${WRKSRC}/Makefile.sed
	${SED} -e "s,CC	=,CC?=	," \
		-e "s,CFLAGS	= -Wall -O,CFLAGS+=	," \
		${WRKSRC}/Makefile.sed > ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sma ${PREFIX}/bin/sma
	${INSTALL_MAN} ${WRKSRC}/sma.8 ${PREFIX}/man/man8/
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for i in ${DOCSFILES}
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}/
.endfor
.endif
.if !defined(NOPORTEXAMPLES)
	${MKDIR} ${EXAMPLESDIR}
.for i in ${SAMPLEFILES}
	${INSTALL_DATA} ${WRKSRC}/${i} ${EXAMPLESDIR}/
.endfor
.endif

.include <bsd.port.mk>
