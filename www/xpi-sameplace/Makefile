# New ports collection makefile for:	xpi-sameplace
# Date created:		3 April 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/www/xpi-sameplace/Makefile,v 1.9 2012/11/17 06:03:13 svnexp Exp $
#

PORTNAME=	sameplace
PORTVERSION=	0.7.9.2007113020
DISTVERSIONSUFFIX=	-fx+tb+fl
CATEGORIES=	www

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Jabber client

RUN_DEPENDS=	xpi-xmpp4moz>=0.5.2:${PORTSDIR}/www/xpi-xmpp4moz

XPI_NUM=	3633
XPI_ID=		sameplace@hyperstruct.net
XPI_FILES=	chrome/sameplace.jar chrome.manifest components/CommandLine.js\
		components/ProtocolHandler.js defaults/preferences/sameplace.js install.rdf
XPI_DIRS=	chrome components defaults/preferences defaults

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
