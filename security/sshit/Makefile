# New ports collection makefile for:	sshit
# Date created:				18 December 2005
# Whom:					Jui-Nan Lin <jnlin@csie.nctu.edu.tw>
#
# $FreeBSD: ports/security/sshit/Makefile,v 1.10 2012/11/17 06:01:20 svnexp Exp $
#

PORTNAME=	sshit
PORTVERSION=	0.6
PORTREVISION=	4
CATEGORIES=	security
MASTER_SITES=	http://anp.ath.cx/sshit/ \
		${MASTER_SITE_LOCAL}

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Checks for SSH/FTP bruteforce and blocks given IPs

RUN_DEPENDS=	p5-Unix-Syslog>=0:${PORTSDIR}/sysutils/p5-Unix-Syslog \
		p5-IPC-Shareable>=0:${PORTSDIR}/devel/p5-IPC-Shareable \
		p5-Proc-PID-File>=0:${PORTSDIR}/devel/p5-Proc-PID-File

NO_BUILD=	yes
USE_PERL5_RUN=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PKGMESSAGE=	${WRKDIR}/pkg-message
SUB_FILES=	pkg-message

post-patch:
	@${REINPLACE_CMD} -e 's,^#!/usr/bin/perl,#!${PERL},' ${WRKSRC}/sshit

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/sbin/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.conf ${PREFIX}/etc/${PORTNAME}.conf-dist

post-install:
	@if [ ! -f ${PREFIX}/etc/${PORTNAME}.conf ]; then \
		${CP} -p ${PREFIX}/etc/${PORTNAME}.conf-dist ${PREFIX}/etc/${PORTNAME}.conf ; \
	fi
.if !defined(BATCH)
	@${CAT} ${PKGMESSAGE}
.endif

.include <bsd.port.mk>
