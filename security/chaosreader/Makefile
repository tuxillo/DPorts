# New ports collection makefile for:	chaosreader
# Date created:				1 Aug 2007
# Whom:					pauls
#
# $FreeBSD: ports/security/chaosreader/Makefile,v 1.4 2012/11/17 06:01:01 svnexp Exp $
#

PORTNAME=	chaosreader
PORTVERSION=	0.94
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	SF
DISTFILES=	${PORTNAME}${PORTVERSION} sshkeydata0.20
EXTRACT_ONLY=
NO_WRKSUBDIR=	yes

MAINTAINER=	pauls@utdallas.edu
COMMENT=	A tool to extract data from tcpdump logs

NO_BUILD=	yes
USE_PERL5_RUN=	yes

PLIST_FILES=	bin/${PORTNAME} bin/sshkeydata

post-extract:
	${CP} ${DISTDIR}/${PORTNAME}${PORTVERSION} ${WRKDIR}/${PORTNAME}
	${CP} ${DISTDIR}/sshkeydata0.20 ${WRKDIR}/sshkeydata

post-patch:
	${REINPLACE_CMD} s:/usr/bin/perl:${PERL}: \
		${WRKDIR}/${PORTNAME} ${WRKDIR}/sshkeydata

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKDIR}/sshkeydata ${PREFIX}/bin

.include <bsd.port.mk>
