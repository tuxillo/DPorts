# $FreeBSD: ports/security/binwalk/Makefile,v 1.6 2012/11/17 06:01:01 svnexp Exp $

PORTNAME=	binwalk
PORTVERSION=	0.4.5
CATEGORIES=	security
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	fbsd-ports@opsec.eu
COMMENT=	Search binary images for embedded files and executable code

LICENSE=	MIT

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl

PLIST_FILES=	bin/binwalk \
		etc/binwalk/magic.binarch \
		etc/binwalk/magic.bincast \
		etc/binwalk/magic.binwalk
PLIST_DIRS=	etc/binwalk

PORTDOCS=	README

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

WRKSRC=	${WRKDIR}/${PORTNAME}-${PORTVERSION}/src

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKDIR}/${PORTNAME}-${PORTVERSION}/docs/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
