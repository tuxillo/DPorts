# New ports collection makefile for:	libboard
# Date created:		Fri 24 aug 2007
# Whom:			thierry@pompo.net
#
# $FreeBSD: ports/graphics/libboard/Makefile,v 1.11 2012/11/17 05:58:12 svnexp Exp $
#

PORTNAME=		libboard
DISTVERSION=		0.9.0
PORTREVISION=		1
CATEGORIES=		graphics
MASTER_SITES=		SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}

MAINTAINER=		thierry@FreeBSD.org
COMMENT=		A vector graphics C++ library

LICENSE=		LGPL3

BUILD_DEPENDS=		doxygen:${PORTSDIR}/devel/doxygen

HAS_CONFIGURE=		yes
CONFIGURE_ARGS=		--prefix=${PREFIX}
CONFIGURE_ENV=		CXX=${CXX}

USE_GMAKE=		yes
USE_LDCONFIG=		yes

WRKSRC=		${WRKDIR}/${DISTNAME:C/-.$//}

PORTDOCS=	*

.include <bsd.port.pre.mk>

.if ${ARCH} != i386
CXXFLAGS+=	-fPIC
.endif

pre-configure:
	${REINPLACE_CMD} -e 's|-O3|${CXXFLAGS}|' ${WRKSRC}/${CONFIGURE_SCRIPT}

post-install:
	${MV} ${PREFIX}/lib/libboard.so ${PREFIX}/lib/libboard.so.0
	${LN} -sf ${PREFIX}/lib/libboard.so.0 ${PREFIX}/lib/libboard.so
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/doc/html/ && ${COPYTREE_SHARE} . ${DOCSDIR}/
	${RM} -rf ${DOCSDIR}/.svn
.endif
.if !defined(NOPORTEXAMPLES)
	${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} . ${EXAMPLESDIR}/
	cd ${WRKSRC}/bin/ && ${COPYTREE_BIN} . ${EXAMPLESDIR}/
	${RM} -rf ${EXAMPLESDIR}/.svn
.endif

regression-test:
	(cd ${WRKDIR} && ${WRKSRC}/bin/arithmetic bec)
.for ex in 1 2 3
	(cd ${WRKDIR} && ${WRKSRC}/bin/example${ex})
.endfor
	${LS} -l ${WRKDIR}/arithm* ${WRKDIR}/draw*

.include <bsd.port.post.mk>
