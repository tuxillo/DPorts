# New ports collection makefile for:	xpi-yslow
# Date created:			19 January 2008
# Whom:				Sutra Zhou <zhoushuqun@gmail.com>
#
# $FreeBSD: ports/www/xpi-yslow/Makefile,v 1.7 2012/11/17 06:03:13 svnexp Exp $
#

PORTNAME=	yslow
PORTVERSION=	3.1.0
DISTVERSIONSUFFIX=	-fx
CATEGORIES=	www

MAINTAINER=	zhoushuqun@gmail.com
COMMENT=	Analyzes web pages and why they are slow

RUN_DEPENDS=	xpi-firebug>=1.3.0:${PORTSDIR}/www/xpi-firebug

XPI_NUM=	5369
XPI_ID=		yslow@yahoo-inc.com

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
