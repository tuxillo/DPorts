# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: ports/mail/claws-mail-bsfilter/Makefile,v 1.21 2012/12/10 17:32:44 svnexp Exp $

PORTNAME=	bsfilter
PORTVERSION=	1.0.9
CATEGORIES=	mail
MASTER_SITES=	http://www.claws-mail.org/downloads/plugins/
PKGNAMEPREFIX=	claws-mail-
DISTNAME=	bsfilter_plugin-${PORTVERSION}

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Spam filtering, bsfilter based plugin for Claws Mail

LICENSE=	GPLv3

BUILD_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail
RUN_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail

USE_GMAKE=	yes
USE_XORG=	x11
USE_AUTOTOOLS=	autoconf
MAKE_JOBS_SAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNLS}
USE_GETTEXT=	yes
PLIST_SUB+=	NLS=""
.else
CONFIGURE_ARGS+=--disable-nls
PLIST_SUB+=	NLS="@comment "
.endif

.include <bsd.port.mk>
