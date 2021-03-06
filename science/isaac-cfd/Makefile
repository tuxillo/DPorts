# New ports collection makefile for:	isaac-cfd
# Date created:		19 October 2004
# Whom:			Pedro F. Giffuni
#
# $FreeBSD: ports/science/isaac-cfd/Makefile,v 1.9 2012/11/17 06:00:58 svnexp Exp $
#

PORTNAME=	isaac
PORTVERSION=	4.2
PORTREVISION=	4
CATEGORIES=	science
MASTER_SITES=	SF/${PORTNAME}-cfd/${PORTNAME}-cfd/ISAAC%20Version%20${PORTVERSION}
DISTFILES=	${PORTNAME}src.4_2${EXTRACT_SUFX} ${PORTNAME}mk.4_2${EXTRACT_SUFX}
.ifndef NOPORTDOCS
DISTFILES+=	man.4_2.ps.gz
.endif
.ifdef WITH_EXAMPLES
DISTFILES+=	example_cases${EXTRACT_SUFX}
.endif
DIST_SUBDIR=	isaac-cfd
EXTRACT_ONLY=	${PORTNAME}src.4_2${EXTRACT_SUFX} ${PORTNAME}mk.4_2${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Integrated Solution Algorithm for Arbitrary Configuration

NO_WRKSUBDIR=	yes
USE_GMAKE=	yes
MAKEFILE=	makefile
MAKE_FLAGS+=	CPPFLAGS=-I.
USE_FORTRAN=	yes

.if !defined(WITH_EXAMPLES)
PLIST_SUB=	WITH_EXAMPLES="@comment "
.else
PLIST_SUB=	WITH_EXAMPLES=""
.endif

.if defined(WITH_OPTIMIZED_FLAGS)
FFLAGS+=	-O2 -ffast-math
.endif

pre-configure:
	@${REINPLACE_CMD} -e 's+%%FC%%+${FC}+g ; s+%%FFLAGS%%+${FFLAGS}+;' \
	${WRKSRC}/makefile
	${FIND} ${WRKSRC} -name "*.mk" -exec	\
		${REINPLACE_CMD} -e 's|SRC= $$(HOME)/ISAAC/src|SRC= ${WRKSRC}|; \
			s|$$(FFLAGS)|${FFLAGS} -I.|' {} \;

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/isaac ${PREFIX}/bin/isaac
.ifndef NOPORTDOCS
	@${MKDIR} ${DOCSDIR}
	@${CP} ${DISTDIR}/${DIST_SUBDIR}/man.4_2.ps.gz ${DOCSDIR}
.endif
.ifdef WITH_EXAMPLES
	@${MKDIR} ${EXAMPLESDIR}
	@${TAR} -xzf ${DISTDIR}/${DIST_SUBDIR}/example_cases${EXTRACT_SUFX} \
		-C ${EXAMPLESDIR}/
.endif

.include <bsd.port.mk>
