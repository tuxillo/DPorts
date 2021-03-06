# ex:ts=4
# New ports collection makefile for:	wcslib
# Date created:							Wed Jul 15 10:09:45 EST 2009
# Whom:									Tony Maher <tonymaher@optusnet.com.au>
#
# $FreeBSD: ports/astro/wcslib/Makefile,v 1.5 2012/11/17 05:54:26 svnexp Exp $

PORTNAME=		wcslib
PORTVERSION=	4.13.4
CATEGORIES=		astro
MASTER_SITES=	ftp://ftp.atnf.csiro.au/pub/software/wcslib/

MAINTAINER=		tonymaher@optusnet.com.au
COMMENT=		Library for parsing/generating FITS headers

USE_BZIP2=		yes
GNU_CONFIGURE=	yes
USE_GMAKE=		yes
MAKEFILE=		GNUmakefile
USE_LDCONFIG=	yes

PLIST_SUB=		VERSION="${PORTVERSION}"
MAN1=			fitshdr.1

# See makedefs.in which describes why you want to set the extra support.
# For most users it will not be required.

OPTIONS=		CFITSIO "Add cfitsio support (for tests only)" Off \
				PGPLOT  "Add pgplot support (for tests only)" Off

# The configure script unconditionally searches for the cftisio library
# and uses it if found.

.if defined(WITH_CFITSIO) || exists(${LOCALBASE}/lib/libcfitsio.so)
PLIST_SUB+=		HPXCVT=""
LIB_DEPENDS+=	cfitsio:${PORTSDIR}/astro/cfitsio
.else
PLIST_SUB+=		HPXCVT="@comment "
.endif

.if defined(WITH_PGPLOT)
LIB_DEPENDS+=	pgplot.5:${PORTSDIR}/graphics/pgplot
.endif

post-patch:
	@${REINPLACE_CMD} -e 's#%%PKGDIR%%#${LOCALBASE}/libdata#g' \
		${WRKSRC}/GNUmakefile

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	(cd ${WRKSRC}/ && ${INSTALL_DATA} CHANGES README COPYING COPYING.LESSER wcslib.pdf ${DOCSDIR})
	@${MKDIR} ${DOCSDIR}/html
	(cd ${WRKSRC}/html && ${INSTALL_DATA} * ${DOCSDIR}/html)
.endif

.include <bsd.port.mk>
