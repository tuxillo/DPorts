# Ports collection makefile for:	py-smbpasswd
# Date created:				May 24, 2004
# Whom:					Alexander Novitsky
#
# $FreeBSD: ports/net/py-smbpasswd/Makefile,v 1.5 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	smbpasswd
PORTVERSION=	1.0.2
CATEGORIES=	net python
MASTER_SITES=	http://barryp.org/static/media/software/download/py-${PORTNAME}/${PORTVERSION}/ \
		GOOGLE_CODE \
		CHEESESHOP
PROJECTHOST=	py-smbpasswd
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
EXTRACT_SUFX=	.tgz

MAINTAINER=	wxs@FreeBSD.org
COMMENT=	SMB/CIFS password generation utility for Python

LICENSE=	GPLv2

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/smbpasswd.so
# Python3 ready
USE_PYTHON=		yes
USE_PYDISTUTILS=	yes

.include <bsd.port.mk>
