# New ports collection makefile for:	twms
# Date created:		01 Sep 2010
# Whom:			Dmitry Marakasov <amdmi3@FreeBSD.org>
#
# $FreeBSD: ports/www/twms/Makefile,v 1.2 2012/11/17 06:03:09 svnexp Exp $
#

PORTNAME=	twms
PORTVERSION=	0.02w
CATEGORIES=	www astro
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Tiny WMS server

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pyproj/__init__.py:${PORTSDIR}/graphics/py-pyproj \
		${PYTHON_SITELIBDIR}/web/__init__.py:${PORTSDIR}/www/webpy \
		${PYTHON_SITELIBDIR}/PIL/__init__.py:${PORTSDIR}/graphics/py-imaging

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USE_BZIP2=	yes
USE_PYTHON=	2.6+
NO_BUILD=	yes

TWMS_USER?=	twms
TWMS_GROUP?=	twms
TWMS_CACHEDIR?=	/var/cache/twms

SUB_FILES=	pkg-install pkg-deinstall
SUB_LIST+=	USER=${TWMS_USER} GROUP=${TWMS_GROUP} CACHEDIR=${TWMS_CACHEDIR}

USE_RC_SUBR=	twms

USERS=		${TWMS_USER}
GROUPS=		${TWMS_GROUP}

post-patch:
	@${REINPLACE_CMD} -e '1,1 s|/usr/bin/python|/usr/bin/env python|' ${WRKSRC}/twms.py
	@${REINPLACE_CMD} -e 's|/etc/twms/twms.conf|${PREFIX}/etc/twms.conf|' ${WRKSRC}/twms/twms.py
	@${REINPLACE_CMD} -e '/tiles_cache =/ s|".*"|"${TWMS_CACHEDIR}/cache/"|; \
		/install_path =/ s|".*"|"${DATADIR}/"|; \
		/gpx_cache =/ s|".*"|"${TWMS_CACHEDIR}/traces/"|; \
		s|import fetchers|from twms &|' ${WRKSRC}/twms/twms.conf

do-install:
	${MKDIR} ${PYTHONPREFIX_SITELIBDIR}/twms
	${INSTALL_DATA} ${WRKSRC}/twms/*.py ${PYTHONPREFIX_SITELIBDIR}/twms/
	${INSTALL_SCRIPT} ${WRKSRC}/twms.py ${PREFIX}/bin/twms
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/*.jpg ${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/twms/twms.conf ${PREFIX}/etc/twms.conf.default
	@if [ ! -f ${PREFIX}/etc/twms.conf ]; then \
		${CP} -p ${PREFIX}/etc/twms.conf.default ${PREFIX}/etc/twms.conf ; \
	fi

post-install:
	@PREFIX=${PREFIX} ${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.mk>
