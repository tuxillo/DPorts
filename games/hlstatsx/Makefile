# $FreeBSD: ports/games/hlstatsx/Makefile,v 1.14 2012/11/17 05:57:41 svnexp Exp $

PORTNAME=	hlstatsx
DISTVERSION=	1.20RC2
PORTREVISION=	1
CATEGORIES=	games www
MASTER_SITES=	http://striker.interhact.net/hlstatsx/
DISTNAME=	HLstatsX_V${DISTVERSION}

MAINTAINER=	sylvio@FreeBSD.org
COMMENT=	Real-time player and clan rankings and statistics for HL2 and mods

NO_BUILD=	yes
USE_APACHE_RUN=	22+
USE_PHP=	gd mysql
USE_PERL5_RUN=	yes
USE_ZIP=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
HLSTATSX?=	www/${PORTNAME}
PLIST_SUB+=	HLSTATSX=${HLSTATSX}
EXTRACT_AFTER_ARGS=	-d ${WRKSRC}

do-install:
	@ ${MKDIR} ${PREFIX}/${HLSTATSX}
	@ ${CP} -R ${WRKSRC}/* ${PREFIX}/${HLSTATSX}
	@ ${ECHO_MSG} "*"
	@ ${ECHO_MSG} "* Files have been installed in"
	@ ${ECHO_MSG} "* ${PREFIX}/${HLSTATSX}"
	@ ${ECHO_MSG} "*"

.include <bsd.port.mk>
