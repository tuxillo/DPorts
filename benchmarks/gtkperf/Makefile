# Ports collection makefile for:	gtkperf
# Date created:				2006-04-22
# Whom:					Andreas Kohn <andreas@syndrom23.de>
#
# $FreeBSD: ports/benchmarks/gtkperf/Makefile,v 1.17 2012/11/17 05:54:50 svnexp Exp $
#

PORTNAME=		gtkperf
PORTVERSION=		0.40
PORTREVISION=	9
CATEGORIES=		benchmarks
MASTER_SITES=		SF
DISTNAME=		${PORTNAME}_${PORTVERSION}

MAINTAINER=		ports@FreeBSD.org
COMMENT=		Measure your system's GTK+ performance

WRKSRC=			${WRKDIR}/${PORTNAME}
USE_GMAKE=		yes
GNU_CONFIGURE=		yes
USE_GNOME=		gtk20 gnomeprefix

.if !defined(WITHOUT_NLS)
USE_GETTEXT=		yes
USE_ICONV=		yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	--enable-nls
PLIST_SUB=		NLS=""
.else
CONFIGURE_ARGS+=	--disable-nls
PLIST_SUB=		NLS="@comment "
.endif

.include <bsd.port.mk>
