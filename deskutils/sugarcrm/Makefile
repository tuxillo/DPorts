# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: ports/deskutils/sugarcrm/Makefile,v 1.34 2013/01/12 03:10:01 svnexp Exp $

PORTNAME=	sugarcrm
PORTVERSION=	6.5.9
CATEGORIES=	deskutils www
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=	${PORTNAME}/1%20-%20SugarCRM%206.5.X/SugarCommunityEdition-6.5.X
DISTNAME=	SugarCE-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	A web based customer relationship management suite

FETCH_ARGS=	-pRr
USE_PHP=	gd mysql session pcre xml zlib mbstring curl imap spl posix
USE_ZIP=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/SugarCE-Full-${PORTVERSION}

PKGMESSAGE=	${WRKDIR}/pkg-message

SUB_FILES+=	pkg-message pkg-install

do-install:
	@${MKDIR} ${WWWDIR}

	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${WWWDIR}/
	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}
	@${CHMOD} -R 755 ${WWWDIR}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
