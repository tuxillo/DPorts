# Created by: Jeremy Norris <ishmael127@home.com>
# $FreeBSD: ports/graphics/feh/Makefile,v 1.58 2013/01/15 16:46:54 svnexp Exp $

PORTNAME=	feh
PORTVERSION=	2.8
CATEGORIES=	graphics
MASTER_SITES=	http://feh.finalrewind.org/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	uqs

MAINTAINER=	zeising@FreeBSD.org
COMMENT=	An image viewer that utilizes Imlib2

LICENSE=	MIT

LIB_DEPENDS=	curl.6:${PORTSDIR}/ftp/curl \
		giblib.1:${PORTSDIR}/graphics/giblib

USE_XORG=	x11 xt xinerama
USE_PERL5_RUN=	yes
USE_GMAKE=	yes
USE_BZIP2=	yes

MAN1=		feh.1 feh-cam.1 gen-cam-menu.1

CPPFLAGS+=	-I${LOCALBASE}/include -std=c99
LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_ENV+=	LDFLAGS="${LDFLAGS}"

PORTDOCS=	AUTHORS ChangeLog README TODO

.include	<bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} 's#/install-man install-doc#install-man#' \
		${WRKSRC}/Makefile

post-install:
.if ${PORT_OPTIONS:MDOC}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
