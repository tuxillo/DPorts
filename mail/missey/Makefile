# New ports collection makefile for:	missey
# Date created:				30 April 2004
# Whom:					delphij@FreeBSD.org.cn
#
# $FreeBSD: ports/mail/missey/Makefile,v 1.11 2012/11/17 05:59:06 svnexp Exp $
#

PORTNAME=	missey
PORTVERSION=	1.2.0
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://www.dengh.com/missey/
MASTER_SITES+=	${MASTER_SITE_LOCAL:S/%SUBDIR%/delphij/}
DISTNAME=	mps.${PORTVERSION}

MAINTAINER=	delphij@FreeBSD.org
COMMENT=	Secure small and high performance POP3 server

USE_BZIP2=	yes

MAKE_ENV+=	PTHREAD_CFLAGS="${PTHREAD_CFLAGS}" PTHREAD_LIBS="${PTHREAD_LIBS}" \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}" \
		INSTALL_DATA="${INSTALL_DATA}" MKDIR="${MKDIR}" WRKSRC="${WRKSRC}"

PLIST_FILES=	sbin/bent sbin/mps etc/mps/pop3d.conf-dist
PLIST_DIRS=	etc/mps

USE_RC_SUBR=	mps

post-extract:
	@${MV} ${WRKDIR}/mps/src ${WRKSRC}
	@${RM} -r ${WRKDIR}/mps

post-patch:
	@${CP}	${FILESDIR}/Makefile ${WRKSRC}/Makefile

.include <bsd.port.mk>
