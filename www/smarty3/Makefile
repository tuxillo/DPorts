# Created by: Michael Fausten <ports@michael-fausten.de>
# $FreeBSD: ports/www/smarty3/Makefile,v 1.2 2012/11/17 06:03:06 svnexp Exp $

PORTNAME=	smarty3
PORTVERSION=	3.1.12
CATEGORIES=	www
MASTER_SITES=	http://www.smarty.net/files/
DISTNAME=	Smarty-${PORTVERSION}

MAINTAINER=	ports@michael-fausten.de
COMMENT=	The PHP compiling template engine

WRKSRC=		${WRKDIR}/Smarty-${PORTVERSION}

NO_BUILD=	yes
USE_PHP=	pcre
WANT_PHP_WEB=	yes

PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${DATADIR}
.for f in Smarty.class.php SmartyBC.class.php debug.tpl
	@${INSTALL_DATA} ${WRKSRC}/libs/$f ${DATADIR}
.endfor
	@${MKDIR} ${DATADIR}/plugins
	@${INSTALL_DATA} ${WRKSRC}/libs/plugins/* ${DATADIR}/plugins
	@${MKDIR} ${DATADIR}/sysplugins
	@${INSTALL_DATA} ${WRKSRC}/libs/sysplugins/* ${DATADIR}/sysplugins

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
