# ex:ts=8
# Ports collection makefile for:	xmlstartlet
# Date created:			Jun 30, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/textproc/xmlstarlet/Makefile,v 1.12 2012/11/17 06:02:25 svnexp Exp $
#

PORTNAME=	xmlstarlet
PORTVERSION=	1.0.5
CATEGORIES=	textproc
MASTER_SITES=	SF/xmlstar/${PORTNAME}/${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Command Line XML Toolkit

USE_GNOME=	libxslt
USE_ICONV=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-libxml-prefix=${LOCALBASE} \
		--with-libxslt-prefix=${LOCALBASE} \
		--with-libiconv-prefix=${LOCALBASE} \
		--disable-static-libs

MAN1=		xmlstarlet.1
PLIST_FILES=	bin/xml
PORTDOCS=	xmlstarlet.txt xmlstarlet.pdf xmlstarlet.ps \
		xmlstarlet-man.html xmlstarlet-man.xml \
		xmlstarlet-ug.html xmlstarlet-ug.pdf \
		xmlstarlet-ug.ps xmlstarlet-ug.xml \
		html.css

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/doc && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
