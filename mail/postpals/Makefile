# New ports collection makefile for:	postpals
# Date created:				7 March 2010
# Whom:					Sahil Tandon <sahil@tandon.net>
#
# $FreeBSD: ports/mail/postpals/Makefile,v 1.3 2012/11/17 05:59:11 svnexp Exp $
#

PORTNAME=	postpals
PORTVERSION=	0.01
CATEGORIES=	mail
MASTER_SITES=	http://mailfud.org/${PORTNAME}/
DISTFILES=	${PORTNAME} ${PORTNAME}-taillog
EXTRACT_ONLY=	# none

MAINTAINER=	sahil@FreeBSD.org
COMMENT=	Postpals is a simple policy daemon for Postfix

RUN_DEPENDS=	p5-IO-Multiplex>=0:${PORTSDIR}/devel/p5-IO-Multiplex \
		p5-Net-Server>=0:${PORTSDIR}/net/p5-Net-Server \
		p5-File-Tail>=0:${PORTSDIR}/devel/p5-File-Tail

SUB_FILES=	pkg-message

USE_RC_SUBR=	${PORTNAME} ${PORTNAME}-taillog
USE_PERL5_RUN=	yes
NO_BUILD=	yes

USERS=		postpals
GROUPS=		postpals

do-install:
	@${INSTALL_SCRIPT} ${DISTFILES:S|^|${DISTDIR}/|} ${PREFIX}/sbin/
	@${INSTALL} -o ${PORTNAME} -g ${PORTNAME} -m 700 -d /var/db/postpals

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
