# New ports collection makefile for:	py-qt4-designerplugin
# Date created:				2007-02-20
# Whom:					Danny Pansters <danny@ricin.com>
#
# $FreeBSD: ports/devel/py-qt4-designerplugin/Makefile,v 1.20 2012/11/17 05:56:50 svnexp Exp $

PORTNAME=	designerplugin
PORTVERSION=	${PYQT4_VERSION}
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITES_PYQT4}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}qt4-
DISTNAME=	${PYQT4_DISTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for the Qt4 toolkit, QtDesigner plugin

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sip>=${SIP_VERSION}:${PORTSDIR}/devel/py-sip
RUN_DEPENDS=	${PKGNAMEPREFIX}designer>=${PYQT4_VERSION}:${PORTSDIR}/devel/py-qt4-designer

BUILD_WRKSRC=	${WRKSRC}/designer
INSTALL_WRKSRC=	${WRKSRC}/designer

DISTINFO_FILE=	${PYQT4_DISTINFO_FILE}
HAS_CONFIGURE=	yes
USE_PYTHON=	2.5+
USE_QT4=	gui xml designer moc_build qmake_build

PATCHDIR=	${PORTSDIR}/devel/py-qt4-core/files
OPTIONSFILE?=	${PORT_DBDIR}/py-qt4-${PORTNAME}/options
CONFIGURE_ENV+=	PYQT4_COMPONENT="${PORTNAME}"
ARGS=		-b ${PREFIX}/bin \
		-d ${PYTHONPREFIX_SITELIBDIR} \
		-p ${PREFIX}/${QT_PLUGINDIR_REL} \
		-q ${QMAKE} \
		--confirm-license \
		--enable QtDesigner

.if defined(WITH_DEBUG)
ARGS+=		--debug --trace
.endif

.include "../py-sip/files/bsd.pyqt.mk"

do-configure:
	cd ${WRKSRC} && ${SETENV} ${CONFIGURE_ENV}\
		${PYTHON_CMD} configure.py ${ARGS}

post-configure:
	${REINPLACE_CMD} -e 's|CC .*|CC = ${CC}|'\
		-e 's|CXX .*|CXX = ${CXX}|'\
		-e 's|LINK .*|LINK = ${CXX}|'\
		${WRKSRC}/designer/Makefile

.include <bsd.port.mk>
