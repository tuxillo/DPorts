# New ports collection makefile for:  tilecache
# Date created:        2011-10-18
# Whom:                joris
#
# $FreeBSD: ports/graphics/tilecache/Makefile,v 1.3 2012/11/17 05:58:24 svnexp Exp $
#

PORTNAME=	tilecache
PORTVERSION=	2.11
CATEGORIES=	graphics python geography www
MASTER_SITES=	http://tilecache.org/

MAINTAINER=	joris.dedieu@gmail.com
COMMENT=	Python-based WMS-C/TMS server

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flup>0:${PORTSDIR}/www/py-flup \
		${PYTHON_PKGNAMEPREFIX}Paste>0:${PORTSDIR}/www/py-paste

LICENSE=	BSD

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	TileCache

FILES_ETC=	TileCache/Service.py setup.py tilecache_install_config.py

post-patch:
	@cd ${WRKSRC}; \
	${REINPLACE_CMD} -e 's|/etc|${ETCDIR}|' ${FILES_ETC};

pre-install:
	${MKDIR} ${ETCDIR}

post-install:
	${MKDIR} ${LOCALBASE}/www/cgi-bin
	${REINPLACE_CMD} -e 's|/usr/bin/python|/usr/bin/env python|' ${WRKSRC}/tilecache.cgi
	${INSTALL_SCRIPT} ${WRKSRC}/tilecache.cgi ${LOCALBASE}/www/cgi-bin/tilecache.cgi
	${REINPLACE_CMD} -e 's|/usr/bin/python|/usr/bin/env python|' ${WRKSRC}/tilecache.fcgi
	${INSTALL_SCRIPT} ${WRKSRC}/tilecache.fcgi ${LOCALBASE}/www/cgi-bin/tilecache.fcgi
	${INSTALL_DATA} ${WRKSRC}/tilecache.cfg ${ETCDIR}/tilecache.cfg.sample

.include <bsd.port.mk>
