# New ports collection makefile for:	ftpcube
# Date created:			Dec 13, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/ftp/ftpcube/Makefile,v 1.32 2012/11/17 05:57:29 svnexp Exp $
#

PORTNAME=	ftpcube
PORTVERSION=	0.5.1
PORTREVISION=	6
CATEGORIES=	ftp python
MASTER_SITES=	SF

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	A graphical FTP Client

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/paramiko/__init__.py:${PORTSDIR}/security/py-paramiko

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
USE_WX=		2.6+
WX_COMPS=	python
WX_UNICODE=	yes

post-patch:
	@${REINPLACE_CMD} 's,/usr/local,${PREFIX},' ${WRKSRC}/setup.cfg
	@${ECHO_CMD} record=installed-files.log >> ${WRKSRC}/setup.cfg

.include <bsd.port.mk>
