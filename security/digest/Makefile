# New ports collection makefile for:	digest
# Date created:				2001-03-09
# Whom:					trevor
#
# $NetBSD: Makefile,v 1.37 2003/07/17 22:52:13 grant Exp $
# $FreeBSD: ports/security/digest/Makefile,v 1.23 2012/11/17 06:01:03 svnexp Exp $
#

PORTNAME?=	digest
PORTVERSION?=	20050323
PORTREVISION=	1
CATEGORIES?=	security sysutils
MASTER_SITES?=	${MASTER_SITE_NETBSD}
MASTER_SITE_SUBDIR=	../../misc/digest

MAINTAINER?=	ports@FreeBSD.org
COMMENT?=	Message digest wrapper utility

CONFLICTS?=	emboss-[0-9]* qmail-ldap2-*

GNU_CONFIGURE=	yes

MAN1?=		${PORTNAME}.1

PLIST_FILES?=	bin/${PORTNAME}

.include <bsd.port.pre.mk>

test: build
	@${ECHO_MSG} "No news is good news"
	@cd ${WRKSRC} && ${SETENV} DIGESTDIR=${WRKSRC} DIGESTCMD=${PORTNAME} ${SH} ./regress.sh
	@${ECHO_MSG} "All tests completed"

.include <bsd.port.post.mk>
