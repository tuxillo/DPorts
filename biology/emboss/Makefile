# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD: ports/biology/emboss/Makefile,v 1.66 2012/11/17 05:54:51 svnexp Exp $

PORTNAME=	emboss
PORTVERSION=	6.2.0
RELEASE=	${PORTNAME:tu}-${PORTVERSION}
PORTREVISION=	2
CATEGORIES=	biology
MASTER_SITES=	ftp://emboss.open-bio.org/pub/EMBOSS/
DISTNAME=	${RELEASE}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A collection of open source tools for genetic sequence analysis

BUILD_DEPENDS=	clustalw:${PORTSDIR}/biology/clustalw \
		primer3:${PORTSDIR}/biology/primer3
LIB_DEPENDS=	gd.4:${PORTSDIR}/graphics/gd \
		png15:${PORTSDIR}/graphics/png

CONFLICTS=	qmail-ldap-[0-9]* digest-[0-9]*

PREFIX?=	${LOCALBASE}/emboss
NO_MTREE=	yes
USE_SUBMAKE=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
USE_MOTIF=	yes
SUB_FILES=	pkg-message
SUB_LIST=	PREFIX=${PREFIX} DATADIR=${DATADIR}

DOCSDIR=	${PREFIX}/share/${PORTNAME:tu}/doc
DATADIR=	${PREFIX}/share/${PORTNAME:tu}

CONFIGURE_ARGS+= --with-docroot=${DOCSDIR}

.if !defined(WITHOUT_X11)
USE_XORG=	x11
USE_MOTIF=	yes
LIB_DEPENDS+=	gd.4:${PORTSDIR}/graphics/gd \
		png15:${PORTSDIR}/graphics/png
.else
CONFIGURE_ARGS+= --without-x
.endif

DOC_DIRS=	doc/manuals doc/tutorials doc/programs/text doc/programs/html
CONFIG_FILE=	${WRKSRC}/emboss/emboss.default.template

pre-install:
	@ ${REINPLACE_CMD} -e 's#%%DATADIR%%#${DATADIR}#' ${CONFIG_FILE}

post-install:
	${CHOWN} ${SHAREOWN}:${SHAREGRP} ${DATADIR}/emboss.default.template
	@ ${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
