# Created by: Dryice Liu <dryice@liu.com.cn>
# $FreeBSD: ports/www/session2/Makefile,v 1.15 2012/11/17 06:03:05 svnexp Exp $

PORTNAME=	session2
PORTVERSION=	0.6.1
PORTREVISION=	2
CATEGORIES=	www python
MASTER_SITES=	http://quixote.idyll.org/session2/ \
		http://dryice.name/computer/FreeBSD/distfiles/
DISTNAME=	session2-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A quixote session manager with persistence support

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGVERSION=	0.6

OPTIONS_DEFINE=	MYSQL PGSQL DOCS
OPTIONS_DEFAULT=	MYSQL PGSQL

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MMYSQL}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}MySQLdb>=0:${PORTSDIR}/databases/py-MySQLdb
.endif

.if ${PORT_OPTIONS:MPGSQL}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}psycopg>0:${PORTSDIR}/databases/py-psycopg
.endif

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@ ${MKDIR} ${DOCSDIR}
.for docfile in ChangeLog default.css README.html README.txt TODO
	@ ${INSTALL_DATA} ${WRKSRC}/${docfile} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
