# Created by: Pawel Pekala <c0rn@o2.pl>
# $FreeBSD: ports/mail/claws-mail-cachesaver/Makefile,v 1.52 2012/12/10 17:32:44 svnexp Exp $

PORTNAME=	cachesaver
PORTVERSION=	0.10.9
PORTREVISION=	17
CATEGORIES=	mail
MASTER_SITES=	http://www.claws-mail.org/downloads/plugins/
PKGNAMEPREFIX=	claws-mail-

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Cache saving plugin for Claws Mail

LICENSE=	GPLv3

BUILD_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail
RUN_DEPENDS=	claws-mail>=3.9.0:${PORTSDIR}/mail/claws-mail

USE_GMAKE=	yes
USE_AUTOTOOLS=	autoconf
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	lib/claws-mail/plugins/cachesaver.a \
		lib/claws-mail/plugins/cachesaver.la \
		lib/claws-mail/plugins/cachesaver.so

.include <bsd.port.mk>
