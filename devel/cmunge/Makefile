# New ports collection makefile for:	cmunge
# Date created:			October 26th 2005
# Whom:				Frerich Raabe <frerich.raabe@gmx.de>
#
# $FreeBSD: ports/devel/cmunge/Makefile,v 1.7 2012/11/17 05:55:38 svnexp Exp $
#

PORTNAME=	cmunge
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.vcpc.univie.ac.at/vcpc/jhm/code/ \
		http://bsd-geek.de/FreeBSD/distfiles/
DISTNAME=	${PORTNAME}

MAINTAINER=	lme@FreeBSD.org
COMMENT=	A tool for encrypting and compacting C source code

WRKSRC=		${WRKDIR}/cmunger
MAKE_ARGS=	CC="${CC} ${CFLAGS}"

PLIST_FILES=	bin/cmunge bin/ctran bin/proc-incl
PORTDOCS=	*

post-patch:
	@${REINPLACE_CMD} -e 's|/vcpc_users/jhm/bin/cmunger|${PREFIX}|; \
		s|/usr/ccs/lib/cpp|/usr/bin/cpp|' ${WRKSRC}/cmunge

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/ctran ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bin/proc-incl ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/cmunge ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
