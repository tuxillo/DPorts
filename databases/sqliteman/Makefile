# New ports collection makefile for:	sqliteman
# Date created:		19 May, 2009
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/databases/sqliteman/Makefile,v 1.8 2012/11/17 05:55:25 svnexp Exp $
#

PORTNAME=	sqliteman
PORTVERSION=	1.2.2
PORTREVISION=	2
CATEGORIES=	databases
MASTER_SITES=	SF

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Admin's GUI tool for Sqlite3

LIB_DEPENDS=	qscintilla2:${PORTSDIR}/devel/qscintilla2

USE_CMAKE=	yes
USE_SQLITE=	yes
CMAKE_ENV+=	QMAKESPEC=${QMAKESPEC}
USE_QT4=	qmake_build gui moc_build rcc_build uic_build xml sql

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

.include <bsd.port.mk>
