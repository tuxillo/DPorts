# New ports collection makefile for:	py-pcap
# Date created:		24 Nov 2001
# Whom:			Hye-Shik Chang
#
# $FreeBSD: ports/net/py-pcap/Makefile,v 1.26 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	pcap
PORTVERSION=	0.6.4
CATEGORIES=	net python
MASTER_SITES=	SF/pylib${PORTNAME}/pylib${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pylib${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to LBL Packet Capture library (libpcap)

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	swig:${PORTSDIR}/devel/swig13

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	pylib${PORTNAME}

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/_pcapmodule.so \
		%%PYTHON_SITELIBDIR%%/pcap.py \
		%%PYTHON_SITELIBDIR%%/pcap.pyc \
		%%PYTHON_SITELIBDIR%%/pcap.pyo

.include <bsd.port.mk>
