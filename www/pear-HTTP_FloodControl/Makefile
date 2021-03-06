# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: ports/www/pear-HTTP_FloodControl/Makefile,v 1.5 2012/12/17 02:18:04 svnexp Exp $

PORTNAME=	HTTP_FloodControl
PORTVERSION=	0.1.1
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR classes to detect and protect from attempts to flood a site

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:${PORTSDIR}/www/pear-HTTP
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	HTTP
FILES=		FloodControl.php FloodControl/Container.php \
		FloodControl/Container/DB.php FloodControl/Container/File.php \
		FloodControl/Container/MDB.php FloodControl/Container/MDB2.php

LATEST_LINK=	pear-HTTP_FloodControl
DOCS=		README LICENSE
OPTIONS_DEFINE=	PEAR_DB PEAR_MDB PEAR_MDB2
PEAR_DB_DESC=	PEAR::DB support
PEAR_MDB_DESC=	PEAR::MDB support
PEAR_MDB2_DESC=	PEAR::MDB2 support

post-extract:
	${MKDIR} ${WRKSRC}/docs
	${MV} ${WRKSRC}/README ${WRKSRC}/LICENSE ${WRKSRC}/docs
	${MV} ${WRKDIR}/package2.xml ${WRKDIR}/package.xml

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPEAR_DB}
RUN_DEPENDS+=	${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB
.endif

.if ${PORT_OPTIONS:MPEAR_MDB}
RUN_DEPENDS+=	${PEARDIR}/MDB.php:${PORTSDIR}/databases/pear-MDB
.endif

.if ${PORT_OPTIONS:MPEAR_MDB2}
RUN_DEPENDS+=	${PEARDIR}/MDB2.php:${PORTSDIR}/databases/pear-MDB2
.endif

.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.mk>
