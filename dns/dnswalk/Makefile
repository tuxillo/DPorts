# New ports collection makefile for:	dnswalk
# Date created:				17 January 1998
# Whom:					Matthew Hunt <mph@pobox.com>
#
# $FreeBSD: ports/dns/dnswalk/Makefile,v 1.19 2012/11/17 05:57:08 svnexp Exp $
#

PORTNAME=	dnswalk
PORTVERSION=	2.0.2
PORTREVISION=	1
CATEGORIES=	dns
MASTER_SITES=	SF

MAINTAINER=	mark@foster.cc
COMMENT=	DNS debugger - requests a zone transfer and analyzes the result

RUN_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS

NO_WRKSUBDIR=	YES
NO_BUILD=	YES
USE_PERL5=	YES

MAN1=		dnswalk.1

pre-configure:
	${MV} -f ${WRKDIR}/dnswalk ${WRKDIR}/dnswalk.orig
	${SED} -e "s#/usr/contrib/bin/perl#${PERL5}#"\
		 < ${WRKDIR}/dnswalk.orig > ${WRKDIR}/dnswalk

do-install:
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKDIR}/do-dnswalk ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKDIR}/makereports ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKDIR}/sendreports ${EXAMPLESDIR}
.endif
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKDIR}/README ${DOCSDIR}
	${INSTALL_DATA} ${WRKDIR}/dnswalk.errors ${DOCSDIR}
.endif
	${INSTALL_MAN} ${WRKDIR}/dnswalk.1 ${PREFIX}/man/man1
	${INSTALL_SCRIPT} ${WRKDIR}/dnswalk ${PREFIX}/bin

.include <bsd.port.mk>
