# New ports collection makefile for:	joe
# Date created:		01 Jul 1995
# Whom:			torstenb@FreeBSD.org
#
# $FreeBSD: ports/editors/joe/Makefile,v 1.37 2012/11/17 05:57:14 svnexp Exp $
#

PORTNAME=	joe
PORTVERSION=	3.7
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES?=	editors
MASTER_SITES=	SF/joe-editor/JOE%20sources/joe-${PORTVERSION}

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Joe's Own Editor

BUILD_DEPENDS=	aspell:${PORTSDIR}/textproc/aspell
RUN_DEPENDS=	aspell:${PORTSDIR}/textproc/aspell

CONFLICTS=	joe-2.*

LICENSE=	GPLv1
USE_GMAKE=	yes
USE_ICONV=	yes
USE_NCURSES=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib -liconv"
CPPFLAGS+=	-I${LOCALBASE}/include

ALL_TARGET=	${PORTNAME}
MAN1=		${PORTNAME}.1

MANLANG=	"" ru

.include <bsd.port.pre.mk>

.ifdef NOPORTDOCS
post-patch:
	${REINPLACE_CMD} 's,install-data-am: install-data_charmapsDATA install-data_docDATA,install-data-am: install-data_charmapsDATA,' \
		${WRKSRC}/Makefile.in
.endif

post-install:
.for file in jmacsrc jpicorc jstarrc rjoerc joerc
.if !exists(${PREFIX}/etc/${PORTNAME}/${file})
	@${CP} ${PREFIX}/etc/${PORTNAME}/${file} ${PREFIX}/etc/${PORTNAME}/${file}.dist
.endif
.endfor

.include <bsd.port.post.mk>
