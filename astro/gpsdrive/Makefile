# New ports collection makefile for:	gpsdrive
# Date Created:				16 April 2002
# Whom:					Marco Molteni <molter@gufi.org>
#
# $FreeBSD: ports/astro/gpsdrive/Makefile,v 1.53 2012/12/10 19:23:58 svnexp Exp $
#

PORTNAME=	gpsdrive
PORTVERSION=	2.09
PORTREVISION=	14
CATEGORIES=	astro geography
MASTER_SITES=	http://www.gpsdrive.de/packages/ \
		LOCAL/beech

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A GPS navigation system

LIB_DEPENDS=	pcre.3:${PORTSDIR}/devel/pcre

USE_PERL5=	yes
USE_GMAKE=	yes
USE_GNOME=	gtk20
USE_AUTOTOOLS=	libtool
MAKE_JOBS_UNSAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--disable-garmin
USE_LDCONFIG=	yes

.if defined(WITHOUT_NLS)
PLIST_SUB+=	NLS="@comment "
.else
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.endif

MAN1=		gpsdrive.1
MANLANG=	"" de es

post-patch:
.if defined(WITHOUT_NLS)
	@${REINPLACE_CMD} 's|SUBDIRS = src po man|SUBDIRS = src man|' \
		${WRKSRC}/Makefile.in
.endif

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
