# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: ports/textproc/colordiff/Makefile,v 1.17 2012/11/18 15:16:49 svnexp Exp $

PORTNAME=	colordiff
PORTVERSION=	1.0.13
CATEGORIES=	textproc
MASTER_SITES=	http://www.colordiff.org/ CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	A tool to colorize diff output

LICENSE=	GPLv2

USE_PERL5=	yes
NO_BUILD=	yes

MAN1=		colordiff.1

post-patch:
	@${REINPLACE_CMD} -e \
		's|/usr/local/bin/perl|${PERL}|; s|/etc|${PREFIX}/etc|' \
			${WRKSRC}/${PORTNAME}.pl \
			${WRKSRC}/${MAN1}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${PREFIX}/bin/${PORTNAME}
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${PREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/colordiffrc ${PREFIX}/etc/colordiffrc.default
.if !exists(${PREFIX}/etc/colordiffrc)
	${INSTALL_DATA} ${WRKSRC}/colordiffrc ${PREFIX}/etc
.endif

.include <bsd.port.mk>
