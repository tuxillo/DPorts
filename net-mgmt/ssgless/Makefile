# New ports collection makefile for:	ssgless
# Date created:				8 Nov 2011
# Whom:					Pavel I Volkov
#
# $FreeBSD: ports/net-mgmt/ssgless/Makefile,v 1.2 2012/11/17 06:00:38 svnexp Exp $
#

PORTNAME=	ssgless
PORTVERSION=	1.2
CATEGORIES=	net-mgmt
DISTFILES=

MAINTAINER=	pavelivolkov@googlemail.com
COMMENT=	View ScreenOS configuration files

LICENSE=	BSD

LESS=	`whereis -bq less`

NOFETCHFILES=	yes
NO_BUILD=	yes
NO_WRKSUBDIR=	yes
NO_MTREE=	yes

PLIST_FILES=	bin/${PORTNAME} bin/lesspipe-ssg.awk

SUB_FILES=	${PORTNAME} lesspipe-ssg.awk

SUB_LIST=	"AWK=${AWK}" "LESS=${LESS}"

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKDIR}/lesspipe-ssg.awk ${PREFIX}/bin

post-install:
	@${ECHO}
	@${CAT} ${PKGMESSAGE}
	@${ECHO}

.include <bsd.port.mk>
