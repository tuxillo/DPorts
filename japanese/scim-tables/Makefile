# New ports collection makefile for:    ja-scim-tables
# Date created:		22 May 2004
# Whom:			Jie Gao	<gaoj@cpsc.ucalgary.ca>
#
# $FreeBSD: ports/japanese/scim-tables/Makefile,v 1.28 2012/11/17 05:58:39 svnexp Exp $
#

PORTNAME=	scim-tables
PORTVERSION=	0.5.10
PORTREVISION=	1
CATEGORIES=	japanese
MASTER_SITES=	SF/scim/${PORTNAME}/${PORTVERSION}

MAINTAINER=	lx@FreeBSD.org
COMMENT=	SCIM table based Japanese input methods

BUILD_DEPENDS=	scim-make-table:${PORTSDIR}/textproc/scim-table-imengine
RUN_DEPENDS=	scim-make-table:${PORTSDIR}/textproc/scim-table-imengine

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.pre.mk>

CPPFLAGS+=	-I${LOCALBASE}/include -D__STDC_ISO_10646__

CONFIGURE_ENV+=	SCIM_DATADIR=${PREFIX}/share/scim \
		SCIM_ICONDIR=${PREFIX}/share/scim/icons
LDFLAGS+=	-L${LOCALBASE}/lib -lintl

CONFIGURE_ARGS+=	--disable-skim-support

post-extract:
	@${CP} ${FILESDIR}/T-Code.txt.in   ${WRKSRC}/tables/ja/
	@${CP} ${FILESDIR}/TUT-Code.txt.in ${WRKSRC}/tables/ja/

post-install:
	@${CAT} ${PKGMESSAGE}
	@${ECHO}
	@${ECHO} To display this message again, type \`pkg_info -D ${PKGNAME}\'
	@${ECHO}

.include <bsd.port.post.mk>
